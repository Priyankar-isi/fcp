#include<stdio.h>
#include<math.h>
#include<sketch.h>
int main()
{
    int x;
    for(x=-250;x<250;x=x+100)
    draw_circle(x+50,0,50);
    save_sketch("circle3.svg");
}
