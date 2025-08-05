#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include <stdint.h>
#include "8segDisplayLib.h"


void initSingleDigit(uint8_t segments[8]){
  for(uint8_t i = 0; i < 8; i++){
    gpio_reset_pin(segments[i]);
    gpio_set_direction(segments[i], GPIO_MODE_OUTPUT);
    gpio_set_level(segments[i], 0);

  }
  
} 

void displayNum(uint8_t segments[8], uint8_t number){

  switch(number){
    case 0:
      for(uint8_t i = 0; i < 8; i++){
        gpio_set_level(segments[i], (0b00111111 >> i) & 1); 
      }
      break;
    case 1:

      break;
    case 2:
      
      break;
    case 3:
      
      break;
    case 4:

      break;
    case 5:

      break;
    case 6:

      break;
    case 7:

      break;
    case 8:

      break;
    case 9:

      break;
  }
}




 
