#include<stdio.h>
#include"graphics0.5.c"

void backrenderer()
 {
	 drawBackground(0,0,80,1,BLUE);
	 drawText(2,0,"Student Base",FAT,WHITE,BLUE);
	 drawBackground(0,1,80,23,GRAY);
	 drawBackground(2,2,60,17,BLACK);
	 drawBackground(63,2,15,17,BLACK);
	 drawHorizontalLine(2,19,60,"▔",FAT,WHITE,GRAY);
	 drawHorizontalLine(63,19,15,"▔",FAT,WHITE,GRAY);
	 drawVerticalLine(62,2,17,"▎",FAT,WHITE,GRAY);
	 drawVerticalLine(78,2,17,"▎",FAT,WHITE,GRAY);
	 drawBackground(63,22,15,1,BLACK);
	 drawText(63,21,"Last input:",DEFAULT,BLACK,GRAY);
	 drawHorizontalLine(2,23,60,"▔",FAT,WHITE,GRAY);
	 drawHorizontalLine(63,23,15,"▔",FAT,WHITE,GRAY);
	 drawVerticalLine(62,21,2,"▎",FAT,WHITE,GRAY);
	 drawVerticalLine(78,22,1,"▎",FAT,WHITE,GRAY);
	 drawText(2,20,"To get full list of commands type help.",DEFAULT,BLACK,GRAY);
	 drawBackground(2,21,60,2,BLACK);
 }
