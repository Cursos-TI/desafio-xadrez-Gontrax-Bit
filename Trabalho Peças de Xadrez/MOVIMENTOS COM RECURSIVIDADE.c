#include <stdio.h>

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

int peça, casas;
printf("Selecione a peça\n");
printf("1 - Torre\n");
printf("2 - Bispo\n");
printf("2 - Rainha\n");
scanf("%d", &peça);



switch (peça)
{
case 1:
int movertorre;
    printf("Selecione a direção\n");
    printf("1 - DIREITA\n");
    printf("2 - ESQUERDA\n");
    printf("3 - CIMA\n");
    printf("4 - BAIXO\n"); 
    scanf("%d", &movertorre);

switch (movertorre)
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
    break;
}


    break;//break torre


case 2://bispo - WHILE
int movimentoBISPO;

    printf("Selecione a direção\n");
    printf("1 - DIAGONAL - CIMA DIREITA\n");
    printf("2 - DIAGONAL - CIMA ESQUERDA\n");
    printf("3 - DIAGONAL - BAIXO DIREITA\n");
    printf("4 - DIAGONAL - BAIXO ESQUERDA\n"); 
    scanf("%d", &movimentoBISPO);

switch (movimentoBISPO)
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
    break;
}
 break;//bispo


case 3:
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
    break;
}

    break;//rainha

}

}