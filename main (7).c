/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char e_op;
    float e_nro_1,e_nro_2,s_result;
    printf("Entre com o nro 1:");
    scanf("%f",&e_nro_1);
    printf("Entre com a oper.(+,-,* ou /):");
    scanf("%c",&e_op);
    scanf("%c",&e_op);
    printf("Entre com nro 2:");
    scanf("%f",&e_nro_2);
    switch(e_op)
    {
        case'+':s_result=e_nro_1+e_nro_2;
        break;
        case'-':s_result=e_nro_1-e_nro_2;
        break;
        case'*':s_result=e_nro_1*e_nro_2;
        break;
        case'/':if(e_nro_2!=0)
        s_result=e_nro_1/e_nro_2;
        break;
        
    }
    switch(e_op){
        case'+':case'-':
        case'*': printf("s=%.2f\n",s_result);
        break;
        case'/':
        if(e_nro_2==0){
            printf("erro");
        }else
        {
            printf("s=%f",s_result);
        }
        break;
        default:
        printf("Erro de oper.");
    }

    return 0;
}
