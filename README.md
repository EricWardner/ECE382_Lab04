ECE382_Lab04
============

![alt text](http://m.keygames.com/wp-content/uploads/2013/06/Pong-mobile-tablet-game.png)


<!DOCTYPE html>
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


        </div>
    

<div id="feedly-mini" title="feedly Mini tookit"></div></body></html>
