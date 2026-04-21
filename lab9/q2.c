//120 degree anti-cw
#include <lpc21xx.h>

void a_cw();
unsigned long int var1, var2;
unsigned int i,j,k;

int main(){
    PINSEL0 = 0x00FFFFFF;
    IO0DIR = 0x0000F000;
    while(1){
        for(j=0;j<17;j++)
            a_cw(); // 120/7.2 = 17
        for(k=0;k<6500000;k++)
    }
}

void a_cw(){
    var1 = 0x00010000;
    for(i=0;i<3;i++){
    var1 = var1 >> 1;
    var2 = ~var1;
    var2 = var2 & 0x0000F000;
    }
    IO0PIN = ~var2;
    for(k=0;k<7000;k++)
}
