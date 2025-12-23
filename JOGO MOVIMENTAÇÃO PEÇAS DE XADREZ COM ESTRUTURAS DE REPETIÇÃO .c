#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

int bispo = 0, rainha = 0, torre, cavalo = 1;
int peça;
int casas;



printf("PEÇAS DE XADREZ\n");
printf("Selecione a peça que deseja mover\n");
printf("1 - TORRE\n");
printf("2 - BISPO\n");
printf("3 - RAINHA\n");
printf("4 - CAVALO\n");
scanf("%d", &peça);

switch (peça)
{
case 1://torre - FOR
int movimentoTORRE;

    printf("Selecione a direção\n");
    printf("1 - DIREITA\n");
    printf("2 - ESQUERDA\n");
    printf("3 - CIMA\n");
    printf("4 - BAIXO\n"); 
    scanf("%d", &movimentoTORRE);
    
    switch (movimentoTORRE)// menu movimento torre
    {
    case 1:
    printf("Selecione a quantidade de casas a TORRE vai movimentar para DIREITA\n");
    scanf("%d", &casas);

    for (torre = 0; torre < casas; torre++)
{
    printf("Torre se movimenta para DIREITA\n"); //imprime o movimento da torre 
}    
        break;
    case 2:
    printf("Selecione a quantidade de casas a TORRE vai movimentar para ESQUERDA\n");
    scanf("%d", &casas);

    for (torre = 0; torre < casas; torre++)
{
    printf("Torre se movimenta para ESQUERDA\n"); //imprime o movimento da torre 
}    
        break;
    case 3:
    printf("Selecione a quantidade de casas a TORRE vai movimentar para CIMA\n");
    scanf("%d", &casas);

    for (torre = 0; torre < casas; torre++)
{
    printf("Torre se movimenta para CIMA\n"); //imprime o movimento da torre 
}    
        break;
    case 4:
    printf("Selecione a quantidade de casas a TORRE vai movimentar para BAIXO\n");
    scanf("%d", &casas);

    for (torre = 0; torre < casas; torre++)
{
    printf("Torre se movimenta para BAIXO\n"); //imprime o movimento da torre 
}    
        break;
    
    default:
    printf("opção invalida selecione uma das 4 anteriores\n");
        break;
    }

    break; // break case 1



case 2://bispo - WHILE
int movimentoBISPO;

    printf("Selecione a direção\n");
    printf("1 - DIAGONAL - CIMA DIREITA\n");
    printf("2 - DIAGONAL - CIMA ESQUERDA\n");
    printf("3 - DIAGONAL - BAIXO DIREITA\n");
    printf("4 - DIAGONAL - BAIXO ESQUERDA\n"); 
    scanf("%d", &movimentoBISPO);
    
    switch (movimentoBISPO)// menu movimento torre
    {
    case 1:
    printf("Selecione a quantidade de casas a BISPO vai movimentar para DIAGONAL - CIMA DIREITA\n");
    scanf("%d", &casas);

    while (bispo < casas) 
{  
    printf("Bispo se movimenta na DIAGONAL - CIMA DIREITA\n");
    bispo++;
}
        break;
    case 2:
    printf("Selecione a quantidade de casas a BISPO vai movimentar para DIAGONAL - CIMA ESQUERDA\n");
    scanf("%d", &casas);

    while (bispo < casas) 
{  
    printf("Bispo se movimenta na DIAGONAL - CIMA ESQUERDA\n");
    bispo++;
}
        break;
    case 3:
    printf("Selecione a quantidade de casas a BISPO vai movimentar para DIAGONAL - BAIXO DIREITA\n");
    scanf("%d", &casas);

    while (bispo < casas) 
{  
    printf("Bispo se movimenta na DIAGONAL - BAIXO DIREITA\n");
    bispo++;
}
        break;
    case 4:
    printf("Selecione a quantidade de casas a BISPO vai movimentar para DIAGONAL - BAIXO ESQUERDA\n");
    scanf("%d", &casas);

    while (bispo < casas) 
{  
    printf("Bispo se movimenta na DIAGONAL - BAIXO ESQUERDA\n");
    bispo++;
}
        break;
    
    default:
    printf("opção invalida selecione uma das 4 anteriores\n");
        break;
    }

    break;

    break;//break case 2

case 3://rainha - DO WHILE
int movimentoRAINHA;

    printf("Selecione a direção\n");
    printf("1 - DIREITA\n");
    printf("2 - ESQUERDA\n");
    printf("3 - CIMA\n");
    printf("4 - BAIXO\n"); 
    printf("5 - DIAGONAL - CIMA DIREITA\n");
    printf("6 - DIAGONAL - CIMA ESQUERDA\n");
    printf("7 - DIAGONAL - BAIXO DIREITA\n");
    printf("8 - DIAGONAL - BAIXO ESQUERDA\n"); 
    scanf("%d", &movimentoRAINHA);

    switch (movimentoRAINHA)
    {
    case 1:
    printf("Selecione a quantidade de casas a RAINHA vai movimentar para DIREITA\n");
    scanf("%d", &casas);

    do
    {
    printf("Rainha se movimenta para DIREITA\n");

    rainha++;
  
    } while (rainha < casas);
   
        break;  

    case 2:
    printf("Selecione a quantidade de casas a RAINHA vai movimentar para ESQUERDA\n");
    scanf("%d", &casas);

    do
    {
    printf("Rainha se movimenta para ESQUERDA\n");

    rainha++;
  
    } while (rainha < casas);
   
        break; 

    case 3:
    printf("Selecione a quantidade de casas a RAINHA vai movimentar para CIMA\n");
    scanf("%d", &casas);

    do
    {
    printf("Rainha se movimenta para CIMA\n");

    rainha++;
  
    } while (rainha < casas);
   
        break; 

    case 4:
    printf("Selecione a quantidade de casas a RAINHA vai movimentar para BAIXO\n");
    scanf("%d", &casas);

    do
    {
    printf("Rainha se movimenta para BAIXO\n");

    rainha++;
  
    } while (rainha < casas);
   
        break; 

    case 5:
    printf("Selecione a quantidade de casas a RAINHA vai movimentar para DIAGONAL - CIMA DIREITA\n");
    scanf("%d", &casas);

    do
    {
    printf("Rainha se movimenta para DIAGONAL - CIMA DIREITA\n");

    rainha++;
  
    } while (rainha < casas);
   
        break; 

    case 6:
    printf("Selecione a quantidade de casas a RAINHA vai movimentar para DIAGONAL - CIMA ESQUERDA\n");
    scanf("%d", &casas);

    do
    {
    printf("Rainha se movimenta para DIAGONAL - CIMA ESQUERDA\n");

    rainha++;
  
    } while (rainha < casas);
   
        break; 

    case 7:
    printf("Selecione a quantidade de casas a RAINHA vai movimentar para DIAGONAL - BAIXO DIREITA\n");
    scanf("%d", &casas);

    do
    {
    printf("Rainha se movimenta para DIAGONAL - BAIXO DIREITA\n");

    rainha++;
  
    } while (rainha < casas);
   
        break; 

    case 8:
    printf("Selecione a quantidade de casas a RAINHA vai movimentar para DIAGONAL - BAIXO ESQUERDA\n");
    scanf("%d", &casas);

    do
    {
    printf("Rainha se movimenta para DIAGONAL - BAIXO ESQUERDA\n");

    rainha++;
  
    } while (rainha < casas);
   
        break;

default:
printf("Opção invalida, selecione uma das 8 anteriores\n");
    break;


     }

break;//break case3

case 4:
int movimentoCAVALO;

    printf("Selecione a direção\n");
    printf("1 - CIMA DIREITA\n");
    printf("2 - CIMA ESQUERDA\n");
    printf("3 - BAIXO DIREITA\n");
    printf("4 - BAIXO ESQUERDA\n"); 
    printf("5 - DIREITA CIMA\n");
    printf("6 - DIREITA BAIXO\n");
    printf("7 - ESQUERDA CIMA\n");
    printf("8 - ESQUERDA BAIXO\n"); 
    scanf("%d", &movimentoCAVALO);

    switch (movimentoCAVALO)
    
    {
    case 1:
        
        while (cavalo--)//decrementa para o segundo movimento ser apenas uma casa
        {
            for (int i = 0; i < 2; i++)//variavel dentro do loop, loop de duas etapas 
            {
                printf("Cavalo se movimenta para CIMA\n"); // imprime CIMA duas vezes, loop interno
            }
            printf("Cavalo se movimenta para DIREITA\n");//segundo movimento, impresso uma vez, loop externo
        }
        
        break;
    
    
    case 2:
        
        while (cavalo--)
        {
            for (int i = 0; i < 2; i++) 
            {
                printf("Cavalo se movimenta para CIMA\n"); 
            }
            printf("Cavalo se movimenta para ESQUERDA\n");
        }

        break;



    case 3:
        
        while (cavalo--)
        {
            for (int i = 0; i < 2; i++) 
            {
                printf("Cavalo se movimenta para BAIXO\n"); 
            }
            printf("Cavalo se movimenta para DIREITA\n");
        }
        
        break;



    case 4:
        
        while (cavalo--)
        {
            for (int i = 0; i < 2; i++) 
            {
                printf("Cavalo se movimenta para BAIXO\n"); 
            }
            printf("Cavalo se movimenta para ESQUERDA\n");
        }
        
        break;
        
        

    case 5:
        
        while (cavalo--)
        {
            for (int i = 0; i < 2; i++) 
            {
                printf("Cavalo se movimenta para DIREITA\n"); 
            }
            printf("Cavalo se movimenta para CIMA\n");
        }
        
        break;



    case 6:
        
        while (cavalo--)
        {
            for (int i = 0; i < 2; i++) 
            {
                printf("Cavalo se movimenta para DIREITA\n"); 
            }
            printf("Cavalo se movimenta para BAIXO\n");
        }
       
        break;



    case 7:
        
        while (cavalo--)
        {
            for (int i = 0; i < 2; i++) 
            {
                printf("Cavalo se movimenta para ESQUERDA\n"); 
            }
            printf("Cavalo se movimenta para CIMA\n");
        }
       
        break;



    case 8:
        
        while (cavalo--)
        {
            for (int i = 0; i < 2; i++) 
            {
                printf("Cavalo se movimenta para ESQUERDA\n"); 
            }
            printf("Cavalo se movimenta para BAIXO\n");
        }
       
        break;
    
    default:
    printf("Opção invalida, selecione uma das 8 anteriores\n");
        break;
    }


break;//break case 4
    
default:
printf("Opção invalida, selecione uma das 4 anteriores\n");
    break;
}


}