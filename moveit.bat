del C:\Users\james\Documents\3d\firmware\james\Marlin\.pio\build\STM32F103RET6_creality\*.elf
copy C:\Users\james\Documents\3d\firmware\james\Marlin\.pio\build\STM32F103RET6_creality\*.bin "C:\Users\james\Documents\GitHub\Marlin\firmware archive\james"
move C:\Users\james\Documents\3d\firmware\james\Marlin\.pio\build\STM32F103RET6_creality\*.bin "C:\Users\james\Documents\3d\firmware\james"
del D:\*.bin
copy C:\Users\james\Documents\3d\firmware\james\*.bin D:\
fsutil volume dismount D:\
