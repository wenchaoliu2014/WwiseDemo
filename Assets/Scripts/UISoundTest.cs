using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UISoundTest : MonoBehaviour
{
    Button StartBGBusic;
    Button StopBGMusic;
    Button ShootSound;
    Button PlayEnglishAudio;
    Button PlayChineseAudio;
    Button DirtButton;
    Button GravelButton;
    Button MetalSheetButton;
    Button WoodSolidButton;
    private Button DeadAliveButton;
    Slider slider;

    Slider mMusicSlider;
    Slider mSoundSlider;
    Slider mVoiceSlider;

    private bool bgIsPlaying;
    private bool bgMenu;
    void Start()
    {
        StartBGBusic = GameObject.Find("Button1").GetComponent<Button>();
        StopBGMusic = GameObject.Find("Button2").GetComponent<Button>();
        ShootSound = GameObject.Find("Button3").GetComponent<Button>();
        PlayEnglishAudio = GameObject.Find("Button4").GetComponent<Button>();
        PlayChineseAudio = GameObject.Find("Button5").GetComponent<Button>();
        DirtButton = GameObject.Find("Button6").GetComponent<Button>();
        GravelButton = GameObject.Find("Button7").GetComponent<Button>();
        MetalSheetButton = GameObject.Find("Button8").GetComponent<Button>();
        WoodSolidButton = GameObject.Find("Button9").GetComponent<Button>();
        DeadAliveButton = GameObject.Find("DeadAliveButton").GetComponent<Button>();
        slider = GameObject.Find("Slider").GetComponent<Slider>();
        mMusicSlider = GameObject.Find("SliderMusic").GetComponent<Slider>();
        mSoundSlider = GameObject.Find("SliderSound").GetComponent<Slider>();
        mVoiceSlider = GameObject.Find("SliderVoice").GetComponent<Slider>();

        mMusicSlider.onValueChanged.AddListener((v) =>
        {
            SetVolume(EAudioType.Music, v);
        });
        mSoundSlider.onValueChanged.AddListener((v) =>
        {
            SetVolume(EAudioType.Sound, v);
        });
        mVoiceSlider.onValueChanged.AddListener((v) =>
        {
            SetVolume(EAudioType.Voice, v);
        });

        slider.onValueChanged.AddListener((v) =>
        {
            PlayHeartBeat(v);
        });
        StartBGBusic.onClick.AddListener(() =>
        {
            if (!bgIsPlaying)
            {
                AudioManager.Instance.PlaySound("SFX_BG", AudioManager.Instance.GetEmitterGameObject(EAudioType.Music));
                bgIsPlaying = true;
            }
            else
            {
                if (!bgMenu)
                {           
                    AudioManager.Instance.PlaySound("SFX_StopBG", AudioManager.Instance.GetEmitterGameObject(EAudioType.Music));
                    AudioManager.Instance.SetSwitch("SFX_BG","menuscene");
                    AudioManager.Instance.PlaySound("SFX_BG", AudioManager.Instance.GetEmitterGameObject(EAudioType.Music));
                    bgMenu = true;
                }
                else
                {
                    AudioManager.Instance.PlaySound("SFX_StopBG", AudioManager.Instance.GetEmitterGameObject(EAudioType.Music));
                    AudioManager.Instance.SetSwitch("SFX_BG","battlescene");                    AudioManager.Instance.PlaySound("SFX_BG", AudioManager.Instance.GetEmitterGameObject(EAudioType.Music));
                    bgMenu = false;
                }
//                uint id = AudioManager.Instance.PlaySound("SFX_BG");
            }
            
        });
        StopBGMusic.onClick.AddListener(() =>
        {
            bgIsPlaying = false;
            AudioManager.Instance.PlaySound("SFX_StopBG", AudioManager.Instance.GetEmitterGameObject(EAudioType.Music));
        });
        ShootSound.onClick.AddListener(() =>
        {
            AudioManager.Instance.PlaySound("SFX_Shoot", () =>
            {
                Debug.Log("射击音效播放结束");
            }, AudioManager.Instance.GetEmitterGameObject(EAudioType.Sound));
        });

        PlayEnglishAudio.onClick.AddListener(() =>
        {
            PlayVoice("English(US)");
        });

        PlayChineseAudio.onClick.AddListener(() =>
        {
            PlayVoice("Chinese");
        });

        DirtButton.onClick.AddListener(() =>
        {
            PlayFootSteps(DirtButton.GetComponentInChildren<Text>().text);
        });
        GravelButton.onClick.AddListener(() =>
        {
            PlayFootSteps(GravelButton.GetComponentInChildren<Text>().text);
        });
        MetalSheetButton.onClick.AddListener(() =>
        {
            PlayFootSteps(MetalSheetButton.GetComponentInChildren<Text>().text);
        });
        WoodSolidButton.onClick.AddListener(() =>
        {
            PlayFootSteps(WoodSolidButton.GetComponentInChildren<Text>().text);
        });
        DeadAliveButton.onClick.AddListener(() =>
        {
            var result = AudioManager.Instance.SetState("PlayerLife", dead?"Dead":"Alive");
            dead = !dead;
//            uint id = AudioManager.Instance.PlaySound("Player_HeartBeat", AudioManager.Instance.GetEmitterGameObject(EAudioType.Sound));
        });
        //打开心跳声
        AudioManager.Instance.PlaySound("Player_HeartBeat", AudioManager.Instance.GetEmitterGameObject(EAudioType.Sound));
    }

    private bool dead;
    private bool big = true;
    void PlayVoice(string language)
    {
        var res = AkSoundEngine.SetCurrentLanguage(language); //备注:设置语言在运行的过程中不能频繁设置，游戏运行过程中只能设置一次，暂时测试出来结果是这样
        AudioCtrl.SetVoiceVolume(big?100:10);
        big = !big;
        AudioManager.Instance.PlayVoice("VO_OYe", AudioManager.Instance.GetEmitterGameObject(EAudioType.Voice));
    }

    void PlayHeartBeat(float volume)
    {
        volume *= 100;
        AudioManager.Instance.SetRTPC("PlayerHealth", volume);
    }

    void SetVolume(EAudioType type, float volume)
    {
        AudioManager.Instance.SetEmitterVolume(type, volume);
    }

    void PlayFootSteps(string switchStage)
    {
        var result = AudioManager.Instance.SetSwitch("Material", switchStage);
        uint id = AudioManager.Instance.PlaySound("Player_FootSteps");
    }

    private void OnDestroy()
    {
    }
}
