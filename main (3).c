/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float e_lado, e_base, s_area;
    printf("Entre com o valor\n");
    scanf("%f", &e_lado);
    scanf("%f", &e_base);
    s_area = e_base * e_lado;
    printf("%.2f\n", s_area);

    return 0;
}
