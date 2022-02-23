/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float e_p1, e_p2, e_at, s_media;
    printf("Entre com o valor\n");
    scanf("%f\n", &e_p1);
    scanf("%f", &e_p2);
    scanf("%f", &e_at);
    s_media = e_p1 * 0.3 + e_p2 * 0.5 + e_at * 0.2;
    printf("%.2f\n", s_media);

    return 0;
}
