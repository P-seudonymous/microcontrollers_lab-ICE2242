//stepper motor, clockwise and anticlockwise
#include <lpc21xx.h>

void cw();
void a_cw();

unsigned long int var1, var2;
unsigned int i, j, k;

int main(){

    PINSEL0 = 0x00FFFFFF;
    IO0DIR |= 0x0000F000;
    while(1){
        for(j=0;j<50;j++)
            cw();
        for(k=0;k<65000;k++);
        for(j=0;j<50;j++);// 360/7.2 = 50
            a_cw();
        for(k=0;k<65000;k++);
    }
}




void a_cw(){
    var1 = 0x00010000; // for anti-clockwise movement;
    for(i=0;i<3;i++){
    //0 -> 3 for A B C D Stepping
        var1 = var1 >> 1;
        var2 = ~var1;
        var2 = var2 & 0x0000F;
        IO0PIN = ~var2;
        for(k=0;k<3000;k++);
    }
}


void cw(){
    var1 = 0x00000800; // for clockwise movement;
    for(i=0;i<3;i++){
    //0 -> 3 for A B C D Stepping
        var1 = var1 << 1;
        var2 = ~var1;
        var2 = var2 & 0x0000F;
        IO0PIN = ~var2;
        for(k=0;k<3000;k++);
    }
}
