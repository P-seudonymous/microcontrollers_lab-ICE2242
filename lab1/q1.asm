// transfer 5 bytes of data from internal memory from 20h to 40h

        ORG 00H
START:  MOV R2, #05H // COUNTER
        MOV R0, #20H // SOURCE LOCATION
        MOV R1, #40H // DEST LOCATION

AGAIN:  MOV A, @R0
        MOV @R1, A 
        INC R0
        INC R1
        DJNZ R2, AGAIN
        END
