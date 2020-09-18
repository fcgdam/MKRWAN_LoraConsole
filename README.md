# MKRWAN_LoraConsole

This sample sketch, that can be compiled using Platformio (pio run -t upload) can be used to connect directly to the Murata Lora module available on the MKRWAN 1300 and 1310 boards.

# Installing

Just connect the board to an USB port and run the *pio run -t upload* command.

# Using

Connect to the board using a serial communications program such as:  miniterm2.py /dev/ttyACM0 or minicom -D /dev/ttyACM0 -b 115200

# Some commands:

AT+VER?   -> Obtains the Lora firmware version. Anything below 1.1.5 is bad (probably)

Check how to upgrade the Firmware version on https://primalcortex.wordpress.com/2020/09/18/upgrading-the-arduino-mkrwan-murata-lora-module-firmware/

