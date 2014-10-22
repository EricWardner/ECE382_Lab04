/*
 * pong.c
 *
 *  Created on: Oct 14, 2014
 *      Author: C16Eric.Wardner
 */

#include "pong.h"

void moveBall(ball *someBall){

	if(someBall->position.x > SCREEN_WIDTH || someBall->position.x < 0){
		someBall->velocity.x = -1*someBall->velocity.x;
	}
	if(someBall->position.y > SCREEN_HEIGHT || someBall->position.y < 0){
		someBall->velocity.y = -1*someBall->velocity.y;
	}

	someBall->position.x += someBall->velocity.x;
	someBall->position.y += someBall->velocity.y;

}

