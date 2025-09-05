# include <stdio.h>

int main(){

    char produtoA[30] = "produtoA";
    char produtoB[30] = "produtoB";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.35;
    float valorB = 15.65;

    unsigned int estoqueminimoA = 20;
    unsigned int estoqueminimoB = 10;

    double valortotalA;
    double valortotalB;

    int resultadoA;
    int resultadoB;

printf("produto %s tem estoque %u e o valor und é: %.2f \n", produtoA, estoqueA, valorA);
printf("produto %s tem estoque %u e o valor und é:%.2f \n", produtoB, estoqueB, valorB);

// comparação

resultadoA = estoqueA > estoqueminimoA;
resultadoB = estoqueB > estoqueminimoB;

printf("o produto %s tem estoque minimo %d \n", produtoA, resultadoA);
printf("o produto %s tem estoque minimo %d \n", produtoB, resultadoB);

// comparação valores totais

printf("valor total de A (R$ %.2f) e maior que o valor total de B: (R$: %.2f)\n", 
                       (estoqueA * valorA > estoqueB * valorB));

return 0;

}