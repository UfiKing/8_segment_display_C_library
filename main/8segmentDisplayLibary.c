#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
 
#include "8segDisplayLib.h"

void singleDigitExample1(uint8_t segments[8], uint32_t delay){
  
  TickType_t delayProccesed = delay / portTICK_PERIOD_MS;

  initSingleDigit(segments);
  while(1){
    for(uint8_t i = 0; i < 10; i++){
      displayNum(segments, i);
      vTaskDelay(delayProccesed);
    }
      
  }
}

void app_main(void){
  uint8_t digit[8] = {26, 25, 17, 16, 27, 14, 12, 13 };
  uint8_t x = 8;
   

  //singleDigitExample1(digit, 1000);
  initSingleDigit(digit);
  displayNum(digit, 0b11111111);
  while(1){
  
  }

}
