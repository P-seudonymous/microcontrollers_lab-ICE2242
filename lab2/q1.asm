// add 2 16bit numbers in internal memory


        ORG 00H
START:  CLR C
        MOV R2, #02H
        MOV R0, #20H
        MOV R1, #40H

LOOP:   MOV A, @R0
        ADDC A, @R1 // ADD WITH CARRY
        MOV @R0, A // RESULT IN 20H--- ADDRS
        INC R0
        INC R1
        DJNZ R2, LOOP // DECREMENTS COUNT IF COUNT !=0, JUMPS TO LOOP
        CLR A
        ADDC A, #00H
        MOV @R0, A
        END 

