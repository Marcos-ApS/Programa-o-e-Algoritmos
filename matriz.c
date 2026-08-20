/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[3][3];
    int i, j, numero;
    
 
    // Leitura da matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
 
    // Exibição da matriz
    printf("\nMatriz:\n");
 
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            numero = matriz[i][j];
            if(numero > 0)
            {
                numero = matriz[i][j];
                printf("%d ", numero);
            }
        }printf("\n");
    }

    return 0;
}