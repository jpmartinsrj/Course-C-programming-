#include <stdio.h>

/* 
Tipos de Dados

Tipos Alfanuméricos:
- Characteres;
- Strings*;

* Na linguagem C, não existe o tipo de dado String.

Exemplo: String
"jdflkjdfblajsdfblaskjdfbl fjasdf asdfa asdf "

Exemplo: Caractere
's';
*/

int main(){
    //declaração de uma string em C
    char nome[50]; //até 49 caracteres
    
    printf("Qual é o seu nome? ");
    gets(nome); //
    
    printf("Seu nome é %s", nome);
    
    return 0;
}
