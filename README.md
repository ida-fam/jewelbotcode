# Who am I
I am a girl who wants to learn programming and have fun with my dad at the same time :-)
I am completely new but think that it is cool to learn new things. I like to experiment a lot and
are not afraid to jump right in :-)

# VS Code Setup
Normally when Arduino is installed on windows all users will get access to the arduino enviroment. However the Jewelbots additional packages are installed per user. This means that each user on the computer must add the JewelBots boards.
1. Install the Arduino enviroment as instructed on https://jewelbots.com/pages/support. Add the JewelBots shown on the picture below. 
![alt text](https://github.com/ida-fam/jewelbotcode/blob/master/images/jewelbots_bards_installation.png "jewelbots installation boards")

2. Once all the packages are installed as recommended install VS Code editor (https://code.visualstudio.com/download)
3. Install the following extensions by pressing ctrl+p in vs code:
  * ext install vscode-arduino
  * ext install ms-vscode.cpptools
  * ext install eamodio.gitlens (optional)
  * ext install ms-python.python (optional)
## Disable Windows Defender Scanning
Windows Defender will automatically scan newly created build files. In order to speed up the compilation and upload, either disable windows defender or try to make relevant exclusions in the windows defender settings menu. A picture below shows the folder that I have excluded. Note that the arduino.json specifies a build dir above the folder of the jewelbot code.
![alt text](https://github.com/ida-fam/jewelbotcode/blob/master/images/windows_defender_exclusion_folder.png "verify and update exclusion folders")
  
# GIT Setup
If you want to use githup to host your projects you have to configure a couple of things.

* Follow the instructions on https://help.github.com/articles/setting-your-commit-email-address-in-git/ 