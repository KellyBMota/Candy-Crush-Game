#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <unistd.h>
#include "cursor.h"
#define acima 72
#define abaixo 80
#define esc 27
#define enter 13
#define esquerda 75
#define direta 77


int seta1,seta2;
seta1=175, seta2=174;
void inicio1(void)
{
    gotoxy(50,50);
    system("cls");
    printf("\t\t\t             %c%cNAIPE CRUSH%c%c",5,6,3,4);
    printf("\n\n\n\n\t\t\t   �������� Menu Principal ��������Ŀ\n");
    printf("\t\t\t   �  \7                              �\n");
    printf("\t\t\t   �  %cNovo Jogo%c                   �\n",seta1,seta2);
    printf("\t\t\t   �   Nivel                        �\n");
    printf("\t\t\t   �   Ranking                      �\n");
    printf("\t\t\t   �   Opcoes                       �\n");
    printf("\t\t\t   �   Sair                         �\n");
    printf("\t\t\t   �                                �\n");
    printf("\t\t\t   ����������������������������������");
    int ch;
    ch=getch();
    if (ch==esc)
        system("cls");
    else if (ch==enter)
        {funcao_enter1 ();
        matrix();}
    else if (ch==224)
        ch=getch();
    if (ch==acima)
        inicio05();
    else if (ch==abaixo)
        inicio02();
    else
        inicio1();
}
inicio02()
{
    system("cls");
    printf("\t\t\t             %c%cNAIPE CRUSH%c%c",3,5,4,6);
    printf("\n\n\n\n\t\t\t   �������� Menu Principal ��������Ŀ\n");
    printf("\t\t\t   �  \7                              �\n");
    printf("\t\t\t   �   Novo Jogo                    �\n");
    printf("\t\t\t   �  %cNivel%c                       �\n",seta1,seta2);
    printf("\t\t\t   �   Ranking                      �\n");
    printf("\t\t\t   �   Opcoes                       �\n");
    printf("\t\t\t   �   Sair                         �\n");
    printf("\t\t\t   �                                �\n");
    printf("\t\t\t   ����������������������������������");
    int ch;
    ch=getch();
    if (ch==esc)
        exit(0);
    else if (ch==enter)
        funcao_enter2();
    else if (ch==224)
        ch=getch();
    if (ch==acima)
        inicio1();
    else if (ch==abaixo)
        inicio03();
    else
        inicio02();
}
inicio03()
{
    system("cls");
    printf("\t\t\t             %c%cNAIPE CRUSH%c%c",6,4,5,3);
    printf("\n\n\n\n\t\t\t   �������� Menu Principal ��������Ŀ\n");
    printf("\t\t\t   �  \7                              �\n");
    printf("\t\t\t   �   Novo Jogo                    �\n");
    printf("\t\t\t   �   Nivel                        �\n");
    printf("\t\t\t   �  %cRanking%c                     �\n",seta1,seta2);
    printf("\t\t\t   �   Opcoes                       �\n");
    printf("\t\t\t   �   Sair                         �\n");
    printf("\t\t\t   �                                �\n");
    printf("\t\t\t   ����������������������������������");
    int ch;
    ch=getch();
    if (ch==esc)
        system("exit");
    else if (ch==enter)
        funcao_enter3();
    else if (ch==224)
        ch=getch();
    if (ch==acima)
        inicio02();
    else if (ch==abaixo)
        inicio04();
    else
        inicio03();
}
inicio04()
{
    system("cls");
    printf("\t\t\t             %c%cNAIPE CRUSH%c%c",4,6,3,5);
    printf("\n\n\n\n\t\t\t   �������� Menu Principal ��������Ŀ\n");
    printf("\t\t\t   �   \7                             �\n");
    printf("\t\t\t   �   Novo Jogo                    �\n");
    printf("\t\t\t   �   Nivel                        �\n");
    printf("\t\t\t   �   Ranking                      �\n");
    printf("\t\t\t   �  %cOpcoes%c                      �\n",seta1,seta2);
    printf("\t\t\t   �   Sair                         �\n");
    printf("\t\t\t   �                                �\n");
    printf("\t\t\t   ����������������������������������");
    int ch;
    ch=getch();
    if (ch==esc)
        system("exit");
    else if (ch==enter)
        funcao_enter4();
    else if (ch==224)
        ch=getch();
    if (ch==acima)
        inicio03();
    else if (ch==abaixo)
        inicio05();
    else
        inicio04();
}
inicio05()
{
    system("cls");
    printf("\t\t\t             %c%cNAIPE CRUSH%c%c",4,5,3,6);
    printf("\n\n\n\n\t\t\t   �������� Menu Principal ��������Ŀ\n");
    printf("\t\t\t   �  \7                              �\n");
    printf("\t\t\t   �   Novo Jogo                    �\n");
    printf("\t\t\t   �   Nivel                        �\n");
    printf("\t\t\t   �   Ranking                      �\n");
    printf("\t\t\t   �   Opcoes                       �\n");
    printf("\t\t\t   �  %cSair%c                        �\n",seta1,seta2);
    printf("\t\t\t   �                                �\n");
    printf("\t\t\t   ����������������������������������");
    int ch;
    ch=getch();
    if (ch==esc)
        system("exit");
    else if (ch==enter)
        funcao_enter5();
    else if (ch==224)
        ch=getch();
    if (ch==acima)
        inicio04();
    else if (ch==abaixo)
        inicio1();
    else
        inicio05();
}
funcao_enter1()
{

    system("cls");
    printf("\t\t\t             %c%cNAIPE CRUSH%c%c",5,3,6,4);
    printf("\n\n\n\n\t\t\t   ��������������������������������Ŀ\n");
    printf("\t\t\t   �                                �\n");
    printf("\t\t\t   �   LOADING GAME....             �\n");
    printf("\t\t\t   �                                �\n");
    printf("\t\t\t   ����������������������������������");

    Sleep(600);
    system("cls");


}



    funcao_enter2()
    {
        system("cls");
        printf("\t\t\t             %c%cNAIPE CRUSH%c%c",6,4,3,5);
        printf("\n\n\n\n\t\t\t   ��������%cSELECIONE O NIVEL%c������Ŀ\n",4,5);
        printf("\t\t\t   � \7                                �\n");
        printf("\t\t\t   �   %cEasy                         �\n", seta1);
        printf("\t\t\t   �    Normal                       �\n");
        printf("\t\t\t   �    Hard                         �\n");
        printf("\t\t\t   �                                 �\n");
        printf("\t\t\t   �����������������������������������");
        int ch;
        ch=getch();
        if (ch==esc)
            inicio02();
        else if (ch==abaixo)
            funcao_enter2b();
        else if (ch==acima)
            funcao_enter2c();
        else funcao_enter2();

    }
    funcao_enter3()
    {
        system("cls");
        printf("\t\t\t             %c%cNAIPE CRUSH%c%c",5,3,6,4);
        printf("\n\n\n\n\t\t\t   ���������    RANKING    ���������Ŀ\n");
        printf("\t\t\t   �                                 �\n");
        printf("\t\t\t   �    %cMelhores pontuadores%c       �\n",4,4);
        printf("\t\t\t   �                                 �\n");
        printf("\t\t\t   �     Player %c1%c:  500.000        �\n", seta1,seta2);
        printf("\t\t\t   �     Player %c2%c:  300.000        �\n", seta1,seta2);
        printf("\t\t\t   �     Player %c3%c:  100.000        �\n", seta1,seta2);
        printf("\t\t\t   �                                 �\n");
        printf("\t\t\t   �����������������������������������");
        int ch;
        ch=getch();
        if (ch==esc)
            inicio03();
        else
            funcao_enter3();
    }
    funcao_enter4()
    {
        system("cls");
        printf("\t\t\t             %c%cNAIPE CRUSH%c%c",4,3,6,5);
        printf("\n\n\n\n\t\t\t   �������� CONFIGURACOES ���������Ŀ\n");
        printf("\t\t\t   � \7                               �\n");
        printf("\t\t\t   �             %cSOM%c              �\n",6,6);
        printf("\t\t\t   � %cHabilitar%c     Desabilitar    �\n",seta1,seta2);
        printf("\t\t\t   �                                �\n");
        printf("\t\t\t   �                                �\n");
        printf("\t\t\t   �                                �\n");
        printf("\t\t\t   ����������������������������������");
        int ch;
        ch=getch();
        if (ch==esc)
            inicio04();
        else if (ch==direta)
            funcao_enter4b();
        else if (ch==esquerda)
            funcao_enter4b ();
        else if (ch==enter)
            inicio04();
        else funcao_enter4();
    }
    funcao_enter5()
    {
        system("cls");
        printf("\t\t\t             %c%cNAIPE CRUSH%c%c",6,4,5,3);
        printf("\n\n\n\n\t\t\t   ������������ %cEXIT%c �������������Ŀ\n",5,5);
        printf("\t\t\t   �                                 �\n");
        printf("\t\t\t   � %cEnter%c para Finalizar o jogo   �\n",seta1,seta2);
        printf("\t\t\t   �                                 �\n");
        printf("\t\t\t   � %cEsc%c para Voltar ao Menu       �\n");
        printf("\t\t\t   �                                 �\n");
        printf("\t\t\t   �����������������������������������");
        int ch;
        ch=getch();
        if (ch==esc)
            inicio05();
        else if (ch==enter)
            exit(0);
        else funcao_enter5();
    }
    funcao_enter2b()
    {
        system("cls");
        printf("\t\t\t             %c%cNAIPE CRUSH%c%c",3,4,5,6);
        printf("\n\n\n\n\t\t\t   ��������%cSELECIONE O NIVEL%c������Ŀ\n");
        printf("\t\t\t   �                                 �\n",5,5);
        printf("\t\t\t   �    Easy                         �\n");
        printf("\t\t\t   �   %cNormal                       �\n", seta1, seta2);
        printf("\t\t\t   �    Hard                         �\n");
        printf("\t\t\t   �                                 �\n");
        printf("\t\t\t   �����������������������������������");
        int ch;
        ch=getch();
        if (ch==esc)
            inicio02();
        else if (ch==acima)
            funcao_enter2();
        else if (ch==abaixo)
            funcao_enter2c();
        else funcao_enter2b ();
    }
    funcao_enter2c()
    {
        system("cls");
        printf("\t\t\t             %c%cNAIPE CRUSH%c%c",6,5,4,3);
        printf("\n\n\n\n\t\t\t   ��������%cSELECIONE O NIVEL%c������Ŀ\n");
        printf("\t\t\t   �                                 �\n",5,5);
        printf("\t\t\t   �    Easy                         �\n");
        printf("\t\t\t   �    Normal                       �\n");
        printf("\t\t\t   �   %cHard                         �\n", seta1,seta2);
        printf("\t\t\t   �                                 �\n");
        printf("\t\t\t   �����������������������������������");
        int ch;
        ch=getch();
        if (ch==esc)
            inicio02();
        else if (ch==acima)
            funcao_enter2b();
        else if (ch==abaixo)
            funcao_enter2();
        else funcao_enter2c();
    }
    funcao_enter4b()
    {
        system("cls");
        printf("\t\t\t             %c%cNAIPE CRUSH%c%c",6,5,3,4);
        printf("\n\n\n\n\t\t\t   �������� CONFIGURACOES ���������Ŀ\n");
        printf("\t\t\t   �                                �\n");
        printf("\t\t\t   �             %cSOM%c              �\n", 6,6);
        printf("\t\t\t   �   Habilitar   %cDesabilitar%c    �\n",seta1,seta2);
        printf("\t\t\t   �                                �\n");
        printf("\t\t\t   �                                �\n");
        printf("\t\t\t   �                                �\n");
        printf("\t\t\t   ����������������������������������");
        int ch;
        ch=getch();
        if (ch==esc)
            inicio04();
        else if (ch==direta)
            funcao_enter4();
        else if (ch==esquerda)
            funcao_enter4();
        else if (ch==enter)
            inicio04();
        else funcao_enter4b();
    }

    main ()
    {
       inicio1();
    }

