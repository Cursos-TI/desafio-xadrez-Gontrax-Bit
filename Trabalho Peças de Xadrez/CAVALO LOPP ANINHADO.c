#include <stdio.h>

int main() {

//NAO RODAR, LOOP INFINITO, SO PARA ESTUDO
int cavalo;

   //case 1:
        
        while (cavalo--)//decrementa para o segundo movimento ser apenas uma casa
        {
            for (int i = 0; i < 2; i++)//variavel dentro do loop, loop de duas etapas 
            {
                printf("Cavalo se movimenta para CIMA\n"); // imprime CIMA duas vezes, loop interno
            }
            printf("Cavalo se movimenta para DIREITA\n");//segundo movimento, impresso uma vez, loop externo
        }
        
       // break;

}





