#include <stdio.h>
#include <math.h>

int main()
{
    float numero1, numero2, resultado;
    int escolha;
    
    do
    {
        printf("\nEscolha a Operacao Matematica:");
        printf("\n1. Adicao");
        printf("\n2. Subtracao");
        printf("\n3. Multiplicacao");
        printf("\n4. Divisao");
        printf("\n5. Potenciacao");
        printf("\n6. Raiz Quadrada");
        printf("\n0.------sair-------\n");
        scanf("%d", &escolha);
    
        if(escolha == 0)
        {
            break;
        }
    
        if(escolha == 6)
        {
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
    
        
        switch(escolha)
        {
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
            default:
                printf("Opção Invalida");
                break;
        }
    }while(escolha !=0);

    return 0;
}