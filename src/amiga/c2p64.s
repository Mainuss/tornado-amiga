

; 060 friendly version
;				modulo	max res	fscreen	compu
; c2p1x1_6_c5_gen		no	320x256?  no	030

BPLX	EQU	320
BPLY	EQU	180

BPLSIZE	EQU	BPLX*BPLY/8


    public _c2p1x1_6_c5_gen 

	section	code,code

; a0	c2pscreen
; a1	bitplanes
; d0 - n. pixels

_c2p1x1_6_c5_gen

	movem.l	d2-d7/a2-a6,-(sp)

	move.l	#$33333333,d5
	move.l	#$55555555,a6

	add.w	#BPLSIZE,a1

	move.l	d0,a2
	add.l	a0,a2
	cmp.l	a0,a2
	beq	.none

	movem.l	a0-a1,-(sp)

	move.l	(a0)+,d0
	move.l	(a0)+,d2
	move.l	(a0)+,d1
	move.l	(a0)+,d3

	move.l	#$0f0f0f0f,d4		; Merge 4x1, part 1
	and.l	d4,d0
	and.l	d4,d1
	and.l	d4,d2
	and.l	d4,d3
	lsl.l	#4,d0
	lsl.l	#4,d1
	or.l	d2,d0
	or.l	d3,d1

	move.l	(a0)+,d2
	move.l	(a0)+,d6
	move.l	(a0)+,d3
	move.l	(a0)+,d7

	and.l	d4,d2			; Merge 4x1, part 2
	and.l	d4,d6
	and.l	d4,d3
	and.l	d4,d7
	lsl.l	#4,d2
	lsl.l	#4,d3
	or.l	d6,d2
	or.l	d7,d3

	move.w	d2,d6			; Swap 16x2
	move.w	d3,d7
	move.w	d0,d2
	move.w	d1,d3
	swap	d2
	swap	d3
	move.w	d2,d0
	move.w	d3,d1
	move.w	d6,d2
	move.w	d7,d3

	move.l	d2,d6			; Swap 2x2
	move.l	d3,d7
	lsr.l	#2,d6
	lsr.l	#2,d7
	eor.l	d0,d6
	eor.l	d1,d7
	and.l	d5,d6
	and.l	d5,d7
	eor.l	d6,d0
	eor.l	d7,d1
	lsl.l	#2,d6
	lsl.l	#2,d7
	eor.l	d6,d2
	eor.l	d7,d3

	move.l	#$00ff00ff,d4
	move.l	d1,d6			; Swap 8x1
	move.l	d3,d7
	lsr.l	#8,d6
	lsr.l	#8,d7
	eor.l	d0,d6
	eor.l	d2,d7
	bra	.start1
.x1
	move.l	(a0)+,d0
	move.l	(a0)+,d2
	move.l	(a0)+,d1
	move.l	(a0)+,d3
	move.l	d7,-BPLSIZE(a1)

	move.l	#$0f0f0f0f,d4		; Merge 4x1, part 1
	and.l	d4,d0
	and.l	d4,d1
	and.l	d4,d2
	and.l	d4,d3
	lsl.l	#4,d0
	lsl.l	#4,d1
	or.l	d2,d0
	or.l	d3,d1

	move.l	(a0)+,d2
	move.l	(a0)+,d6
	move.l	(a0)+,d3
	move.l	(a0)+,d7
	move.l	a3,BPLSIZE(a1)

	and.l	d4,d2			; Merge 4x1, part 2
	and.l	d4,d6
	and.l	d4,d3
	and.l	d4,d7
	lsl.l	#4,d2
	lsl.l	#4,d3
	or.l	d6,d2
	or.l	d7,d3

	move.w	d2,d6			; Swap 16x2
	move.w	d3,d7
	move.w	d0,d2
	move.w	d1,d3
	swap	d2
	swap	d3
	move.w	d2,d0
	move.w	d3,d1
	move.w	d6,d2
	move.w	d7,d3
	move.l	a4,BPLSIZE*2(a1)

	move.l	d2,d6			; Swap 2x2
	move.l	d3,d7
	lsr.l	#2,d6
	lsr.l	#2,d7
	eor.l	d0,d6
	eor.l	d1,d7
	and.l	d5,d6
	and.l	d5,d7
	eor.l	d6,d0
	eor.l	d7,d1
	lsl.l	#2,d6
	lsl.l	#2,d7
	eor.l	d6,d2
	eor.l	d7,d3

	move.l	#$00ff00ff,d4
	move.l	d1,d6			; Swap 8x1
	move.l	d3,d7
	lsr.l	#8,d6
	lsr.l	#8,d7
	eor.l	d0,d6
	eor.l	d2,d7
	move.l	a5,(a1)+
