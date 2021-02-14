#ifdef I2C_EEPROM
  #undef E2END                // remove previous definition in Arduino Core STM32 to be used with EEPROM emulation since a real EEPROM will be used
  #ifdef MARLIN_EEPROM_SIZE
    #undef MARLIN_EEPROM_SIZE
    #define MARLIN_EEPROM_SIZE 0x7FFF
  #endif
  #define USE_SHARED_EEPROM 1 // Use Platform-independent Arduino functions for I2C EEPROM
  #define E2END 0x7FFF        // redefine EEPROM end address for AT24C256 (32kB) based on FLASH_PAGE_SIZE -1 would have been 0X800
#endif

