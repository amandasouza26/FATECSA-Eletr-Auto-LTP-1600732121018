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
    int e_nro;
    do{
    printf("Entre com o nro:");
    scanf("%i", &e_nro);
    if(e_nro<0){
        continue;
    }
    printf("%i\n", e_nro);
    }while(e_nro !=0);
    printf("Fim\n");
    return 0;
}
