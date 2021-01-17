#!/bin/bash
#~/.platformio/penv/bin/platformio run -s -d ~/Marlin_Custom/platformio.ini -e STM32F103RET6_creality
git -C /home/james/Marlin_Custom checkout james
~/.platformio/penv/bin/platformio run -s -d ~/Marlin_Custom/platformio.ini -e STM32F103RET6_creality
rm ~/Marlin_Custom/.pio/build/STM32F103RET6_creality/*.elf
chmod 644 ~/Marlin_Custom/.pio/build/STM32F103RET6_creality/*.bin
rename 's/firmware-*/firmware_james-/' ~/Marlin_Custom/.pio/build/STM32F103RET6_creality/*.bin
mv ~/Marlin_Custom/.pio/build/STM32F103RET6_creality/*.bin /home/james/Marlin_Custom/firmware/james 
git -C /home/james/Marlin_Custom/ pull
git -C /home/james/Marlin_Custom/ add /home/james/Marlin_Custom/firmware/james/*.bin
git -C /home/james/Marlin_Custom/ commit -m "firmware (james) scheduled build $(date +'%Y%m%d %H:%M:%S')"
git -C /home/james/Marlin_Custom/ push 
