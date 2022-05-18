/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    unsigned char e_numero, s_numero;
    e_numero=10;
    printf("E_nro:%u\n",e_numero);
    s_numero=~e_numero;
    printf("Logica Completo1:%u\n",s_numero);
    s_numero=e_numero &7;
    printf("Logica And 7: %u\n", s_numero);
    s_numero=e_numero|7;
    printf("Logica Or 7: %u\n", s_numero);
    s_numero=e_numero^7;
    printf("Logica Xor 7: %u\n", s_numero);
    s_numero=e_numero>>1;
    printf("Reg.Desloc.direita: %u\n", s_numero);
    s_numero=e_numero<<1;
    printf("reg.Desloc.esquerda: %u\n", s_numero);

    return 0;
}
