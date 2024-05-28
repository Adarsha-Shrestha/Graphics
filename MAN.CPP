#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main(){
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\TC\\BGI);

//head
circle (300,150,20);
//body
rectangle (280,180,320,280);
//legs
rectangle (280,280,295,380);//left
rectangle (305,280,320,380);//right

//shoes
rectangle (270,380,295,390);//left
rectangle (305,380,330,390);//right
//arms
rectangle (320,180,375,200);//right
rectangle (225,180,280,200);//left

getch();

closegraph();

}