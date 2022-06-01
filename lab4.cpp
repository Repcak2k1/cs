#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

//Task2
/*
 double Generate_x();
 double Generate_y();
 int Read_number_of_points();
 int main()
 {
     int number_of_points;
     number_of_points = Read_number_of_points();
     int n=0;
     srand(time( NULL ) );
 while(n<number_of_points)
 {
 double x;
 double y;
 x=Generate_x();
 y=Generate_y();
  // printf("%lf\n",x);
     double radious;
    radious=pow((pow(1.5-x,2)+pow(2-y,2)),0.5);
  //  printf("%lf",radious);
    if(radious<0.5)
     {
        printf("The coordinates of point %d are (%lf,%lf)\n", n, x, y);
        n=n+1;
    }
}
}
int Read_number_of_points()
{
    int number;
    scanf("%d", &number);
    return number;
}
double Generate_x()
{
    double xi;
    int x_max=2;
    int x_min=1;
    xi = rand() * (x_max - x_min) / (double)RAND_MAX + x_min;
  // printf("%lf\n",xi);
    return xi;
}
double Generate_y()
{
    double yi;
    int y_max=3;
    int y_min=1;
    yi = rand() * (y_max - y_min) / (double)RAND_MAX + y_min + 1;
  //  printf("%lf\n",yi);
    return yi;
}*/


//Task3

double Generate_x();
double Generate_y();
int Read_number_of_points();



int main()
{
FILE* i;
i = fopen( "in", "wt" ); 
FILE* o;
o = fopen( "out", "wt" );
    int number_of_points;
    number_of_points=Read_number_of_points();
    int n=0;
    int sram=0;
    srand(time( NULL ) );
while(n<number_of_points)
{
double x;
double y;
x=Generate_x();
y=Generate_y();
 // printf("%lf\n",x);
    double radious;
    radious=pow((pow(1.5-x,2)+pow(2-y,2)),0.5);
  //  printf("%lf",radious);
    if(radious<0.5)
    {
        fprintf(i,"The coordinates of point %d are (%lf,%lf)\n", n, x, y);
       n = n + 1;
    }
    if(radious>0.5)
    {
        fprintf(o,"The coordinates of point %d are (%lf,%lf)\n", sram, x, y);
        sram = sram + 1;
    }

}
}
int Read_number_of_points()
{
    int number;
    scanf("%d", &number);
    return number;
}
double Generate_x()
{
    double xi;
    int x_max=2;
    int x_min=1;
    xi = rand() * (x_max - x_min) / (double)RAND_MAX + x_min;
  // printf("%lf\n",xi);
    return xi;
}
double Generate_y()
{
    double yi;
    int y_max=3;
    int y_min=1;
    yi = rand() * (y_max - y_min) / (double)RAND_MAX + y_min + 1;
  //  printf("%lf\n",yi);
    return yi;
}