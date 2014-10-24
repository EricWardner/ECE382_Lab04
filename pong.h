/*
 * pong.h
 *
 *  Created on: Oct 13, 2014
 *      Author: C16Eric.Wardner
 */

#ifndef PONG_H_
#define PONG_H_

#define SCREEN_WIDTH 11
#define SCREEN_HEIGHT 8

typedef struct{
    int x;
    int y;
}vector2d;

typedef struct{
    vector2d position;
    vector2d velocity;
    unsigned char radius;
}ball;

ball createBall(int xPos, int yPos, int xVel, int yVel, unsigned char radius);

void moveBall(ball *ballToMove, int padPos);



#endif /* PONG_H_ */
