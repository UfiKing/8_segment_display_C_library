#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#include "8segDisplayLib.h"

void singleDigitExample1(uint8_t segments[8], uint32_t delay){
  
  TickType_t delayProccesed = delay / portTICK_PERIOD_MS;

  initSingleDigit(segments);
  while(1){
    for(uint8_t i = 0; i < 10; i++){
      displaySingleNum(segments, i);
      vTaskDelay(delayProccesed);
    }
      
  }
}

void app_main(void){
  uint8_t segments[8] = {26, 25, 17, 16, 27, 14, 12, 13};
  uint8_t digits[2] = {19, 18};
  uint8_t nums[2] = {1, 2};
  initMultipleSegments(segments, digits, 2);

  displaySingleNum(segments, 0b1000000);
  //vTaskDelay(1000 / portTICK_PERIOD_MS);  
  while(1){
    displayNums(segments, digits, nums , 2);
  }

}
