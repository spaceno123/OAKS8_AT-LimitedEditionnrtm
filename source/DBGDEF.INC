;	Program	DBGDEF.INC
;	Date 2004/2/25 .. 2004/2/25
;	Copyright (c) 2004 by AKIYA.
;	All rights reserved.

IPLON	.equ	1	; 1 on IPL

	.glb	dbg_flag

ungetc_f	.btequ	0,dbg_flag
dbgmod_f	.btequ	7,dbg_flag