.start1
	and.l	d4,d6
	and.l	d4,d7
	eor.l	d6,d0
	eor.l	d7,d2
	lsl.l	#8,d6
	lsl.l	#8,d7
	eor.l	d6,d1
	eor.l	d7,d3

	move.l	a6,d4
	move.l	d1,d6			; Swap 1x1
	move.l	d3,d7
	lsr.l	#1,d6
	lsr.l	#1,d7
	eor.l	d0,d6
	eor.l	d2,d7
	and.l	d4,d6
	and.l	d4,d7
	eor.l	d6,d0
	eor.l	d7,d2
	add.l	d6,d6
	add.l	d7,d7
	eor.l	d1,d6
	eor.l	d3,d7

	move.l	d0,a4
	move.l	d2,a5
	move.l	d6,a3

	cmpa.l	a0,a2
	bne	.x1
	move.l	d7,-BPLSIZE(a1)
	move.l	a3,BPLSIZE(a1)
	move.l	a4,BPLSIZE*2(a1)
	move.l	a5,(a1)+

	movem.l	(sp)+,a0-a1
	add.l	#BPLSIZE*4,a1

	move.l	#$55555555,d5
	move.l	#$30303030,a6

	move.l	(a0)+,d0
	move.l	(a0)+,d2
	move.l	(a0)+,d1
	move.l	(a0)+,d3

	move.l	a6,d4			; Merge 4x1, part 1
	and.l	d4,d0
	and.l	d4,d1
	and.l	d4,d2
	and.l	d4,d3
	lsr.l	#4,d2
	lsr.l	#4,d3
	or.l	d2,d0
	or.l	d3,d1

	move.l	(a0)+,d2
	move.l	(a0)+,d6
	move.l	(a0)+,d3
	move.l	(a0)+,d7

	bra.s	.start2
.x2
	move.l	(a0)+,d0
	move.l	(a0)+,d2
	move.l	(a0)+,d1
	move.l	(a0)+,d3
	move.l	d7,-BPLSIZE(a1)

	move.l	a6,d4			; Merge 4x1, part 1
	and.l	d4,d0
	and.l	d4,d1
	and.l	d4,d2
	and.l	d4,d3
	lsr.l	#4,d2
	lsr.l	#4,d3
	or.l	d2,d0
	or.l	d3,d1

	move.l	(a0)+,d2
	move.l	(a0)+,d6
	move.l	(a0)+,d3
	move.l	(a0)+,d7
	move.l	a3,(a1)+
.start2
	and.l	d4,d2			; Merge 4x1, part 2
	and.l	d4,d6
	and.l	d4,d3
	and.l	d4,d7
	lsr.l	#4,d6
	lsr.l	#4,d7
	or.l	d6,d2
	or.l	d7,d3

	move.w	d2,d6			; Swap 16x2
	move.w	d3,d7
	move.w	d0,d2
	move.w	d1,d3
	swap	d2
	swap	d3
	move.w	d2,d0
	move.w	d3,d1
	move.w	d6,d2
	move.w	d7,d3

	lsl.l	#2,d0			; Merge 2x2
	lsl.l	#2,d1
	or.l	d2,d0
	or.l	d3,d1

	move.l	d1,d7			; Swap 8x1
	lsr.l	#8,d7
	eor.l	d0,d7
	and.l	#$00ff00ff,d7
	eor.l	d7,d0
	lsl.l	#8,d7
	eor.l	d7,d1

	move.l	d1,d7			; Swap 1x1
	lsr.l	#1,d7
	eor.l	d0,d7
	and.l	d5,d7
	eor.l	d7,d0
	add.l	d7,d7
	eor.l	d1,d7

	move.l	d0,a3

	cmp.l	a0,a2
	bne.s	.x2
	move.l	d7,-BPLSIZE(a1)
	move.l	a3,(a1)

.none
	movem.l	(sp)+,d2-d7/a2-a6
	rts



