/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float e_polegadas, s_milimetro;
    printf("Entre com o valor\n");
    scanf("%f", &e_polegadas);
    s_milimetro = 25.4 * e_polegadas;
    printf("%.2f\n", s_milimetro);

    return 0;
}