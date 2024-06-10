#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>

void main(){
int gd=DETECT,gm;
initgraph(&gd,&gm, "c:\\TC\\BGI");

int x1, y1, x2, y2, stepsize, dx, dy, i;
float x,y,xinc,yinc;
printf ("Enter the value of x1 and y1:\n");
scanf("%d",&x1);
scanf("%d",&y1);
printf("Enter the value of x2 and y2:\n");
scanf("%d",&x2);
scanf("%d",&y2);

//x1 = 10, y1 = 10, x2= 300, y2 = 300;
dx = x2-x1;
dy = y2-y1;
x = x1;
y = y1;
if (abs(dy)>abs(dx)){
stepsize = abs(dy);
}
else{
stepsize = abs(dx);
}
xinc = dx/(float)stepsize;
yinc = dy/(float) stepsize;
putpixel(x,y,WHITE);
for(i=0;i<stepsize;i++){
x = x + xinc;
y = y + yinc;
putpixel((int)(x), (int)(y), WHITE);
delay(10);
}
getch();
closegraph();
}