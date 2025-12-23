#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//movimentos da torre
void movertorredireita(int casas){

    if (casas > 0)
    {
        printf("Torre se movimenta para DIREITA\n");
        movertorredireita(casas - 1);
    }
}
    
void movertorreesquerda(int casas){

    if (casas > 0)
    {
        printf("Torre se movimenta para ESQUERDA\n");
        movertorreesquerda(casas - 1);
    }
}

void movertorrecima(int casas){

    if (casas > 0)
    {
        printf("Torre se movimenta para CIMA\n");
        movertorrecima(casas - 1);
    }
}


void movertorrebaixo(int casas){

    if (casas > 0)
    {
        printf("Torre se movimenta para BAIXO\n");
        movertorrebaixo(casas - 1);
    }
}

//movimentos do BISPO

void moverbispoDiagCD(int casas){

    if (casas > 0)
    {
        printf("Bispo se movimenta na DIAGONAL - CIMA DIREITA\n");
        moverbispoDiagCD(casas - 1);
    }
}
    
void moverbispoDiagCE(int casas){

    if (casas > 0)
    {
        printf("Bispo se movimenta na DIAGONAL - CIMA ESQUERDA\n");
        moverbispoDiagCE(casas - 1);
    }
}

void moverbispoDiagBD(int casas){

    if (casas > 0)
    {
        printf("Bispo se movimenta na DIAGONAL - BAIXO DIREITA\n");
        moverbispoDiagBD(casas - 1);
    }
}


void moverbispoDiagBE(int casas){

    if (casas > 0)
    {
        printf("Bispo se movimenta na DIAGONAL - BAIXO ESQUERDA\n");
        moverbispoDiagBE(casas - 1);
    }
}

//movimentos rainha
void moverrainhadireita(int casas){

    if (casas > 0)
    {
        printf("Rainha se movimenta para DIREITA\n");
        moverrainhadireita(casas - 1);
    }
}
    
void moverrainhaesquerda(int casas){

    if (casas > 0)
    {
        printf("Rainha se movimenta para ESQUERDA\n");
        moverrainhaesquerda(casas - 1);
    }
}

void moverrainhacima(int casas){

    if (casas > 0)
    {
        printf("Rainha se movimenta para CIMA\n");
        moverrainhacima(casas - 1);
    }
}


void moverrainhabaixo(int casas){

    if (casas > 0)
    {
        printf("Rainha se movimenta para BAIXO\n");
        moverrainhabaixo(casas - 1);
    }
}


void moverrainhaDiagCD(int casas){

    if (casas > 0)
    {
        printf("Rainha se movimenta na DIAGONAL - CIMA DIREITA\n");
        moverrainhaDiagCD(casas - 1);
    }
}
    
void moverrainhaDiagCE(int casas){

    if (casas > 0)
    {
        printf("Rainha se movimenta na DIAGONAL - CIMA ESQUERDA\n");
        moverrainhaDiagCE(casas - 1);
    }
}

void moverrainhaDiagBD(int casas){

    if (casas > 0)
    {
        printf("Rainha se movimenta na DIAGONAL - BAIXO DIREITA\n");
        moverrainhaDiagBD(casas - 1);
    }
}


void moverrainhaDiagBE(int casas){

    if (casas > 0)
    {
        printf("Rainha se movimenta na DIAGONAL - BAIXO ESQUERDA\n");
        moverrainhaDiagBE(casas - 1);
    }
}

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

    movertorredireita(casas);
    return 0;

    break;

    case 2:
    printf("Selecione a quantidade de casas a TORRE vai movimentar para ESQUERDA\n");
    scanf("%d", &casas);

    movertorreesquerda(casas);
    return 0;
    break;

    case 3:
    printf("Selecione a quantidade de casas a TORRE vai movimentar para CIMA\n");
    scanf("%d", &casas);

    movertorrecima(casas);
    return 0;
    break;

    case 4:
    printf("Selecione a quantidade de casas a TORRE vai movimentar para BAIXO\n");
    scanf("%d", &casas);

    movertorrebaixo(casas);
    return 0;
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

    moverbispoDiagCD(casas);
    return 0;

    break;

case 2:
    printf("Selecione a quantidade de casas a BISPO vai movimentar para DIAGONAL - CIMA ESQUERDA\n");
    scanf("%d", &casas);

    moverbispoDiagCE(casas);
    return 0;
    break;

case 3:
    printf("Selecione a quantidade de casas a BISPO vai movimentar para DIAGONAL - BAIXO DIREITA\n");
    scanf("%d", &casas);

    moverbispoDiagBD(casas);
    return 0;
    break;

case 4:
    printf("Selecione a quantidade de casas a BISPO vai movimentar para DIAGONAL - BAIXO ESQUERDA\n");
    scanf("%d", &casas);

    moverbispoDiagBE(casas);
    return 0;
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

    moverrainhadireita(casas);
    return 0;

    break;

case 2:
    printf("Selecione a quantidade de casas a RAINHA vai movimentar para ESQUERDA\n");
    scanf("%d", &casas);

    moverrainhaesquerda(casas);
    return 0;
    break;

case 3:
    printf("Selecione a quantidade de casas a RAINHA vai movimentar para CIMA\n");
    scanf("%d", &casas);

    moverrainhacima(casas);
    return 0;
    break;

case 4:
    printf("Selecione a quantidade de casas a RAINHA vai movimentar para BAIXO\n");
    scanf("%d", &casas);

    moverrainhabaixo(casas);
    return 0;
    break;


case 5:
    printf("Selecione a quantidade de casas a RAINHA vai movimentar para DIAGONAL - CIMA DIREITA\n");
    scanf("%d", &casas);

    moverrainhaDiagCD(casas);
    return 0;

    break;

case 6:
    printf("Selecione a quantidade de casas a RAINHA vai movimentar para DIAGONAL - CIMA ESQUERDA\n");
    scanf("%d", &casas);

    moverrainhaDiagCE(casas);
    return 0;
    break;

case 7:
    printf("Selecione a quantidade de casas a RAINHA vai movimentar para DIAGONAL - BAIXO DIREITA\n");
    scanf("%d", &casas);

    moverrainhaDiagBD(casas);
    return 0;
    break;

case 8:
    printf("Selecione a quantidade de casas a RAINHA vai movimentar para DIAGONAL - BAIXO ESQUERDA\n");
    scanf("%d", &casas);

    moverrainhaDiagBE(casas);
    return 0;
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