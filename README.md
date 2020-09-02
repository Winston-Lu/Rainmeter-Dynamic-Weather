# Rainmeter-Dynamic-Weather

A Rainmeter skin template for a background that changes depending on the current location's time and weather 

This skin uses 2560x1440 (16x9) images that will change size depending on your screen resolution. See **Configuration** for details to change this below

Since Rainmeter is only on Windows system, this does not work with MacOS or GNU/Linux

## Screenshots
![Day clear](https://i.imgur.com/z6ophAd.png)
![Day rain](https://i.imgur.com/bVynsHV.png)
![Night light cloud](https://i.imgur.com/Br6xbz1.png)

## Installation
To install, you only need to install the [`Dynamic Weather_1.01.rmskin` file here](https://github.com/Winston-Lu/Rainmeter-Dynamic-Weather/raw/master/Dynamic%20Weather_1.01.rmskin). The source code is provided as well. To install it, make sure [Rainmeter 4.x is installed](https://www.rainmeter.net/) and then double click the rmskin file and hit Install.

I had tested this on my primary 1920x1080 screen. If you move this skin to a seperate monitor, you will also need to change the location of `Dynamic Weather\Weather\Rain\Rain.ini` and `Dynamic Weather\Weather\Snow\Snow.ini` as well. The rain skin should be configured by loading `Dynamic Weather\Weather\Rain\SettingsWindow\SettingsWindow.ini`. If not configured, the rain effect may extend to the right monitor (on a multi-monitor setup), or not take up the entirety of the monitor it is on, leaving a blank space where it doesnt rain on.

Under the Skins tab, select `Dynamic weather\BackgroundWeather.ini`, and click Load. I would also set these options once loaded into Rainmeter. I would also set `Dynamic Weather\Weather\Rain\Rain.ini` and `Dynamic Weather\Weather\Snow\Snow.ini` to these settings as well
* Position: On Desktop
* Load Order: Lowest possible if you have other skins on the "On Desktop" layer. Something like -9999999 will do if needed. Set the `Rain.ini` and `Snow.ini` to at least 1 above this value
* Draggable: Deselected
* Click through: Selected

![Config options](https://i.imgur.com/jbFOE2H.png)

If you plan to have multiple of this skin on multiple monitors, just install the skin under a different name, and load `DynamicWeather.ini` under each install, while also changing the monitor `Dynamic Weather\Weather\Rain\Rain.ini` and `Dynamic Weather\Weather\Snow\Snow.ini` loads into as well.

## Configuration
In .\Rainmeter-Dynamic-Weather\\@Resources\Variables.inc, change `WeatherCode` to the code you find on https://weather.codes/ something like CAXX#### for Canada, US__#### for US [__ is the state, like WA for Washington and CA for California], ASXX#### for Australia, and so on.

If you want to change the images, the background images are in `.\Rainmeter-Dynamic-Weather\@Resources\Images`. You must perseve the image names, which are case sensitive. The images provided are 2560x1440.

The skin width/height is automatically set to the current screens' width and height. If you have a different aspect ratio, you will need to change the images themselves to avoid stretching.

## Notes
This will hide all desktop icons and shortcuts. Due to the fact that Rainmeter can not be loaded undeneath desktop icons, there is no fix for this. The Rainmeter solution to this is to customize your desktop with dockers and launchers to replace them (if you dont use your start menu or taskbar to launch applications). Desktop shortcuts are overrated, and there are better replacements anyways.

* [Heres](https://images-wixmp-ed30a86b8c4ca887773594c2.wixmp.com/i/cb666ff8-a391-45e4-b019-eebbe3e97be0/d71ae5c-7528f7ff-ee13-4def-93c1-6baba7b8033e.jpg)
* [a pithole](https://images-wixmp-ed30a86b8c4ca887773594c2.wixmp.com/i/e1e9707c-74ea-4361-bad8-826bbfef41e3/ddvpcoy-bcfc053f-a59e-4654-aaa6-dfa8ec83d99c.jpg/v1/fill/w_492,h_250,q_70,strp/corner_dock_by_sinndbad_ddvpcoy-250t.jpg)
* [that](https://preview.redd.it/7ysy6q8hl2f21.png?width=1920&format=png&auto=webp&s=2e96410b1c99861b691dce181b2a86c2d6494c08)
* [Rainmeter](https://visualskins.com/i/c/600x400//media/p/406/dock-rainmeter.jpg)
* [can](https://preview.redd.it/hxmqdewu45921.png?width=432&format=png&auto=webp&s=1c89867f80840923126e4ecc0bbac31f8574f4c0)
* [set](https://i.redd.it/9o4omndoczp41.png)
* [you](https://visualskins.com/media/p/281/circle-launcher-rainmeter-3.jpg)
* [down](https://i.redd.it/5ug0uhp5o85y.png)

### Credits
Currently uses the [Montana background](https://www.deviantart.com/givesnofuck/art/Montana-337025212) by givesnofu, with weather variants created by myself

Also uses a [meter for rain by alatsombath](https://www.deviantart.com/alatsombath/art/Rainy-Days-desktop-music-visualizer-519515704) and a [meter for snow by /u/TheIcyStar](https://www.deviantart.com/theicystar/art/IcyStorm-V2-Realistic-rainmeter-snow-575299114)	

