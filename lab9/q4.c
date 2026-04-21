//when sw1 is pressed -> 90deg clockwise
//when sw3 is pressed -> 90deg anti-clockwise
#include <lpc21xx.h>

void cw();
void a_cw();

unsigned long int var1, var2;
unsigned int i, j, k;


int main(){
    PINSEL0 = 0x00FFFFFF;
    IO0DIR = 0x0000F000;
    while(1){

    if(!(IO1PIN & (1<<23))){
        for(j=0;j<13;j++)
            cw();
        }
    
    if(!(IO0PIN & (1<<21))){
        for(j=0;j<13;j++)
            a_cw();
        }
    }
}


void a_cw(){
    var1 = 0x00010000;
    for(i=0;i<3;i++){
    var1 = var1 >> 1;
    var2 = ~var1;
    var2 = var2 & 0x0000F000;
    IO0PIN = ~var2;
    for(k=0;k<7000;k++);
    }
}


void cw(){
    var1 = 0x00000800;
    for(i=0;i<3;i++){
    var1 = var1 << 1;
    var2 = ~var1;
    var2 = var2 & 0x0000F000;
    IO0PIN = ~var2;
    for(k=0;k<5000;k++);
    }

}

