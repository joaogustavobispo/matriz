#include <stdio.h>
#include <stdlib.h>

const int n = 10;
int i, j, aux = 0, total = 0, valor;

void preenche(int m[n][n]);
void mostra_mat(int m[n][n]);
void entradaDados();

void main()
{
    int mat[n][n];
    //Entrada de dados automática
    preenche(mat);
    //Saída de dados
    printf("\n\tMatriz Identidade % d x % d\n\n", n, n);
    mostra_mat(mat);

    float media = (float)total / aux;
    printf("Media da diagonal: %.2f\n", media);
}

void preenche(int m[n][n])
{

    for (i = 0; i < n; i++)
    {
        {
            for (j = 0; j < n; j++)
            {
                printf("Insira um numero: ");
                scanf("%d", &valor);

                if (i == j)
                {
                    m[i][j] = valor;
                    total += valor;
                    aux++;
                }
                else
                {
                    m[i][j] = valor;
                }
            }
        }
    }
}

void mostra_mat(int m[n][n])
{
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%5d", m[i][j]);
        }
        printf("\n\n");
    }
}
