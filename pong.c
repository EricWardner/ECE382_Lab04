/*
 * pong.c
 *
 *  Created on: Oct 14, 2014
 *      Author: C16Eric.Wardner
 */

#include "pong.h"

extern void clearDisplay(unsigned char y, unsigned char x, unsigned char black);

void moveBall(ball *someBall, int padPos){

	if(someBall->position.x >= SCREEN_WIDTH || someBall->position.x <= 0 && someBall->position.y == padPos){
		someBall->velocity.x = -1*someBall->velocity.x;
	}
	if(someBall->position.y >= SCREEN_HEIGHT || someBall->position.y <= 0){
		someBall->velocity.y = -1*someBall->velocity.y;
	}
	if(someBall->position.x < 0){
		while(1){
			clearDisplay(0,0,1);
		}
	}

	someBall->position.x += someBall->velocity.x;
	someBall->position.y += someBall->velocity.y;

}

