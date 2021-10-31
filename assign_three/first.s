     AREA     factorial, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
	 IMPORT printMsg2p
	 IMPORT printMsg4p
     ENTRY 
__main  FUNCTION	
; IGNORE THIS PART 	
	    MOV  R3, #0x20000000
		ADD  R3, #0x5
		MOV  R4, #0x13
		STR  R4,[R3] 
		; IGNORE THIS PART 	
        MOV  R2,  #0x20000000              ; Base Address
        LDR R0, [R2, #0x5]              ; 0x5 is the offset  
        LSL r1, r0, #1 ; shift 1 bit left
        LSL r2, r1, #1 ; shift 1 bit left
		MOV R0, #0x12
		BL printMsg
		MOV R0, #0x12
		MOV R1, #0x13
        BL printMsg2p
		MOV R0, #0xAAAA
		MOV R1, #0xBBBB
		MOV R2, #0xCCCC
		MOV R3, #0xDDDD
		MOV R4, #0xEEEE
		BL printMsg4p
stop    B stop ; stop program
     ENDFUNC
     END 