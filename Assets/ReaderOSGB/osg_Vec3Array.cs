﻿using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

namespace osgEx
{
    public class osg_Vec3Array : osg_Array
    {
        public override bool read(Object gameObj, BinaryReader reader, ReaderOSGB owner)
        {
            GameObject parentObj = gameObj as GameObject;
            if (!base.read(gameObj, reader, owner))
                return false;

            int numData = reader.ReadInt32();
            List<Vector3> vArray = new List<Vector3>();
            for (int i = 0; i < numData; ++i)
            {
                Vector3 v = new Vector3(reader.ReadSingle(),
                                        reader.ReadSingle(), reader.ReadSingle());
                vArray.Add(v);
            }

            GeometryData gd = parentObj.GetComponent<GeometryData>();
            if (gd != null) gd._vec3Array = vArray;
            return true;
        }
    }
}
