#include <msp430g2553.h>
#include "pong.h"

extern void init();
extern void initNokia();
extern void clearDisplay();
extern void drawBlock(unsigned char row, unsigned char col, unsigned char black);

#define		TRUE			1
#define		FALSE			0
#define		UP_BUTTON		(P2IN & BIT5)
#define		DOWN_BUTTON		(P2IN & BIT4)
#define		AUX_BUTTON		(P2IN & BIT3)
#define		LEFT_BUTTON		(P2IN & BIT2)
#define		RIGHT_BUTTON	(P2IN & BIT1)
/*
 * main.c
 */
void main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

    unsigned char	black;

	// === Initialize system ================================================
	IFG1=0; /* clear interrupt flag1 */
	WDTCTL=WDTPW+WDTHOLD; /* stop WD */
	black = TRUE;


	init();
	initNokia();
	clearDisplay();

    vector2d pos = {0,3};
    vector2d vel = {1,1};
    unsigned char rad = 2;

    ball myBall;
    myBall.position = pos;
    myBall.velocity = vel;
    myBall.radius = rad;
	
    while(1){
    	moveBall(&myBall);
    	clearDisplay();
    	drawBlock(myBall.position.y, myBall.position.x, black);
    	_delay_cycles(5333333);
    }

}
