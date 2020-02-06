![MassDrop CTRL Layout Image](https://github.com/duncanyoyo1/qmk_firmware/raw/master/keyboards/massdrop/ctrl/keymaps/duncanyoyo1/keyboard-layout.png)

# Duncanyoyo1's layout for the MassDrop CTRL

<<<<<<< HEAD
<<<<<<< HEAD
>Please note this branch has the SmartEEPROM feature enabled. To make it work you will need to flash with a mdloader that supports the SmartEEPROM feature. A version of the mdloader with patches can be found on my [GitHub](https://github.com/duncanyoyo1/mdloader/tree/master). You will need to build the mdloader for your operating system.
=======
  Please note this branch has the SmartEEPROM feature enabled. To make it work you will need to flash with a mdloader that supports the SmartEEPROM feature. A version of the mdloader with patches can be found on my [GitHub](https://github.com/duncanyoyo1/mdloader/tree/enable-smart-eeprom). You will need to build the mdloader for your operating system.
>>>>>>> Add note about SmartEEPROM feature for MassDrop CTRL in readme.md
=======
>Please note this branch has the SmartEEPROM feature enabled. To make it work you will need to flash with a mdloader that supports the SmartEEPROM feature. A version of the mdloader with patches can be found on my [GitHub](https://github.com/duncanyoyo1/mdloader/tree/master). You will need to build the mdloader for your operating system.
>>>>>>> Update readme.md

This layout is similar default layout, with Caps Lock as Ctrl unless Left Shift is held, then it will act as Caps Lock. I have also moved the normal Fn layer to Fn+Menu. This allows the use of the numpad with just Fn.

I have also added numpad 0-9 on the number row while holding Fn as well as a number pad on the right hand side of the board.


The Massdrop CTRL is a TKL mechanical keyboard featuring dual USB-C connectors, an integrated Hi-Speed USB 2.0 hub, and fully customizable RGB backlighting and underlighting.

Keyboard Maintainer: [Massdrop](https://github.com/massdrop)  
Hardware Supported: Massdrop, Inc. CTRL PCBs utilizing Microchip's ATSAMD51J18A MCU and USB2422 2-Port USB 2.0 Hi-Speed Hub Controller, and ISSI's IS31FL3733 LED Drivers.  
Hardware Availability: [Massdrop CTRL High Profile Mechanical Keyboard](https://drop.com/buy/massdrop-ctrl-high-profile-mechanical-keyboard)

Make example for this keymap (after setting up your build environment):

    make massdrop/ctrl:duncanyoyo1

For information on flashing this keyboard, visit the following links:
 
[Massdrop Loader Repository and Instructions](https://github.com/duncanyoyo1/mdloader/tree/master)

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
