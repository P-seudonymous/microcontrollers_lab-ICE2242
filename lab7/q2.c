// make leds on and off from LEFT to RIGHT when sw1 is pressed 
// 0000 -> 1000 -> 1100 -> 1110 -> 1111 all when sw1 is pressed, so this is based on time delay, not consecutive switch presses
#include <lpc21xx.h>

unsigned int i;
unsigned int j;

int main(){
    PINSEL1 = 0x0;
    IO0DIR = 0xFF0000;
    // P0.23 corresponds to sw1, 22 corresponds to sw2 and so on.
    while(!(IO0PIN & (1 << 23))){
        for(i=0;i<100000;i++);
        for(j=16;j<24;j++){
            IO0SET = (1 << j);
            for(i=0;i<100000;i++);
        }
    }
}

