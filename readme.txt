# 项目名称

本项目的最终呈现形式是开发一个开放的数字人平台，该平台将融合最新的人工智能生成内容（AIGC）技术和虚拟现实（VR）技术，为用户提供一种全新的互动和学习体验。在这个平台上，用户可以进行两种主要的活动：与历史人物的对话和旅游文化展示。

## 开始入门

请下载项目源文件，并根据下面的安装和使用说明进行环境配置以及开启正确使用。

### 前提条件

Unity 2021.3.8 LTS
Pico Neo3 SDK
Ready Player Me Unity SDK

unity可以通过官方网站进行下载，使用unityhub管理项目。官方网站：https://unity.cn/releases
Pico Neo3 SDK 可以通过官方网站进行下载。官方网站：https://developer-cn.picoxr.com/resources/#sdk
Ready Player Me Unity SDK可以通过官方文档下载。官方文档：https://docs.readyplayer.me/ready-player-me/integration-guides/unity/quickstart

### 安装

1.下载并安装Unity Hub，安装完成后点击安装 > 安装编辑器，选择Unity 2021.3.8 LTS版本进行下载
注意：安装时需要勾选开发工具和安卓组件，如果已经安装过开发工具，则不需要勾选。
2.在Unity中打开项目目录
3.下载并解压PICO Unity Integration SDK,然后导入unity项目,在In Project中显示有PICO Integration则导入成功。
4.配置项目设置以支持Pico Neo3设备
5.在Package Manager界面点击“+”号按钮，选择“Add package from disk...”，跳转到步骤1中PICO Unity Live Preview Plugin解压的目录，选择“package.json”即可导入PICO Unity Live Preview Plugin。
6.安装XR Interaction Toolkit，从PackageManager中选择Unity Registry，找到XR Interaction Tookit，导入Samples包体。
7.此时在Edit->Project Setting的XR Plugin Management安卓页面选择Pico，PC页面勾选PICO Live Preview。
8.修改项目配置
点击Edit > Project Settings，弹出Project Settings界面，先修改Player的配置。在Player的“Other Settings”下，找到“Identification”选项，
1）将“Minimum API Level”设置为“Android 10.0 ‘Oreo’ (API level 29)”；
2）将“Target API Level”设置为“Automatic (highest installed)”（默认）。
3）将Scripting Backend改为IL2CPP，取消勾选ARMv7，勾选ARMv64。
9.通过官方网站提供的Git URL添加Ready Player Me组件。

请一步一步地按照说明安装和设置这个项目，直到它可以正常运行。

## 使用说明

1.pico设备开启开发者模式
1）开启 PICO VR 一体机。
2）前往 设置 > 通用 > 关于本机。
3）光标移至 软件版本号 并连续点击多次，直到左侧导航栏下方出现 开发者 选项。
4）点击 开发者，进入开发者选项界面。
5）打开右上角的 USB调试开关。

2.请将您的pico设备（pico neo 3）使用数据线（串流线）和可运行项目的电脑连接起来
1）在编辑器中打开你的项目
2）点击File->Build Settings，切换到Android，RunDevice中选择你的设备，没出现就按右边Refresh刷新一下
3）点击Build And Run，等待apk传输完成
4）在pico端打开资源库>未知来源>My Project
5）即可使用pico手柄体验游戏

## 联系信息

如果有疑问或需要帮助，可以通过以下方式联系我：

- 项目维护者：[陈书瑄]
- 邮箱：2397308492@qq.com
- QQ：2397308492




