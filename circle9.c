#include<stdio.h>
#include<math.h>
#include<sketch.h>
int main()
{
    int x;
    for(x=0;x<=5;x=x+1)
    {
        draw_circle(100*cos(M_PI*x/3),100*sin(M_PI*x/3),50);
    }
    draw_circle(0,0,50);
    draw_circle(0,0,150);
    save_sketch("circle9.svg");
}