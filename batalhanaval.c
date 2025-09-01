#include <stdio.h>


int main(){
    int menu;
    int index; // navegação
    //criando o tabuleiro
int tabuleiro[10][10] = {
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0}
};

void viewTabuleiro(){
    for(index = 0; index < 9; index++){
        printf("%d %d %d %d %d %d %d %d %d %d\n",tabuleiro[index][0],tabuleiro[index][1],tabuleiro[index][2],tabuleiro[index][3],tabuleiro[index][4],tabuleiro[index][5],tabuleiro[index][6],tabuleiro[index][7],tabuleiro[index][8],tabuleiro[index][9]);
    }
}

// Menu do jogo: Bem vindo a Batalha Naval

do{
    printf("Bem vindo a Batalha Naval!\n");
    printf("1-Iniciar Jogo\n");
    printf("0-Sair\n");
    scanf(" %d", &menu);
    switch (menu)
    {
    case 1:
        tabuleiro[2][2] = 3;
        tabuleiro[2][3] = 3;
        tabuleiro[2][4] = 3;
        tabuleiro[5][5] = 3;
        tabuleiro[6][5] = 3;
        tabuleiro[7][5] = 3;
        viewTabuleiro();
        break;
        menu = 0;

    case 0:
        break;
    
    default:
        printf("Insíra uma opção válida.\n");
        
    }
} while (menu!=0);
printf("Desligando...");


}