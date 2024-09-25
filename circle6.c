#include<stdio.h>
#include<math.h>
#include<sketch.h>
void candle(float n,float m, float l,float k)
{
    float x;
    for(x=k/l;x<=k;x=x+k/l)
    {
        draw_circle(n,m+x,x);
    }
}

int main()
{
    float x,y,dr,r;
    int m,l;
    scanf("%f%f%d%d",&r,&dr,&m, &l);
    y=r;
    x=r;
    while(y<=r+m*dr)
    {
        candle(x-200,0,l,y);
        y=y+dr;
        x=x+2*sqrt((y-dr)*(y));
    }
    save_sketch("circle6.svg");
}