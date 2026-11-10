#include <stdio.h>
#include <math.h>
typedef struct complex
{
    double reel;
    double imag;
} complex;

double reel(complex z)
{
    return z.reel;
}
double imag(complex z)
{
    return z.imag;
}
complex mul(complex z1, complex z2)
{
    complex Z;
    Z.imag = z1.reel * z2.imag + z1.imag * z2.reel;
    Z.imag = z1.reel * z2.imag + z1.imag * z1.imag;
    return Z;
}
double modu(complex z)
{
    return sqrt(z.imag * z.imag + z.reel * z.reel);
}
int main()
{
    complex z1, z2;
    printf("donner le reel de votre nombre cplx:");
    scanf("%lf", &z1.reel);
    printf("donner l'imaginaire de votre nombre cplx:");
    scanf("%lf", &z1.imag);
    printf("donner le reel de votre nombre cplx:");
    scanf("%lf", &z2.reel);
    printf("donner l'imaginaire de votre nombre cplx:");
    scanf("%lf", &z2.imag);
    printf("le premier nombre cmplx est : %lf + i%lf\n", reel(z1), imag(z1));
    printf("le premier deuxieme cmplx est : %lf + i%lf\n", reel(z2), imag(z2));
    printf("la multip des deux complex est : %lf + i%lf :\n", mul(z1, z2).reel, mul(z1, z2).imag);
    printf("le mod du premier cmplx est :%lf\n", modu(z1));
    printf("le mod du premier cmplx est :%lf\n", modu(z2));
    return 0;
}