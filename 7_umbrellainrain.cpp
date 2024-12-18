#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
class umbrella
{
	public:
	int x,y,j,i;
	public:
	void rain();	
	
};
void umbrella::rain()
{
	
for(j=1;j<600;j+=5)
{
line(0,400,800,400); //platform
circle(30+j,280,20);
line(30+j,300,30+j,350); //leftleg
line(30+j,330,70+j,330);//right leg
if(j%2==0)
{
	
	
	line(30+j,350,25+j,400);//left hand
	line(30+j,350,10+i,400);//left hand
}

else
{
line(30+j,350,35+j,400); //body
delay(20);
}

line(70+j,250,70+j,330); //body
pieslice(70+j,250,180,0,80);

for(i=0;i<300;i++)
{
x= rand()% 800 ;
y= rand()% 800 ;
outtextxy(x,y,"/");
}

delay(170);
cleardevice();
}

}
int main()
{
umbrella u;
int gd=DETECT,gm;
//int x,y,j,i;
	initgraph(&gd,&gm,"");
	u.rain();
getch();
closegraph();
return 0;
}
