#if TARGET_MODULE == esp32
  #define DOOR_1_PIN        13  
  #define DOOR_2_PIN        12  
  #define CHARGE_PIN        36  
  #define RESET_PIN         34  
  #define SPI_CLK_PIN       18  
  #define SPI_MISO_PIN      19  
  #define SPI_MOSI_PIN      23  
  #define SPI_CS_PIN        05 
  
  #define I2C_SCL_PIN       21
  #define I2C_SDA_PIN       22
  #define LED_GREEN_PIN     25  
  #define LED_RED_PIN       26  
  #define VOLTAGE_MEASURE_PIN  A7  //port 35


  #define EEPROM_SIZE  1984

#endif

#if TARGET_MODULE == esp8266
  #define DOOR_1_PIN        16 //16  //d0
  #define DOOR_2_PIN        16 //12  
  #define CHARGE_PIN        16  
  #define RESET_PIN         14//12  //3 //rx 
  #define SPI_CLK_PIN       15  //d5 
  #define SPI_MISO_PIN      13  //d6
  #define SPI_MOSI_PIN      12  //d7
  #define SPI_CS_PIN        2  //d8
  #define LED_GREEN_PIN     16 //0  
  #define LED_RED_PIN       16 //2  
  #define VOLTAGE_MEASURE_PIN  A0   
  #define I2C_SCL_PIN       5//5  //d1
  #define I2C_SDA_PIN       4 //4  //d2
  #define EEPROM_SIZE  1984

#endif
#include "string.h"
