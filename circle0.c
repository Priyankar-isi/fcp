#include<stdio.h>
#include<math.h>
#include<sketch.h>
int main()
{
    int x,y;
    int m;
    scanf("%d", &m);
    set_stroke_width(0.25);
    for(x=0;x<=5;x=x+1)
    {
        for(y=1;y<=m;y=y+1)
        {
            draw_circle((50+50*y/m)*cos(M_PI*x/3),(50+50*y/m)*sin(M_PI*x/3),(50*y/m));
            draw_circle(0,0,50*(y)/m);
    }
        }
        
    draw_circle(0,0,150);
    save_sketch("circle0.svg");
}