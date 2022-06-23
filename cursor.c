#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <unistd.h>
#include "cursor.h"
#define enter 13
#define esc 27
#define riba 72
#define baixo 80
#define esquerda 75
#define direita 77
#define SIZE 8
FILE *arqrank;
ranking rank[5];
int pontuacao=0;

void mudacor(int i)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}
void gotoxy(x,y)
{
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD)
    {
        x,y
    });
}

void exibirMatriz(int v[SIZE][SIZE])
{
    int i,j;
    mudacor(15);
    for(i=0; i < 8; i++)
    {
        for(j=0; j<8; j++)
        {

            gotoxy(32+(3*i),5+(2*j));
            printf("%c", v[i][j]);
        }
    }
}

int gerarRand()
{
    int num=0;
    num=rand();
    if(num>=49 && num<=53) return num;
    else
        return gerarRand();
}

int * posicao(int linha, int coluna, int matriz[SIZE][SIZE])
{
    char escolha;
    escolha = getch();
    switch(escolha)
    {
    case riba:
        if(linha > 0)
        {
            return &matriz[linha][coluna-1];
        }
        break;
    case baixo:
        if(linha < 8)
        {
            return &matriz[linha][coluna+1];
        }
        break;
    case esquerda:
        if(coluna > 0)
        {
            return &matriz[linha-1][coluna];
        }
        break;
    case direita:
        if(coluna < 8)
        {
            return &matriz[linha+1][coluna];
        }
        break;
        return NULL;

    }
    return NULL;
}

void salvarArquivo(){
    int i;
    arqrank = fopen("arquranking.txt","wb");
    if(arqrank != NULL){
       for(i = 0; i<5; i++){
        fwrite(&rank[i],sizeof(ranking),1,arqrank);
       }
    }
    fclose(arqrank);
}

void abre_arquivo(void)
{
    int i;
    arqrank=fopen("arquranking.txt","r+b");
    if(arqrank != NULL){
       for(i = 0; i<5; i++){
        fread(&rank[i],sizeof(ranking),1,arqrank);
       }
    }
    fclose(arqrank);

}

int pos(int score){
    int i;
    for(i =0; i < 5;i++){
        if(score > rank[i].pontos){
            return i;
        }
    }
}

ranking cadastrar(int score){
    ranking player;
    printf("Nome: ");
    gets(player.nome); fflush(stdin);
    player.pontos = score;
    return player;
}

void empurrar(int index){
    int i;
    for(i = 4;i > index; i--){
        rank[i] = rank[i-1];
    }
}

void inserir(int *pontuac)
{
    ranking jogador;
    int position;
    system("cls");
    position = pos(*pontuac);
    jogador = cadastrar(*pontuac);
    //rank[posicao].pontos = 0;
    //rank[posicao].pontos= *pontuac;
    empurrar(position);
    rank[position] = jogador;
    printf("Pontuacao: %d", *pontuac);
    printf("\n\nOperacao realizada\n\n");
    salvarArquivo();
    system("pause");
}

void start(){
    abre_arquivo();
}

void mostrar()
{


    int j=1;
    printf("\n ________________________________________________________");
    printf("\n|COLOCACAO   |NOME           |PONTUACAO                  |");
    printf("\n|____________|_______________|___________________________|\n");

    rewind(arqrank);//Move o cursor para o inicio do arquivo

    if(feof(arqrank)==0)
    {

        fread(&rank, sizeof(ranking), 1, arqrank);//Lê o arquivo linha-a-linha
        dados();
        //if(feof(arqrank)==0);
        j++;

    }

    else{
    printf("\n|____________|_______________|___________________________|");
    printf("\nTecle [Enter] para voltar ao menu...");
    }
}
int dados()
{
    int j;
    for(j = 0; j < 5; j++){
        if(rank[j].pontos != 0){
            printf("|%d\t\t%s\t\t%d\t\n" ,j+1, rank[j].nome, rank[j].pontos);
            printf("|____________|_______________|___________________________|\n");}
             if(rank[j].pontos == 0){
            printf("Vazio");
            break;
        }


    }
/*
    if(rank[i].pontos==0)
    {
        printf("vazio");


    }
    else
    {
        printf("\n|%do COLOCADO |%-15s|%-11d|",i,rank[i].nome,rank[i].pontos);

    }

*/
}


