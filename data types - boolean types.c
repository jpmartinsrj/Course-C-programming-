#include <stdio.h>
//Tipos de dados

//Booleanos (Verdadeiro/Falso) true/false

/*
Na linguagem C não existe um tipo de dado boolean

Mas...

A linguaguem C, reconhece o valor 0 como Falso (false) e
qualquer valor diferente de 0 é considerado Verdadeiro (true)
*/
int main(){
    int booleano = 0;
    
    if(booleano){
        printf("Verdadeiro...");
    }else{
        printf("Falso...");
    }
    
    return 0;
}
