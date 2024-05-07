#if GAMECREATOR
namespace GameCreator.Core
{
    using EasyBuildSystem.Features.Scripts.Core.Base.Builder;
    using EasyBuildSystem.Features.Scripts.Core.Base.Piece;
    using UnityEngine;

	public class BuilderChangeModeAction : IAction
	{
        public PieceBehaviour PieceToSelect;
        public EasyBuildSystem.Features.Scripts.Core.Base.Builder.Enums.BuildMode Mode;

        public override bool InstantExecute(GameObject target, IAction[] actions, int index)
        {
            BuilderBehaviour.Instance.ChangeMode(EasyBuildSystem.Features.Scripts.Core.Base.Builder.Enums.BuildMode.None);

            if (PieceToSelect != null)
                BuilderBehaviour.Instance.SelectPrefab(PieceToSelect);

            BuilderBehaviour.Instance.ChangeMode(Mode);
            return true;
        }

		#if UNITY_EDITOR
        public static new string NAME = "Easy Build System/Builder Change Mode";
		#endif
	}
}
#endif