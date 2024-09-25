#include<stdio.h>
#include<math.h>
#include<sketch.h>
void cons(int i, int j, float k,float l)
{
    float x;
    for(x=k;x>k/l;x=x-20*(k/l))
    draw_circle(i,j,x);
}

int mod(int x)
{
    if(x>=0)
    {
        return x;
    }
    else
    {
        return 0-x;
    }
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
    for(x=-250;x<=250;x=x+50/l)
    {
        for(y=-250;y<=250;y=y+50/l)
        {
            if(mod(x)>mod(y))
            {
                cons(x,y,25/l,2+(min(mod(x),mod(y)))/m);
            }
            else
            {
                cons(x,y,25/l,2+(min(mod(y),mod(x)))/m);
            }
        }
    }
    save_sketch("circle1.svg");
}