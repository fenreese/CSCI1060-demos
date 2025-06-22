# CSCI1060U Lab 1

# Getting set up for this course
For this course, I'd recommend getting used to **Unix** commands in a terminal. If you're on Windows, I recommend installing the Windows Subsystem for Linux. If you're on MacOS, you're already on a Unix machine - you just need to set up GCC!

# WSL (on Windows)

## Prerequisites
If you haven't already, make sure you get into your computer's BIOS and enable virtualization. 

### To get into BIOS
On Windows 10 (unsure about 11, I have never touched it in my life. Might be the same thing):
1. Go to **Settings**, then **Update & Security**.
2. There will be a menu on the left. Click the **Recovery** option.
3. Focus on the main menu, and find the **Advanced settings** header. Click on the **Restart now** button.
4. Your computer will restart and boot up to some horribly blue menu. Click on **Troubleshoot**, then **Advanced options**, and then **UEFI Firmware Settings** or **Startup settings**.
5. Restart your computer, and you should be in the BIOS.

### To enable virtualization
This will depend on your laptop manufacturer and the type of processor you have; unfortunately I can't help you any further with this. Googling `enable virtualization in bios intel acer` on your phone for an Acer laptop with an Intel processor, for example, will be a good start.

## WSL Installation
Microsoft made it really easy to get WSL like... really recently. There's also a harder way, but your computer should be up to date to just do it the easy way.

### The straightforward way
1. Open **Windows Powershell (or Command Prompt) __*as an administrator*__**. (Right-click on PowerShell/Command Prompt and select "Run as administrator")
2. Type in `wsl --install`.
  - If you get a long message telling you how to use WSL, great! You already have it installed. Go on over to step 4. If not, keep reading.
  - If you get progress messages telling you it's installing WSL, wait for it. You know you're done when it shows a message along the lines of `The requested operation is successful. Changes will not be effective unless the system is rebooted`.
3. Go reboot your PC.
4. Open Command Prompt/PowerShell again (not as administrator), and type in `wsl`. You should be greeted with a Ubuntu BASH shell, followed by a lot of setup if it's your first time.
  - When it comes to making a user, set your username and password. **Make sure you remember your password.**
6. You're good to go!

## GCC installation
At this point, you should have Ubuntu WSL installed.

1. Make sure you're on WSL if you aren't already (on Command Prompt/PowerShell, type `wsl`).
2. Update your package repositories (sites your computer will download packages from) with `sudo apt update && sudo apt upgrade`. (This is where you'll need your user password.)
3. After Ubuntu tells you it's done updating everything, type in `sudo apt install build-essential`. This will install every necessary compilation tool, including GCC.
4. When that's done, check you have G++ by typing in `g++ --version`. If it gives you a version, you did it! Happy compiling!

## Using WSL
- `cd` **c**hange **d**irectory - navigate to other directories
  - Your Windows drives are under the `/mnt` folder. For example, if you wanted to access your `C:` drive, use `cd /mnt/c`.
  - `cd ..` goes back a folder.
- `ls` **l**i**s**t all the files in the directory
- `touch` create a new file. For example, `touch main.cpp` will make a new file in the current directory called `main.cpp`.
- `pwd` show your **p**resent **w**orking **d**irectory
- `code main.cpp` or `nano main.cpp` will open `main.cpp` in VSCode or Nano
- `mkdir` **m**a**k**e **dir**ectory, creates a new folder

A fellow TA of mine, Sejal, has made a cheatsheet with all the basic Linux commands you'll need. Find the Files section of this Replit, and look for `Lab 1 Instructions.pdf`.

# VS Code, WSL, and Windows

Installed WSL? Using Visual Studio Code? Writing C++ code and not knowing why there are squiggly lines when you type `#include <iostream>`? **Open your VSCode under WSL! Also, make sure your VSCode has the *Remote - WSL* extension.** To do this:

1. Open the folder that your `helloworld.cpp` is in **with WSL**. There are two ways to do this:
  - **Visually:** Open the folder your code is in on your File Explorer. Go back a folder from there. Right-click, while holding Shift, the name of the folder, and select the **Open Linux shell here** option.
  - **Using the command line:** If your code is in `C:\Users\Reese\My Documents\CSCI1060U\helloworld`, for example, `cd` to your C drive first (with `cd /mnt/c`) and then `cd Users/Reese/My\ Documents/CSCI1060U/helloworld` (note the forward slash and the backslash being used as an escape here.)
2. Once in the folder your `.cpp` file is in, type in `code .` which will, if it's your first time, set up some stuff I haven't bothered reading, and then launch VS Code. If it's successful, the bottom left bar of the new VSCode window that will pop up should say something like `WSL: Ubuntu`.
3. Open the `helloworld.cpp` file. There should be no squiggly lines!

# MacOS
If you have installed Homebrew on your Mac, you do not need to follow these directions - it has already installed G++ for you.

1. Install XCode on the App Store or wherever Apple tells you to download it (I don't remember).
2. Open up the Terminal app. 
3. Type in `xcode-select --install`. It'll install all the compilation tools needed.
4. After installation, type `g++ --version` to double-check. If it gives you a version, you did it! Happy compiling!

# More Resources
- VSCode and WSL (article): https://code.visualstudio.com/docs/cpp/config-wsl
- Installing WSL (video): https://www.youtube.com/watch?v=n-J9438Mv-s (skip to 4:25)
- MacOS C++ setup (video): https://youtu.be/YuutFT6Yhic 
- Sejal's WSL quickstart guide (PDF): under Files, find `Lab 1 instructions.pdf`

# FAQ
> What if I wanna use \_\_\_ to compile my C++ code?

Honestly, nothing is stopping you from using anything else I haven't described in detail above! I'll even make a list of things you may want to use:

- MinGW

You can use this, but I would recommend against it, as for this course you **will** be using Unix commands, and for later courses, you **will** need to program in Linux. There are some Unix commands (like `chmod`) that *may not work* with MinGW.

- Replit

Replit is basically a Linux session running In The Cloud, more or less. If you can't get WSL and you don't want to set up a VM/dual-boot, or you're on something that isn't MacOS/Windows/Linux, I would recommend this.

> What if I wanna use \_\_\_ to run Linux?

- Dualbooting Linux

The best way to get used to Linux.

Seriously though, I may be able to help you out with Linux-specific stuff. If you're doing this though, I trust you know what you're doing.

- A virtual machine running Linux

You can do this, yes!

> I have a problem during installation/a question that you haven't covered!

Come to me and ask me questions:
- in my lab session after I've said everything I've needed to say
- from whenever I wake up to 8pm on Slack on weekdays
- On Discord, if you can find me, with the same business hours (not really recommended)

# The Code
Click on `lab1.cpp` on the Files column. All the code should be commented. 