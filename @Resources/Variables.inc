; Weather-related variables
; Find your weather code for your location here: https://weather.codes/
[Variables]
WeatherCode=CAXX0530

Url=https://weather.com/en-CA/weather/today/l/#WeatherCode#
WeatherConditionRegex=(?siU)<div data-testid="wxPhrase"(.*)">\s*(\S.*)\s*</div>
RiseConditionRegex=(?siU)<div data-testid="SunriseValue"(.*)<p class="(.*)>(.*)</p>
SetConditionRegex=(?siU)<div data-testid="SunsetValue"(.*)<p class="(.*)>(.*)</p>
LastUpdateRegex=(?siU)CurrentConditions-CurrentConditions(.*)timestamp(.*)as of (.*)[ ABCDEFGHIJKLMNOPQRSTUVWXYZ]{4}</div>




; "Rain" Weather Meter Variables
Bands=80
; Number of raindrops - Activate Rainy Days\GenerateBands.ini skin after changing this value
Color=173,197,240
; (Do not add an alpha value)
BarWidth=1
; Raindrop width
BarHeight=108
; Maximum raindrop height
BarGap=23
; Spacing between the raindrops
RainSpeed=93
RainConstant=8
; Falling speed when no sound is playing
RainCover=#WORKAREAHEIGHT#
; Rainfall height
AverageSize=0
; Average sound levels over time to provide continuity
LoudnessEqualization=0
; Increases visibility for quiet audio sources when applicable
FFTSize=1024
FFTOverlap="(#FFTSize#-512)"
FFTAttack=10
FFTDecay=0
FreqMin=6
FreqMax=23520
Sensitivity=55
MusicPlayer=WMPlayer
; Music player process name, such as "VLC" (not "VLC.exe")
FirstBandIndex=1
; "0" band should be skipped for aesthetic purpose
IdleAudioTimeout=1
; How long before hiding the visualizer when no sound is playing
; Environment variables for settings window
SkinGroup=RainyDays
Config=#ROOTCONFIG#\Weather\Rain
ConfigPath=#ROOTCONFIG#\Weather\Rain\Rainy Days.ini
WriteVariable=Color
Slant=None
Invert=0
Channel=Avg
Port=Input
ID={0.0.1.00000000}.{73b4b487-4e8b-455c-9934-8460bd65d257}
