#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int verificarJogadorVencedor(vector<vector<char>> &Tabuleiro)
{
    vector<vector<int>> TabuleiroComNumeros(3, vector<int>(3));
    int Soma;

    for (uint16_t i = 0; i < 3; i++)
    {
        for (uint16_t j = 0; j < 3; j++)
        {
            if (Tabuleiro[i][j] == 'X')
                TabuleiroComNumeros[i][j] = 1;
            else if (Tabuleiro[i][j] == 'O')
                TabuleiroComNumeros[i][j] = -1;
        }
    }

    for (uint16_t i = 0; i < 3; i++)
    {
        Soma = 0;

        for (int j = 0; j < 3; j++)
            Soma += TabuleiroComNumeros[i][j];

        if (Soma == 3)
            return 1;
        else if (Soma == -3)
            return -1;
    }

     for (uint16_t i = 0; i < 3; i++)
    {
        Soma = 0;

        for (uint16_t j = 0; j < 3; j++)
            Soma += TabuleiroComNumeros[j][i];

        if (Soma == 3)
            return 1;
        else if (Soma == -3)
            return -1;
    }


    Soma = TabuleiroComNumeros[0][0] + TabuleiroComNumeros[1][1] + TabuleiroComNumeros[2][2];
    if (Soma == 3)
        return 1;
    else if (Soma == -3)
        return -1;


    Soma = TabuleiroComNumeros[0][2] + TabuleiroComNumeros[1][1] + TabuleiroComNumeros[2][0];
    if (Soma == 3)
        return 1;
    else if (Soma == -3)
        return -1;

   
    return 0;
}