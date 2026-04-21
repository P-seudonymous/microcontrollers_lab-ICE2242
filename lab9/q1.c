//90degrees in clockwise
#include <lpc21xx.h>

void cw();
unsigned int i,j,k;
unsigned long int var1, var2;

int main(){
    PINSEL0 = 0x00FFFFFF;
    IO0DIR |= 0x0000F000; 
    while(1){
        for(j=0;j<12;j++)
            cw();
        for(k=0;k<6500000;k++);
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
