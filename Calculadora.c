#include <stdio.h>
#include <math.h>

int main()
{
    float numero1, numero2, resultado;
    int escolha;
    
    printf("Escolha a Operacao Matematica:");
    printf("\n 1. Adicao\n 2. Subtracao\n 3. Multiplicacao\n 4. Divisao\n 5. Potenciacao\n 6. Raiz Quadrada\n");
    
    printf("\nQual a Sua Escolha: ");
    scanf("%d", &escolha);
    
    if(escolha == 6){
        printf("Qual O Radicando: ");
        printf("\ndigito 1: ");
        scanf("%f", &numero1);
    }else{
        printf("\nQual Os valores da Operacao: ");
        printf("\ndigito 1: ");
        scanf("%f", &numero1);
        printf("digito 2: ");
        scanf("%f", &numero2);
    }

    
    switch(escolha){
        case 1:
            resultado = numero1 + numero2;
            printf("\n Adicao: %f + %f = %f",numero1, numero2, resultado);
            break;
        
        case 2:
            resultado = numero1 - numero2;
            printf("\n Subtracao: %f - %f = %f",numero1, numero2, resultado);
            break;
            
        case 3:
            resultado = numero1 * numero2;
            printf("\n Multiplicacao: %f x %f = %f",numero1, numero2, resultado);
            break;
        
        case 4:
                if(numero2 == 0){
                    printf("Não é Possivel Realizar Essa Divisao");
                }else{
                    resultado = numero1 / numero2;
                    printf("\n Divisao: %f ÷ %f = %f",numero1, numero2, resultado); 
                }
            break;
            
        case 5:
            resultado = pow(numero1, numero2);
            printf("\n Potenciacao: %f ^ %f = %f",numero1, numero2, resultado);
            break;
        
        case 6:
            if(numero1 < 0){
                printf("Não é Pertence Ao Conjuto Dos Numeros Reais");
            }else{
                resultado = sqrt(numero1);
                printf("\n Raiz Quadrada: √%f = %f ",numero1, resultado);
            }
           
            break;
    }

    return 0;
}