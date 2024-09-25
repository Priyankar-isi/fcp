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
void incandle(float n,float m, float l,float k)
{
   float x;
    for(x=k/l;x<=k;x=x+k/l)
    {
        draw_circle(n,m-x,x);
    } 
}
int main()
{
    float x;
    scanf("%f",&x);
    candle(100,0,x,100);
    candle(-100,0,x,100);
    incandle(-100,0,x,100);
    incandle(100,0,x,100);
    save_sketch("circle2.svg");

}