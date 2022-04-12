/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    //declaracao de variaveis
    int valor_nro_n, valor_aux;
    printf("Digite um valor de n\n");
    scanf("%i", &valor_nro_n);
    for(valor_aux=0; valor_aux<=valor_nro_n; valor_aux++)
    {
    printf("%d\n", valor_aux);
    }
    return 0;
}
