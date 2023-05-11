#include <iostream>
#include <vector>
#ifndef MOSTRARSITUACAODOJOGO_H_INCLUDED
#define MOSTRARSITUACAODOJOGO_H_INCLUDED

using std::cout;
using std::vector;

void mostrarSituacaoDoJogo(vector<vector<char>> &Tabuleiro)
{
    cout << "Estado atual do jogo: " << '\n';
    cout << "----------------------------------" << '\n';
    
    for (int i = 0; i < 3; i++)
    {
        cout << " " << Tabuleiro[i][0] << "  |";
        cout << " " << Tabuleiro[i][1] << "  |";
        cout << " " << Tabuleiro[i][2] << '\n';

        if (i != 2)
        {
            cout << "___ ___ ___\n"
                 << '\n';
        }
    }
}

#endif