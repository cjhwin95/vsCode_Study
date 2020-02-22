#include <avr/io.h>
#include <util/delay.h>

void blink_led(uint8_t *port, uint8_t num)
{
    port = 0x00;   // PORTB의 8bit를 모두 0x00으로 0(LOW)로 출력
    _delay_ms(100); // 1000ms delay - 꺼진 상태에서 1초간 기다림
    port = num;   // PORTB의 8bit중 0x20 PB5만 1(HIGH)로 출력
    _delay_ms(100); // 1000ms delay - 켜진 상태에서 1초간 기다림
}