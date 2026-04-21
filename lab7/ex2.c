// program to turn the relay ON and OFF
#include <lpc21xx.h>

unsigned int i;

int main(){
    IO0DIR = 0x00000400;
    IO0SET = 0X00000400;

    while(1){
        for(i=0;i<1000000;i++);
        IO0SET = 0x00000400 //relay is ON
        for(i=0;i<1000000;i++);
        IO0CLR = 0x00000400; //relay is OFF
    }
}
