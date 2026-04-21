//right to left when sw2 is pressed
#include <lpc21xx.h>

unsigned int i, j;

void delay();

int main(){
    PINSEL1 = 0x0;
    IO0DIR = 0xFF0000;
    // 1<< 22 is for sw2 
    while(!(IOPIN1 & (1 << 22))){
        delay();
        for(j=23;j>15;j--){
            IO0SET = (1 << j);
            delay();
        }
    }
}

void delay(){
    for(i=0;i<1000000;i++);
}
