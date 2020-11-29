#include <stdio.h>
#include <stdlib.h>

const int lin = 5, col = 4;
int i, j;

void le_mat(float mv[lin][col])
{
    printf("Digite o valor das vendas dos vendedores por semana:\n");
    for (i = 0; i < lin; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("\n\t%do vendedor na semana %d: ", i + 1, j + 1);
            scanf("%f", &mv[i][j]);
        }
        printf("\n\n");
    }
}
void calc_tot_vend(float mv[lin][col], float *vv)
{
    for (i = 0; i < lin; i++)
    {
        vv[i] = 0;
        for (j = 0; j < col; j++)
            vv[i] += mv[i][j];
    }
}
void calc_tot_sem(float mv[lin][col], float *vs)
{
    for (j = 0; j < col; j++)
    {
        vs[j] = 0;
        for (i = 0; i < lin; i++)
            vs[j] += mv[i][j];
    }
}
float calc_tg(float *vs)
{
    float total = 0;
    for (j = 0; j < col; j++)
        total += vs[j];
    return (total);
}

void mostra_tot_v(float *vv)
{
    printf("\n\nTotal vendas do por vendedor: \n\n");
    for (i = 0; i < lin; i++)
        printf("\n\t % do Vendedor: R$ %.2f", vv[i]);
    printf("\n\n");
}

void mostra_tot_s_tg(float *vs, float tg)
{
    printf("\n\nTotal vendas do por semana: \n\n");
    for (j = 0; j < col; j++)
        printf("\n\t % da Semana: R$ % .2f", vs[j]);
    printf("\n\n");
    printf("\n\nTotal geral de vendas e: %8.2f \n\n", tg);
}

main()
{
    float matriz_vendas[lin][col], vet_vend[lin], vet_sem[col], total_geral;
    le_mat(matriz_vendas);
    calc_tot_vend(matriz_vendas, vet_vend);
    calc_tot_sem(matriz_vendas, vet_sem);
    total_geral = calc_tg(vet_sem);
    system("cls"); //Limpa a tela para mostrar a saída de dados
    mostra_tot_v(vet_vend);
    mostra_tot_s_tg(vet_sem, total_geral);
    system("pause");
}