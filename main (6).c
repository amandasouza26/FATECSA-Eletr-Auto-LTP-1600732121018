/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float e_r1, e_r2, s_req;
    printf("Entre com o valor\n");
    scanf("%f\n", &e_r1);
    scanf("%f", &e_r2);
    s_req = (e_r1 * e_r2) / (e_r1 + e_r2);
    printf("%.2f\n", s_req);

    return 0;
}
