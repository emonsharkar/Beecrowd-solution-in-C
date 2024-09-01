#include <stdio.h>

int main()
{
    double A,B,C,D;
    scanf ("%lf%lf%lf", &A, &B, &C);
    if(B+C>A&&A+C>B&&A+B>C)
    printf("Perimetro = %.1lf\n", A+B+C);
    else
    {
        D=.5*(A+B)*C;
        printf("Area = %.1lf\n",D);
    }
    return 0;
}
