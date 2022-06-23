#ifndef CURSOR_H_INCLUDED
#define CURSOR_H_INCLUDED
typedef struct
{
    char nome[25];
    int pontos;
} ranking;
void mostrar();
void mudacor(int i);
void abre_arquivo(void);
void inserir(int *pontuac);
int dados();
void gotoxy(x,y);
int cursor(int x, int y);
#endif // CURSOR_H_INCLUDED
