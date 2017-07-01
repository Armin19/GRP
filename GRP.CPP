#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>

double x=200,y=200;
double angle=0;
const double PI=3.141592;
int main(){
int gd=DETECT;
int gm=DETECT;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

while(angle<90){
	double rad=angle /180*PI;
	cleardevice();
	double rx=x*cos(rad)-y*sin(rad);
	double ry=x*sin(rad)+y*cos(rad);
	line(0,0,(int)rx,(int)ry);

if(kbhit())return -1;
	delay(200);
	angle++;
	}

getch();
closegraph();
return 0;
}