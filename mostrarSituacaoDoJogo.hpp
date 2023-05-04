#include <iostream>
#include <vector>
#ifndef MOSTRARSITUACAODOJOGO_H_INCLUDED
#define MOSTRARSITUACAODOJOGO_H_INCLUDED

using std::cout;
using std::vector;

void mostrarSituacaoDoJogo(vector<vector<char>> &Tabuleiro)
{
    cout << "Estado atual do jogo: " << '\n';
    cout << '\n';
    cout << "----------------------------------" << '\n';

    for (uint16_t i = 0; i < 3; i++)
    {
        cout << i << "  ";
    }

    cout << '\n';

    for (uint16_t i = 0; i < Tabuleiro.size(); i++)
    {
        for (uint16_t j = 0; j < Tabuleiro.size(); j++)
        {
            cout << Tabuleiro[i][j] << "  ";
        }
        cout << '\n';
    }
}

#endif