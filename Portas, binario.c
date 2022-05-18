/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float vetor[4] = {0.0,0.5,1.0,0.8};
    float v_max;
    int v_var;
    v_max=vetor[0];
    v_var=0;
    while (v_var < 4){
        if (v_max< vetor[v_var]){
            v_max=vetor[v_var];
        }
        v_var++;
    }
    printf("%.2f", v_max);
    return 0;
}
