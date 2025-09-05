# include <stdio.h>

int main(){
    
    float temperatura;
    float umidade;
   unsigned int estoque;
    
   printf("digite a temperatura\n");
    scanf("%f, &temperatura");

    printf("digite a umidade\n");
    scanf("%f &umidade");

    printf("digite o estoque\n");
    scanf("%d, &estoque");

    if(temperatura > 30){
    printf(" a temperatura esta alta\n");
    } else{
        printf("a temperattura esta adequada\n");
    }

    if(umidade < 20){
        printf("a umidade está muito baixa\n");
    } else {
        printf("a umidade está adequada\n");
    }

    if (estoque < 10){
        printf("o estoque está muito baixo\n");
    } else{
        printf("o estoque etá adequado\n");
    }
    

    
return 0;

}