/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int e_decimal, v_var, quociente, resto[11], tmp;
    scanf("%d", &e_decimal);
    quociente = e_decimal;
    v_var=0;
    while(quociente> 1){
        resto[v_var]= quociente%2;
        quociente= quociente/2;
        v_var++;
    }
     resto[v_var]=quociente;
     for(tmp=v_var;tmp>=0;tmp--){
         printf("%d", resto[tmp]);
     }

    return 0;
}
