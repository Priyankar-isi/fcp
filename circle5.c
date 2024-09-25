#include<stdio.h>
#include<math.h>
#include<sketch.h>
int main()
{
    float x,y,dr,r;
    int m;
    scanf("%f%f%d",&r,&dr,&m);
    y=r;
    x=r;
    while(y<=r+m*dr)
    {
        draw_circle(x-200,y,y);
        y=y+dr;
        x=x+2*sqrt((y-dr)*(y));
    }
    save_sketch("circle5.svg");
}