void gerarMatriz(int matriz[SIZE][SIZE])
{
    int i,j;
    srand(time(NULL));
    for(i = 0; i < SIZE; i++)
    {
        for(j = 0; j < SIZE; j++)
        {
            matriz[i][j] = gerarRand();
        }
    }
}

void trocarItem(int **atual, int **prox)
{
    int * aux;
    aux = *atual;
    *atual = *prox;
    *prox = aux;
}

void fezJogo(int *matriz[SIZE][SIZE],int *pontuar)
{
    int i, j;

    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            if((matriz[i][j] == matriz[i+1][j]) && (matriz[i][j] == matriz[i+2][j]) && (matriz[i+1][j]==matriz[i+2][j]))
            {
                matriz[i][j] = gerarRand();
                matriz[i+1][j] = gerarRand();
                matriz[i+2][j] = gerarRand();
                if(*pontuar == 1)pontuacao+=100;
            }
        }
    }
    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            if((matriz[i][j] == matriz[i][j+1]) && (matriz[i][j] == matriz[i][j+2]) && (matriz[i][j+1]==matriz[i][j+2]))
            {
                matriz[i][j] = gerarRand();
                matriz[i][j+1] = gerarRand();
                matriz[i][j+2] = gerarRand();
                if(*pontuar == 1)pontuacao+=100;
            }
        }
    }
    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            if((matriz[i][j] == matriz[i][j+1]) && (matriz[i][j] == matriz[i][j+2]) &&
                    (matriz[i][j+1]==matriz[i][j+2]) && (matriz[i][j] == matriz[i][j+3]) && matriz[i][j+1]==matriz[i][j+3]
                    && matriz[i][j+2]==matriz[i][j+3])
            {
                matriz[i][j] = gerarRand();
                matriz[i][j+1] = gerarRand();
                matriz[i][j+2] = gerarRand();
                matriz[i][j+3] = gerarRand();
                if(*pontuar == 1) pontuacao+=100;
            }
        }
    }
}


int matrix()
{
    int matriz[SIZE][SIZE];
    int x = 0,y = 0;
    int * atual, *proximo;
    char aux, jogadas=15;
    int troca = 1;
    int pontuar = 0;
    int *pont = 0;
    gerarMatriz(matriz);



    do
    {

        exibirMatriz(matriz);
        printf("\n\n\t\t\t\tJogadas:%d",jogadas);
        printf("\tPontuacao:%d",pontuacao);
        gotoxy(32+(3*x),5+(2*y));
        fezJogo(&matriz, &pont);
        aux = getch();

        switch(aux)
        {
        case riba:
            if(y > 0)
            {
                y--;
                if(troca < 0)
                {
                    proximo = &matriz[x][y];
                    trocarItem(atual,proximo);
                    pont = 1;
                    fezJogo(&matriz, &pont);
                    troca *= -1;
                    jogadas--;
                }
            }
            break;
        case baixo:
            if(y < 7)
            {
                y++;
                if(troca < 0)
                {
                    proximo = &matriz[x][y];
                    trocarItem(atual,proximo);
                    pont = 1;
                    fezJogo(&matriz, &pont);
                    troca *= -1;
                    jogadas--;
                }
            }
            break;
        case esquerda:
            if(x > 0)
            {
                x--;
                if(troca < 0)
                {
                    proximo = &matriz[x][y];
                    trocarItem(atual,proximo);
                    pont = 1;
                    fezJogo(&matriz, &pont);
                    troca *= -1;
                    jogadas--;
                }
            }
            break;
        case direita:
            if(x < 7)
            {
                x++;
                if(troca < 0)
                {
                    proximo = &matriz[x][y];
                    trocarItem(atual,proximo);
                    pont = 1;
                    fezJogo(&matriz, &pont);
                    troca *= -1;
                    jogadas--;
                }
            }
            break;
        case enter:
            atual = &matriz[x][y];
            mudacor(12);
            printf("%c", *atual);
            aux = getch();
            troca *= -1;
            break;
        }
    }
    while(aux != 0 && jogadas>=0 && aux !=esc && pontuacao<2000);


    if(pontuacao >= 2000){
        ganhou();
    }
    if(pontuacao <2000){
        perdeu();
    }
    inserir(&pontuacao);

}
