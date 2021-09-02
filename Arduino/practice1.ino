#include "LedControl.h"
LedControl lc= LedControl(12,11,10,1); //보드에 꽂은 핀의 위치 3개, matrix개수 1개, lc는 메트릭스 객체 이름.

void setup() {
  lc.shutdown(0,false); //matrix의 절전 모드 세팅,false는 정상모드
  lc.setIntensity(0,8); //maxtrx밝기의 값 조절 0~15
  lc.clearDisplay(0); //matrix(x)번의 모든 led off
}

void loop() {
   for(int row=0; row<8; row++)
   {
    for(int col=0;col<8;col++)
    {
      lc.setLed(0,col,row,true); //해당 행,열에 있는 led를 제어(matrix번호, 출력 열, 출력 행, 상태)
      delay(25);
    }
   }

  for(int row=0; row<8; row++)
   {
    for(int col=0;col<8;col++)
    {
      lc.setLed(0,col,row,false);
      delay(25);
    }
   }
}
