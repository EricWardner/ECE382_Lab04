ECE382_Lab04
============

![alt text](http://m.keygames.com/wp-content/uploads/2013/06/Pong-mobile-tablet-game.png)


<!-- saved from url=(0038)http://ece382.com/labs/lab4/index.html -->
<html lang="en"><head><meta http-equiv="Content-Type" content="text/html; charset=ISO-8859-1">
        <link rel="stylesheet" type="text/css" href="./ECE382 - Lab 4 - C -  Etch-a-Sketch and Pong _files/bootstrap-combined.min.css">
        <script src="./ECE382 - Lab 4 - C -  Etch-a-Sketch and Pong _files/bootstrap.min.js"></script>
    </head>
    <body data-feedly-mini="yes"><div id="StayFocusd-infobar" style="display: none; top: 1200px;">

</div>
<h2>Prelab</h2>
<h4>Eric Wardner</h4>
<table class="table table-striped table-bordered">
<thead>
<tr>
<th align="center">Size</th>
<th align="center">Signed/Unsigned</th>
<th align="center">Type</th>
<th align="center">Min value</th>
<th align="center">Max value</th>
</tr>
</thead>
<tbody>
<tr>
<td align="center" colspan="1">8-bit</td>
<td align="center" colspan="1">unsigned</td>
<td align="center" colspan="1">char</td>
<td align="center" colspan="1">0 or -128</td>
<td align="center" colspan="1">255 or 127</td>
</tr>
<tr>
<td align="center" colspan="1">8-bit</td>
<td align="center" colspan="1">signed</td>
<td align="center" colspan="1">signed char</td>
<td align="center" colspan="1">-128</td>
<td align="center" colspan="1">127</td>
</tr>
<tr>
<td align="center" colspan="1">16-bit</td>
<td align="center" colspan="1">unsigned</td>
<td align="center" colspan="1">unsigned short</td>
<td align="center" colspan="1">0</td>
<td align="center" colspan="1">65,535</td>
</tr>
<tr>
<td align="center" colspan="1">16-bit</td>
<td align="center" colspan="1">signed</td>
<td align="center" colspan="1">short or int</td>
<td align="center" colspan="1">-32,768</td>
<td align="center" colspan="1">32,767</td>
</tr>
<tr>
<td align="center" colspan="1">32-bit</td>
<td align="center" colspan="1">unsigned</td>
<td align="center" colspan="1">unsigned long</td>
<td align="center" colspan="1">0</td>
<td align="center" colspan="1">4,294,967,295</td>
</tr>
<tr>
<td align="center" colspan="1">32-bit</td>
<td align="center" colspan="1">signed</td>
<td align="center" colspan="1">long, signed long</td>
<td align="center" colspan="1">-2,147,483,648</td>
<td align="center" colspan="1">2,147,483,647</td>
</tr>
<tr>
<td align="center" colspan="1">64-bit</td>
<td align="center" colspan="1">unsigned</td>
<td align="center" colspan="1">unsigned long long</td>
<td align="center" colspan="1">0</td>
<td align="center" colspan="1">18,446,744,073,709,551,615</td>
</tr>
<tr>
<td align="center" colspan="1">64-bit</td>
<td align="center" colspan="1">signed</td>
<td align="center" colspan="1">long long, signed long long</td>
<td align="center" colspan="1">-9,223,372,036,854,775,808</td>
<td align="center" colspan="1">9,223,372,036,854,775,807</td>
</tr>
</tbody>
</table>

<p>Fill in the following chart with the appropriate C code definitions.</p>
<table class="table table-striped table-bordered">
<thead>
<tr>
<th align="center">Type</th>
<th align="center">Meaning</th>
<th align="center">C typedef declaration</th>
</tr>
</thead>
<tbody>
<tr>
<td align="center" colspan="1">int8</td>
<td align="center" colspan="1">unsigned 8-bit value</td>
<td align="center" colspan="1">typedef char int8</td>
</tr>
<tr>
<td align="center" colspan="1">sint8</td>
<td align="center" colspan="1">signed 8-bit value</td>
<td align="center" colspan="1">typedef signed char sint8</td>
</tr>
<tr>
<td align="center" colspan="1">int16</td>
<td align="center" colspan="1">unsigned 16-bit value</td>
<td align="center" colspan="1">typedef unsigned short int16;</td>
</tr>
<tr>
<td align="center" colspan="1">sint16</td>
<td align="center" colspan="1">signed 16-bit value</td>
<td align="center" colspan="1">typedef short sint16</td>
</tr>
<tr>
<td align="center" colspan="1">int32</td>
<td align="center" colspan="1">unsigned 32-bit value</td>
<td align="center" colspan="1">typedef unsigned long int32</td>
</tr>
<tr>
<td align="center" colspan="1">sint32</td>
<td align="center" colspan="1">signed 32-bit value</td>
<td align="center" colspan="1">typedef long sint32</td>
</tr>
<tr>
<td align="center" colspan="1">int64</td>
<td align="center" colspan="1">unsigned 64-bit value</td>
<td align="center" colspan="1">typedef unsigned long long int64</td>
</tr>
<tr>
<td align="center" colspan="1">sint64</td>
<td align="center" colspan="1">signed 64-bit value</td>
<td align="center" colspan="1">typedef long long sint64</td>
</tr>
</tbody>
</table>
<h3>Calling/Return Convention</h3>
<p>Examine the a, b, c, d, e variables in main, just after the call to the function func in line 16.</p>
<table class="table table-striped table-bordered">
<thead>
<tr>
<th align="center">Iteration</th>
<th align="center">a</th>
<th align="center">b</th>
<th align="center">c</th>
<th align="center">d</th>
<th align="center">e</th>
</tr>
</thead>
<tbody>
<tr>
<td align="center" colspan="1">1st</td>
<td align="center" colspan="1">0x000A</td>
<td align="center" colspan="1">0x0009</td>
<td align="center" colspan="1">0x0008</td>
<td align="center" colspan="1">0x0007</td>
<td align="center" colspan="1">0x0008</td>
</tr>
<tr>
<td align="center" colspan="1">2nd</td>
<td align="center" colspan="1">0x0010</td>
<td align="center" colspan="1">0x000F</td>
<td align="center" colspan="1">0x000E</td>
<td align="center" colspan="1">0x000D</td>
<td align="center" colspan="1">0x000E</td>
</tr>
<tr>
<td align="center" colspan="1">3rd</td>
<td align="center" colspan="1">0x0016</td>
<td align="center" colspan="1">0x0015</td>
<td align="center" colspan="1">0x0014</td>
<td align="center" colspan="1">0x0013</td>
<td align="center" colspan="1">0x0014</td>
</tr>
<tr>
<td align="center" colspan="1">4th</td>
<td align="center" colspan="1">0x001C</td>
<td align="center" colspan="1">0x001B</td>
<td align="center" colspan="1">0x001A</td>
<td align="center" colspan="1">0x0019</td>
<td align="center" colspan="1">0x001A</td>
</tr>
<tr>
<td align="center" colspan="1">5th</td>
<td align="center" colspan="1">0x0022</td>
<td align="center" colspan="1">0x0021</td>
<td align="center" colspan="1">0x0020</td>
<td align="center" colspan="1">0x001F</td>
<td align="center" colspan="1">0x0020</td>
</tr>
</tbody>
</table>
<br>
<table class="table table-striped table-bordered">
<thead>
<tr>
<th align="center">Parameter</th>
<th align="center">Value Sought</th>
</tr>
</thead>
<tbody>
<tr>
<td align="center" colspan="1">Starting address of <code>func</code></td>
<td align="center" colspan="1">0xC2C8</td>
</tr>
<tr>
<td align="center" colspan="1">Ending address of <code>func</code></td>
<td align="center" colspan="1">0xC2FC</td>
</tr>
<tr>
<td align="center" colspan="1">Register holding w</td>
<td align="center" colspan="1">R12</td>
</tr>
<tr>
<td align="center" colspan="1">Register holding x</td>
<td align="center" colspan="1">R13</td>
</tr>
<tr>
<td align="center" colspan="1">Register holding y</td>
<td align="center" colspan="1">R14</td>
</tr>
<tr>
<td align="center" colspan="1">Register holding z</td>
<td align="center" colspan="1">R15</td>
</tr>
<tr>
<td align="center" colspan="1">Register holding return value</td>
<td align="center" colspan="1">R12</td>
</tr>
</tbody>
</table>
<p><b>What is the role of the <code>extern</code> directive in a .c file?  </b>
<br><br>Declare without defining, it might be defined in another part of the program<br></p>
<p><b>What is the role of the <code>.global</code> directive in an .asm file (used in lines 28-32)?</b>
<br><br>So you can make symbol defined in one file and use it for/in others<br></p>



    

<div id="feedly-mini" title="feedly Mini tookit"></div></body></html>

##Lab Data

####Objectives
There were three main objectives and 3 possible bonus objectives in this lab.
######Required Functionality

Create an "Etch-a-Sketch" on the MSP430 where the directional buttons control which direction the "brush" moves and the AUX button controls the brush's color (black or white).
<table class="table table-striped table-bordered">
<thead>
<tr>
<th>Button</th>
<th>Function</th>
</tr>
</thead>
<tbody>
<tr>
<td>SW5/Up</td>
<td>Move the cursor up 1 block</td>
</tr>
<tr>
<td>SW4/Down</td>
<td>Move the cursor down 1 block</td>
</tr>
<tr>
<td>SW2/Left</td>
<td>Move the cursor left 1 block</td>
</tr>
<tr>
<td>SW1/Right</td>
<td>Move the cursor right 1 block</td>
</tr>
<tr>
<td>SW3/Aux</td>
<td>Toggle the color of the paint brush</td>
</tr>
</tbody>
</table>

This functionality was accomplished with a small change in the following given code. The given code causes a block to be drawn on the screen and allows it to be moved around with the directional buttons.

```C
while(1) {

	if (UP_BUTTON == 0) {
		while(UP_BUTTON == 0);
		if (y>=1) y=y-1;
		button_press = TRUE;
	} else if (DOWN_BUTTON == 0) {
		while(DOWN_BUTTON == 0);
		if (y<=6) y=y+1;
		button_press = TRUE;
	} else if (LEFT_BUTTON == 0) {
		while(LEFT_BUTTON == 0);
		if (x>=1) x=x-1;
		button_press = TRUE;
	} else if (RIGHT_BUTTON == 0) {
		while(RIGHT_BUTTON == 0);
		if (x<=10) x=x+1;
		button_press = TRUE;
	}
	if (button_press) {
		button_press = FALSE;
		clearDisplay();
		drawBlock(y,x);
	}
}
```
The key difference between the given code and the required funcitonality is the fact the the block gets cleared and redrawn with each button press, also the AUX button press is never detected.
First, to get the paint brush functionality, the clear display in the if(button_press) was simply removed. 
```C
if (button_press) {
	button_press = FALSE;
	//clearDisplay();
	drawBlock(y,x);
}
```

Next, the more difficult part of the required functionality was utilizing the AUX button to change the color. This meant I had to change the asm file in addition to the C file, specifically the drawBlock function was changed to allow for the passing of a color true/false variable. In the asm drawBlock function R14 represented the "boolean" color variable and a jump was added to decide if 0xFF (black) or 0x00 (white) should be written as the color
```asm
	tst		R14
	jnz		drawBlack
	mov		#0x00, R13
continue:
	mov.w	#0x08, R5			; loop all 8 pixel columns
loopdB:
	call	#writeNokiaByte	
```
```asm
drawBlack:
	mov		#0xFF, R13
	jmp		continue
```
This completed the required functionality.

######B Functionality

The objective for B functionality was to create a moving block that bounced around the screen. 

I began this functionality with my pong code from a past assignment here is the meat of the code
```C
if(someBall->position.x >= SCREEN_WIDTH || someBall->position.x <= 0){
	someBall->velocity.x = -1*someBall->velocity.x;
}
if(someBall->position.y >= SCREEN_HEIGHT || someBall->position.y <= 0){
	someBall->velocity.y = -1*someBall->velocity.y;
}

someBall->position.x += someBall->velocity.x;
someBall->position.y += someBall->velocity.y;
```
this program simply increments the ball's x and y position based on a given velocity and detects wall hits. 

My plan was to use the old code and implement it with the nokia.asm file to bounce the block around. To accomplish this I copied all of the files from the old pong code and added a clearDisplay and drawBlock call in pong's main.c file. The code in main looked as follows
```C
while(1){
    moveBall(&myBall);
    clearDisplay();
    drawBlock(myBall.position.y, myBall.position.x, black);
    _delay_cycles(5333333);
}
```
Debugging: I had to add in the delay function to make the moving block visible It also took a few tries to get the size of the screen exactly right. Luckily my pong code worked really well so there wasn't too much work involved in implementing th LCD screen. 

######A Functionality

######Bonus Functionality


Documentation: 
