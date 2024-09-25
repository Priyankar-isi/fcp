#include<stdio.h>
#include<math.h>
#include<sketch.h>
void cons(int i, int j, float k,float l)
{
    float x;
    for(x=k;x>=k/l;x=x-(k/l))
    draw_circle(i,j,x);
}

int main()
{
    int x;
    for(x=-250;x<250;x=x+100)
    cons(x+50,0,50,1+(x+250)/100);
    save_sketch("circle4.svg");
}
