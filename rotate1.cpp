#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
    int gd=DETECT,gm;
    int x1,y1,x2,xt1,yt1,xt2,yt2,x3,y3,y2;
    double d1,xt,yt;
    initgraph(&gd,&gm,"c tc bgi");
    printf("enter the coordinates of a line\n");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    line(x1,y1,x2,y2);
    line(x1,y1,x3,y3);
    line(x2,y2,x3,y3);
    printf("enter the angle of rotation in degree\n");
    scanf("%lf",&d1);
    d1=(d1*3.14)/180.0;
    xt1=x1+((x2-x1)*cos(d1)-(y2-y1)*sin(d1));
    yt1=y1+((x2-x1)*sin(d1)+(y2-y1)*cos(d1));
    xt2=x1+((x3-x1)*cos(d1)-(y3-y1)*sin(d1));
    yt2=y1+((x3-x1)*sin(d1)+(y3-y1)*cos(d1));

    setcolor(4);
    line(x1,y1,xt1,yt1);
    line(xt1,yt1,xt2,yt2);
    line(x1,y1,xt2,yt2);
    getch();
    closegraph();
}
