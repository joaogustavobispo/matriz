#include <stdio.h>
#include <stdlib.h>
const int n = 4;
int i, j;
void preenche(int m[n][n]);
void mostra_mat(int m[n][n]);

void main()
{
    int mat[n][n];
    //Entrada de dados automática
    preenche(mat);
    //Saída de dados
    printf("\n\n\tMatriz Identidade % d x % d\n\n", n, n);
    mostra_mat(mat);
    system("pause");
}

void preenche(int m[n][n])
{
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (i == j)
                m[i][j] = 1;
            else
                m[i][j] = 0;
}

void mostra_mat(int m[n][n])
{
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("% 5d", m[i][j]);
        printf("\n\n");
    }
}