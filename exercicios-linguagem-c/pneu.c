#include <stdio.h>

int main()
{

    int pressao;
    int pressao_desejada;

    printf("Insira a pressao desejada: \n");
    scanf("%d", &pressao_desejada);
    printf("Insira a pressao do seu veiculo: \n");
    scanf("%d", &pressao);
    printf("A diferença entre a pressao desejada e a sua pressao é: %d \n", pressao_desejada - pressao);
}