using UnityEngine;
using UnityEngine.UI; // ����UI�����ռ���ʹ��Slider

public class VolumeController : MonoBehaviour
{
    public Slider volumeSlider; // ����UI Slider
    public AudioSource audioSource; // ���ó����е�AudioSource

    void Start()
    {
        // ��ʼ��slider��ֵΪ��ǰ����
        volumeSlider.value = audioSource.volume;

        // ��Ӽ���������Slider��ֵ�仯ʱ����SetVolume����
        volumeSlider.onValueChanged.AddListener(delegate { SetVolume(volumeSlider.value); });
    }

    public void SetVolume(float volume)
    {
        // ����AudioSource������
        audioSource.volume = volume;
    }
}
