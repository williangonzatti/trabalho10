#include <stdio.h>
#include "funcs.h"
int main()
{
    int num, resultado, expoente,opcao;
    printf("Digite 1 para Fatorial ou 2 para Exponeciacao:");
    scanf("%d", &opcao);

    if(opcao == 1)
    {
        printf("Digite um numero para calcular o fatorial: ");
        scanf("%d", &num);
        resultado = fatorial(num);

    }
    else
    {
        if(opcao == 2)
        {
            printf("Digite um numero para calcular o Expoente: ");
            scanf("%d", &num);
            printf("Digite o numero do Expoente: ");
            scanf("%d", &expoente);
            resultado = exponenciacao(num,expoente);
        }
    }

    printf("Resultado: %d",resultado);

}
