#include<stdio.h>
int main()
{
double x1,y1,x2,y2,D;
scanf("%lf %lf", &x1, &y1);
scanf("%lf %lf", &x2, &y2);
D = sqrt (((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
printf("%.4lf\n", D);

 return 0;
}
