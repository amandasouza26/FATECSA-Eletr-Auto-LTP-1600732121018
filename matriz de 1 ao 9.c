/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    int e_valor_nro[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int valor_aux_linha,valor_aux_coluna;
    for(valor_aux_linha=0; valor_aux_linha<3;
    valor_aux_linha++)
    {
        for(valor_aux_coluna=0; valor_aux_coluna<3;
        valor_aux_coluna++)
    {
       printf("%i\t",
       e_valor_nro[valor_aux_linha][valor_aux_coluna]);
     }
      printf("\n");
    }
    return 0;
}
