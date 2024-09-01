#include <stdio.h>

int main() {

     double A,B,C,temp;


    scanf("%lf %lf %lf",&A,&B,&C);
    if(A>0 && B>0 && C>0)
    {
        if(B>A)
        {
            temp=B;
            B=A;
            A=temp;
            if(C>B)
            {
                temp=C;
                C=B;
                B=temp;
                if(B>A)
                {
                    temp=B;
                    B=A;
                    A=temp;
                }
            }
        }
        else if(C>B)
        {
            temp=C;
            C=B;
            B=temp;
            if(B>A)
            {
                temp=B;
                B=A;
                A=temp;
            }
        }
        if(A>=B+C)printf("NAO FORMA TRIANGULO\n");
        else if(A*A==B*B+C*C)
        printf("TRIANGULO RETANGULO\n");
       else if(A*A>B*B+C*C)
       printf("TRIANGULO OBTUSANGULO\n");
       else if(A*A<B*B+C*C)
       printf("TRIANGULO ACUTANGULO\n");
        if(A==B && B==C)
        printf("TRIANGULO EQUILATERO\n");
        else if(A==B||B==C||A==C)
        printf("TRIANGULO ISOSCELES\n");
    }


    return 0;
}
