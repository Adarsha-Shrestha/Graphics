#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void triangle(int x1, int y1, int x2, int y2, int x3, int y3){
line (x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
}

void Rotatetriangle(int x1, int y1, int x2, int y2, int x3, int y3,float angle){
float ra=(angle*3.14)/180;
int p,q;
printf("Enter the point of rotation:\n");
scanf("%d%d", &p,&q);
int a1 =p+(x1-p)*cos(ra)-(y1-q)*sin(ra);
int b1 =q+(x1-p)*sin(ra)+(y1-q)*cos(ra);
int a2 =p+(x2-p)*cos(ra)-(y2-q)*sin(ra);
int b2 =q+(x2-p)*sin(ra)+(y2-q)*cos(ra);
int a3 =p+(x3-p)*cos(ra)-(y3-q)*sin(ra);
int b3 =q+(x3-p)*sin(ra)+(y3-q)*cos(ra);
triangle(a1,b1,a2,b2,a3,b3);
}

void main(){
int gd=DETECT,gm;
initgraph(&gd,&gm, "c:\\TC\\BGI");
float angle;
int x1,y1,x2,y2,x3,y3;
printf("Enter x1,y1,x2,y2,x3,y3:\n");
scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);

triangle(x1,y1,x2,y2,x3,y3);

printf ("Enter the angle for rotation:\n");
scanf("%f",&angle);

Rotatetriangle(x1,y1,x2,y2,x3,y3,angle);

getch();
closegraph();
}