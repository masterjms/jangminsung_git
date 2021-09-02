#include "LedControl.h"
LedControl lc=LedControl(12,11,10,1);
byte hi[8] = {
  B10000010,
  B10000010,
  B10000000,
  B11110010,
  B10010010,
  B10010010,
  B10010010,
  B10010010};
byte by[8] = {
  B10000101,
  B10000101,
  B10000101,
  B11110111,
  B10010001,
  B10010001,
  B10010001,
  B11110111};
  
void setup() {
  lc.shutdown(0,false);
  lc.setIntensity(0,3);
  lc.clearDisplay(0);
}
void loop() {
  for(int i=0; i<8; i++)
  {
    lc.setRow(0,i,hi[i]); //matrix한행에 led제어(matrix번호,출력 행, 데이터)
}
delay(2000); //딜레이 구문이 밖에 있으므로 한번에 동시에 뜨고 2초딜레이 후 다음 글자 뜸

  for(int i=0; i<8; i++)
  {
    lc.setRow(0,i,by[i]); //matrix한행에 led제어(matrix번호,출력 행, 데이터)
}
delay(2000);
}
