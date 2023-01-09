#include <stdio.h>
//Operações Matemáticas

/*
somar +
subtrair -
multiplicar *
dividir /
elevar ao quadrado **2
módulo (resto da divisão de x por y)
*/

int main(){
    int num1, num2;
    float res;
    
    printf("Informe o num1: ");
    scanf("%d", &num1);
    
    printf("Informe o num2: ");
    scanf("%d", &num2);
    
    //somar +
    res = num1 + num2;
    printf("A soma é %.1f\n", res);
    
    //subtrair - 
    res = num2 - num1;
    printf("A subtração é %.1f\n", res);
    
    //multiplicar *
    res = num1 * num2;
    printf("A multiplicação é %.1f\n", res);
    
    //dividir /
    res = (float)num1 / (float)num2; //cast
    printf("A divisão é %.4f\n", res);
    
    //elevar ao quadrado
    res = num1 * num1;
    printf("O quadrado de num1 é %.1f\n", res);
    
    //módulo - Verificando se o num1 é par ou ímpar
    if(num1 % 2 == 0){
        printf("%d é par", num1);
    }else{
        printf("Esse número é ímpar.");
    }
    
    return 0;
}
