/* 1장 상수와 변수
------------------------------------------------------------------------------------------
상수란(Constant) : 변하지 않고 항상 같은 값을 가지는 수를 말한다. 
변수란(Variable) : 계속 변하는 값이면서, 그 값을 저장하는 공간.예)그릇
리터럴(Literal) : 프로그램에서 문자열 그 자체가 값을 나타내는 것. 소스 코드의 고정된 값을 대표하는 용어다.

10진법,2진법,16진법 :
컴퓨터 메모리 단위 : 컴퓨터 메모리 소자는 0혹은 1의 값을 보관 할 수 있습니다. 이 이진수 한자리를 카리켜 비트(Bit) 라고 합니다.
                     한개는 비트는 0 또는 1의 값을 보관 할 수 있겠지만 너무 작은 양입니다. 그래서 사람들은 8개의 비트를 묶어서
                     바이트(Byte)라고 부릅니다. 즉 8비트는 1바이트 이지요.
                     1바이트로 표현 할 수 있는 수는 0 ~255까지 총 256개의 수를 나타낼 수 있습니다.
*/

#define F_CPU 16000000UL            // 주파수 16Mhz로 동작설정, ...UL: unsingned long
#include <avr/io.h>                 // AVR 기본 입출력 Header file
#include <util/delay.h>             // AVR Delay함수 Header file

int main() {                        // C언어 main() 함수

    DDRB = 0x20;                    // DDRB 는 PORT B의 뱡향 설정 , 기본은 INPUT , 0x20은 PB5만 출력으로 설정

    while(true) {                   // 무한 Loop 구성 (true or 1)
        PORTB = 0x00;               // PORTB의 8bit를 모두 0x00으로 0(LOW)로 출력
        _delay_ms(1000);            // 1000ms delay - 꺼진 상태에서 1초간 기다림
        PORTB = 0x20;               // PORTB의 8bit중 0x20 PB5만 1(HIGH)로 출력
        _delay_ms(1000);            // 1000ms delay - 켜진 상태에서 1초간 기다림
    }
    return 0;                       // int main() 함수의 return값 0을 반환 - 실제적으로는 위 loop함수 때문에 실행되지 않음.
}

/* 
    char : 한바이트문자 (8비트)

    int : 정수 (32비트) / system에 따란 틀림 arduino int는 2byte(16bit)입니다.

    float : 단정도(single - precision) 부동소수점 (소수점이하 정밀도 6자리 이상)

    double : 배정도(double - precision) 부동소수점 (소수점이하 정밀도 10자리 이상)

    

