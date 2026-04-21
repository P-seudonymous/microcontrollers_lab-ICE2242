//cw and anti cw dc motor
#include <lpc21xx.h>

void cw();
void a_cw();
unsigned int i;

int main(){
    IO0DIR = 0x00000900;
    IO0SET = 0x00000100; //P0.08 should always be high, motor enable
    while(1){
        cw();
        for(i=0;i<100000;i++);
        a_cw();
        for(i=0;i<100000;i++);
    }

}

void cw(){
    IO0CLR = 0x00000900; 
    for(i=0;i<100000;i++);
    IO0SET = 0x00000900; //P0.11 line for cw
}

void a_cw(){
    IO0CLR = 0x00000900;
    for(i=0;i<100000;i++);
    IO0SET = 0x00000100; // NOT selecting P0.11 for anti cw, but P0.08 since dirxn needs to be 0
}
