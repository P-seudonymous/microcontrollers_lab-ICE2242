//blink leds using lpc2148
#include <lpc21xx.h>

unsigned int delay;

int main(){
    PINSEL1 = 0x0; // configures P.016 to P0.31 as GPIO
    IO0DIR = 0x00FF0000; // configures P0.16 to P0.23 as output
    while(1){
        IO0CLR = 0x00FF0000;
        for(delay=0;delay < 500000;delay++);
        IO0SET = 0x00FF0000;
        for(delay=0;delay < 500000;delay++);
    }
}

