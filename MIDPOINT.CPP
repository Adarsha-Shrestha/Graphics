#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <dos.h>
#include <conio.h>
int main() {
int x0, y0, r, x1, y1, p, pk;
printf("Enter the values of x0, y0, and r:\n");
scanf("%d %d %d", &x0,&y0,&r);
int gd = DETECT, gm;
initgraph(&gd, &gm, "c:\\tc\\bgi");
putpixel(x0, y0, GREEN);
x1 = r;
y1 = 0;
p = 1-r;
do {
if(p < 0) {
y1++;
pk = p + 2*y1 + 3;
}
else {
x1--;
y1++;
pk = p + 2*y1 - 2*x1 +5;
}
p = pk;
putpixel(x1+x0, y1+y0, WHITE);
delay(10);
putpixel(-x1+x0, y1+y0, WHITE);
delay(10);
putpixel(-x1+x0, -y1+y0, WHITE);
delay(10);
putpixel(x1+x0, -y1+y0, WHITE);
delay(10);
putpixel(y1+x0, x1+y0, WHITE);
delay(10);
putpixel(y1+x0, -x1+y0, WHITE);
delay(10);
putpixel(-y1+x0, -x1+y0, WHITE);
delay(10);
putpixel(-y1+x0, x1+y0, WHITE);
delay(10);
} while(y1 <= x1);
getch();
closegraph();
return 0;
}