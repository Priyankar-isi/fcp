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
    int x,y,l;
    scanf("%d", &l);
    for(x=-250;x<250;x=x+50)
    {
        for(y=-250;y<250;y=y+50)
        {
            candle(x,y,l,25);
            save_sketch("circle7.svg");
        }
    }
}