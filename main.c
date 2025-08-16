#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


int main(){
    printf("Jogo de Adivinhação\n");
    bool acaba = false;
    int contador = 1;
   
    //Sortear um número
    int sorteado;

    srand(time(NULL));

    sorteado = (rand() % 100 +1);

    printf("Sorteei %d\n",sorteado);
   
    int palpite;

    while(!acaba){
        //Pedir ao usuário um palpite
        scanf("%d",&palpite);
        //Comparar o número do palpite com um número sorteado
        //Se o número do palpite for igual ao número sorteado
        //Apresentar uma mensagem de parabéns e encerrar o jogo
        if(palpite == sorteado){
            printf(" Parabéns Você acertou! \n");
            printf("Você acertou em %d Tentativas",contador);
            acaba = true;
        }
        else if(palpite > sorteado){  
             //Se o número do palpute for maior que o número sorteado
            //Apresentar uma mensagem de erro e continuar o jogo
            printf(" Errou! o número sorteado é menor ");
        }else{
            //Se o número do palpite for menor que o número sorteado 
            //Apresentar uma mensagem de erro e continuar o jogo
            printf(" Errou! o número sorteado é maior ");
        }  
        contador++;
        
}
return 0;
}