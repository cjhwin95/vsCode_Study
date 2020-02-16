#include "timer1.h"
#include <avr/io.h>

void timer1_Init(float i)
{
  // 아두이노 스타일로 작성시 초기화 해야 합니다.
  TCCR1A = 0; TCCR1B = 0; 

  TCCR1B |= (1 << CS12) | (1 << CS10); // 분주비 1024설정

  OCR1A = (uint16_t)(15625*i); // 0.5초 8k

  TCCR1A |= (1 << COM1A0); // 비교일치 인터럽트 발생 시 OC1A핀의 출력 반전
  TCCR1B |= (1 << WGM12);  // CTC 모드

  DDRB |= (1 << PB1);
}