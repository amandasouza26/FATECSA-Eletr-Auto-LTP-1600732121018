/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float e_ms, s_kmh;
    printf("Entre com o valor\n");
    scanf("%f", &e_ms);
    s_kmh = 3.6 * e_ms;
    printf("%.2f\n", s_kmh);

    return 0;
}
