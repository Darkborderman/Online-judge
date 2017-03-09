#include<cstdio>
#include<cmath>
#define PI 2.0*acos(0.0)

int main()
{
    double input;
    while( scanf( "%lf", &input ) != EOF )
    {
        double x, y, z;
        z=(input*input)-(input*input*PI)/4;
        z=z-(input*input*PI)/4-(input*input*PI)/6-((input*input*PI)/6-(input*input*sqrt(3.0))/4);
        y=(input*input*PI)-(input*input*PI)/4-2*z;
        x=(input*input*PI)-4*y-4*z;
        printf( "%.3lf %.3lf %.3lf\n",x,4*y,4*z); 
    }
    return 0;
}
