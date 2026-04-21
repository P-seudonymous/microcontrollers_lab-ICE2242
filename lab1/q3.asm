// transfer 5 bytes of memory from external memory from 9400h to 9500h


        0RH 00H
START:  MOV R2, #05H
        MOV DPTR, #9400H
        MOVX A, @DPTR
        MOV R1, 82H
