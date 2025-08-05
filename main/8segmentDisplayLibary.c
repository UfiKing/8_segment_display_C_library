#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
 

#include "8segDisplayLib.h"

/*
void setPin(char segment, Digit* digStruct, uint8_t value){
  
  if(segment == 'A'){
    digStruct->0 = value;
  }else if (segment == 'B'){
    digStruct->1 = value;
  }else if (segment == 'C'){
    digStruct->2 = value;
  }else if(segment == 'D'){
    digStruct->3 = value;
  }else if(segment == 'E'){
    digStruct->4 = value;
  }else if(segment == 'F'){
    digStruct->5 = value;
  }else if(segment == 'G'){
    digStruct->6 = value; 
  }else if(segment == 'P'){
    digStruct->7 = value;
  }else{
    ESP_LOGI("setPin", "INVALID SEGMENT VALUE");
  }


}

void setPins(Digit* digStruct, int pins[8]){
  digStruct->A = pins[0];
  digStruct->B = pins[1];
  digStruct->C = pins[2];
  digStruct->D = pins[3];
  digStruct->E = pins[4];
  digStruct->F = pins[5];
  digStruct->G = pins[6];
  digStruct->P = pins[7];
  for(int i = 0; i < 8; i++){
    digStruct->i = pins[i];
  }
}

void setupPins(Digit* digStruct){
  for(int i = 0; i < 8; i++){
    gpio_reset_pin(digStruct->i);
    gpio_set_direction(digStruct->i, GPIO_MODE_OUTPUT);
    gpio_set_level(digStruct->i, 0);
  }
}
*/
void app_main(void){
  
  TickType_t delay = 500 / portTICK_PERIOD_MS;

  uint8_t digit[8] = {26, 25, 17, 16, 27, 14, 12, 13 };
  initSingleDigit(digit);
  while(1){
    for(uint8_t i = 0; i < 10; i++){
      displayNum(digit, i);
      vTaskDelay(delay);
    }
      
  }


}
