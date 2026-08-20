
#include <stdio.h>

int main()
{
    int i, num[5], numero;
    
    printf("\nDigite Os Numeros\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("Os Numeros Pares São: ");
    for(i = 0; i < 5; i++)
    {
        numero = num[i];
        
        if(numero % 2 == 0)
        {
            printf("%d, ", num[i]);
        }
    }
    

    return 0;
}