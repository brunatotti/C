#include<stdio.h>

int main(int argc, char *argv[]){
    //Entrar no prompt, na pasta onde está o exe, digitar o nome do exe, dar espaco e digitar os comandos
    //argv[0] sempre é o caminho do arquivo
    //A partir do argv [1]  que pode entrar com os parametros
    printf("Ola %s %s %d! Tudo bem?", argv[0], argv[1], argc);
}
