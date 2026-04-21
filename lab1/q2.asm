// program to interchange 2 blocks of data residing at internal memory from 20h and 40h


        ORG 00H
START:  MOV R2, #05H // COUNTER
        MOV R0, #20H
        MOV R1, #40H

AGAIN:  MOV A, @R0
        XCH A, @R1 // exchanges the content
        MOV @R0, A
        INC R0
        INC R1
        DJNZ R2, AGAIN
        END
