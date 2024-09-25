#include<stdio.h>
#include<math.h>
#include<sketch.h>
void cons(int i, int j, float k,float l)
{
    float x;
    for(x=k;x>=k/l;x=x-100*(k/l))
    draw_circle(i,j,x);
}

int min(int a,int b)
{
    if(a>=b)
    {
        return b;
    }
    else
    {
        return a;
    }
}


int main()
{
    float x,y,m,l;
    scanf("%f%f", &m ,&l);
    for(x=0;x<=250;x=x+50/l)
    {
        for(y=0;y<=250;y=y+50/l)
        {
            if(x>y)
            {
                cons(x-100,y-100,25/l,1+(250-min(x,y))/m);
            }
            else
            {
                cons(x-100,y-100,25/l,1+(250-min(x,y))/m);
            }
        }
    }
    save_sketch("circle8.svg");
}