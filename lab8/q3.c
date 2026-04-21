// clockwise when sw6 is pressed
#include <lpc21xx.h>

void cw();
unsigned int i;

int main(){
    IO0DIR = 0x00000900;
    IO0SET = 0x00000100;
    while(!(IOPIN1 & (1<<18))){
        cw();
        for(i=0;i<500000;i++)
    }
}

void cw(){
    IO0CLR = 0x00000900;
    for(i=0;i<100000;i++);
    IO0SET = 0x00000100;
    for(i=0;i<100000;i++);
    IO0CLR = 0x00000900;}
}

