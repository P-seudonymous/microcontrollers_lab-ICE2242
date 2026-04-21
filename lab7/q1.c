//blink alternate LEDs 
#include <lpc21xx.h>

unsigned int i;

int main(){
    PINSEL = 0x0;
    IO0DIR = 0xFF0000;
    while(1){
        //bitshitf by 16 since P0.16-23
        IO0CLR = (0xAA << 16); // 10101010 LED Pattern
        for(i=0;i<1000000;i++);
        IO0SET = (0xAA << 16);
        for(i=0;i<1000000;i++);
        IO0CLR = (0x55 << 16); // 01010101 LED Pattern
        for(i=0;i<1000000;i++);
        IO0SET = (0x55 << 16);
        for(i=0;i<1000000;i++);
    }
}
