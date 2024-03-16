using UnityEngine;
using UnityEngine.UI; // 引入UI命名空间来使用Slider

public class VolumeController : MonoBehaviour
{
    public Slider volumeSlider; // 引用UI Slider
    public AudioSource audioSource; // 引用场景中的AudioSource

    void Start()
    {
        // 初始化slider的值为当前音量
        volumeSlider.value = audioSource.volume;

        // 添加监听器，当Slider的值变化时调用SetVolume方法
        volumeSlider.onValueChanged.AddListener(delegate { SetVolume(volumeSlider.value); });
    }

    public void SetVolume(float volume)
    {
        // 设置AudioSource的音量
        audioSource.volume = volume;
    }
}
