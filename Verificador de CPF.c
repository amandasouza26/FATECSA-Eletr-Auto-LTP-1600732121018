/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int e_cpf_pos9, e_cpf_pos8, e_cpf_pos7,e_cpf_pos6,e_cpf_pos5,e_cpf_pos4,e_cpf_pos3,e_cpf_pos2,e_cpf_pos1;
    int div2_calc, div1_calc;
    int e_cpf_div2,e_cpf_div1;
    
    printf("digite 1° digito de cpf:\n");
    scanf("%d", & e_cpf_pos9);
    printf("digite 2° digito de cpf:\n");
    scanf("%d", & e_cpf_pos8);
    printf("digite 3° digito de cpf:\n");
    scanf("%d", & e_cpf_pos7);
    printf("digite 4° digito de cpf:\n");
    scanf("%d", & e_cpf_pos6);
    printf("digite 5° digito de cpf:\n");
    scanf("%d", & e_cpf_pos5);
    printf("digite 6° digito de cpf:\n");
    scanf("%d", & e_cpf_pos4);
    printf("digite 7° digito de cpf:\n");
    scanf("%d", & e_cpf_pos3);
    printf("digite 8° digito de cpf:\n");
    scanf("%d", & e_cpf_pos2);
    printf("digite 9° digito de cpf:\n");
    scanf("%d", & e_cpf_pos1);
    printf("digite 1° digito do verificador do cpf:\n");
    scanf("%d", & e_cpf_div2);
    printf("digite 2° digito do verificador do cpf:\n");
    scanf("%d", & e_cpf_div1);
    div2_calc=e_cpf_pos9*10+e_cpf_pos8*9+e_cpf_pos7*8;
    div2_calc=div2_calc+e_cpf_pos6*7+e_cpf_pos5*6;
    div2_calc=div2_calc+e_cpf_pos4*5+e_cpf_pos3*4;
    div2_calc=div2_calc+e_cpf_pos2*3+e_cpf_pos1*2;
    if((div2_calc%11)>2){
        div2_calc=11-(div2_calc%11);
    }else{
        div2_calc=0;
    }
    div1_calc=e_cpf_pos9*11+e_cpf_pos8*10+e_cpf_pos7*9;
    div1_calc=div1_calc+e_cpf_pos6*8+e_cpf_pos5*7;
    div1_calc=div1_calc+e_cpf_pos4*6+e_cpf_pos3*5;
    div1_calc=div1_calc+e_cpf_pos2*4+e_cpf_pos1*3;
    div1_calc=div1_calc+div2_calc*2;
    if((div1_calc%11)>2){
        div1_calc=11-(div1_calc%11);
    }else{
        div1_calc=0;
    }
    if((div2_calc==e_cpf_div2)&&(div1_calc==e_cpf_div1)){
        printf("cpf valido");
    }else{
        printf("cpf invalido");
    }
    

    return 0;
}
