#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <dos.h>

void drawtriangle(tx,ty){
int x1,y1,x2,y2,x3,y3;
printf("Enter coordinates of a triangle:\n");
scanf("%d %d", &x1,&y1);
scanf("%d %d", &x2,&y2);
scanf("%d %d", &x3,&y3);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);

x1 = x1+tx;
y1 = y1+ty;
x2 = x2+tx;
y2 = y2+ty;
x3 = x3+tx;
y3 = y3+ty;

line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
}
void Rectangle(tx,ty){
int x1,y1,x2,y2;
printf("Enter coordinates of a rectangle:\n");
scanf("%d %d", &x1,&y1);
scanf("%d %d", &x2,&y2);
rectangle(x1,y1,x2,y2);
x1 = x1+tx;
y1 = y1+ty;
x2 = x2+tx;
y2 = y2+ty;
rectangle(x1,y1,x2,y2);
}
void main() {
int gd = DETECT, gm;
initgraph(&gd, &gm, "c:\\tc\\bgi");

int x1,y1,x2,y2,x3,y3;
int tx,ty,ch;
printf("Enter translation vector:\n");
scanf("%d %d", &tx, &ty);
printf("1.Triangle,2.Rectangle\n");
scanf("%d", &ch);
switch(ch)
{
case 1: drawtriangle(tx,ty);
break;
case 2: Rectangle(tx,ty);
break;
default: printf("Wrong Choice");
break;
}
getch();
closegraph();
}