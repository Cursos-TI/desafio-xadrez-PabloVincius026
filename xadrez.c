//Desafio xadres, tema 3,feito por Pablo Vinicius Jesus Dos Santos. 

#include <stdio.h>

int main() {

    int option;

// Aqui eu eu coloquei o valor de cada uma variavel das perça do xadres!
#define rainha 8
#define torre 5
#define bispo 5


  //Abaixo podesse ver as opção de cada carta que o usuario dejesa ultilizar!

printf("Menu:\n");
        printf("1:Opção Rainha\n");
        printf("2:Opcao Bipos \n");
        printf("3:Opcao Bipos \n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &option);

    
        switch(option) { //fiz um swite pra fica mais interativo com o usuario e pra fica mais organizado!

            case 1:
     printf("Movimentação do Rainha:\n");
    for (int i = 0; i < rainha; i++) {
    printf("Esquerda\n");}

 break;
        
                
            case 2:
            printf("Movimentação do Torre:\n");
            for (int i = 0; i < torre; i++) {
            printf("Direita\n");}


    break;
            case 3:
            printf("Movimentação do Bispo:\n");
            for (int i = 0; i < bispo; i++) {
            printf("Diagonal Superior Direita\n");}




            case 4:
                printf("Saindo...\n");
                break;
            default:
          
           printf("Opção inválida!\n");

          
        }
         
        
        return 0;

}
