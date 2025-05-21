// Desafio Batalha Naval - MateCheck
//Tema 4 Batalha Naval - Nível novato
//Paulo Vitor dos Santos Bernardo

#include <stdio.h>

//Função void para criar a matriz com cabeçalhos nas linhas e colunas
void exibirMatriz(char * matriz [10][10]) 
{
    printf("   ");
    for (int j = 0; j< 10; j++) 
    {
        printf("  %c  ", 'A' + j);
    }
    printf("\n");

    for (int i = 0; i <10; i++) 
    {
        printf("%2d", i +1); //Cabeçalho das linhas
        for (int j = 0; j < 10; j++) 
        {
            printf ("%s", matriz [i] [j]); //Imprime os valores da matriz
        }
        printf("\n");
    }
}

//Função void para inserir os navios conferindo se o tamanho dele respeita os limites do tabuleiro
void inserirNavio(char * matriz [10][10], int linhas, int colunas, char * navio)  
{
    if (linhas >= 0 && linhas < 10 && colunas >= 0 && colunas <10) 
    {
        matriz [linhas] [colunas] = navio; //Altera o índice inserindo o navio

    }

}



int main() {

    char * matriz [10] [10];
    
    //Atribue valor 0 a todos os índices da matriz
 
    for (int i = 0; i < 10; i++) 
        {
            for (int j = 0; j < 10; j++) 
            {
                matriz [i] [j] = "| 0 |";
            }
            
        }
    
    // Exibe a matriz inicial com elementos = | 0 |
    printf("Tabuleiro limpo \n");
    exibirMatriz(matriz);

    //Insere o primeiro navio na horizontal alterando alguns índices
    inserirNavio(matriz, 0, 0, "| 3 |");
    inserirNavio(matriz, 0, 1, "| 3 |");
    inserirNavio(matriz, 0, 2, "| 3 |");

    //Exibe o tabuleiro após a inserção do primeiro navio
    printf("\n Tabuleiro com o navio na horizontal \n");
    exibirMatriz(matriz);

    //Insere o segundo navio, agora na vertical
    inserirNavio(matriz, 6, 5, "| 3 |");
    inserirNavio(matriz, 7, 5, "| 3 |");
    inserirNavio(matriz, 8, 5, "| 3 |");

     //Exibe o tabuleiro após a inserção do segundo navio
     printf("\n Tabuleiro com o navio na vertical \n");
     exibirMatriz(matriz);
 


    return 0;
}