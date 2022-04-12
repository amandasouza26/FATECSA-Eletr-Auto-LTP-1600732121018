/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
    //declaracao de variaveis
    int e_sair;
    while(1){
    printf("Tecle 0 para sair:");
    scanf("%i", &e_sair);
    if(e_sair==0){
        break;
    }
    }
    printf("Fim\n");
    return 0;
}
