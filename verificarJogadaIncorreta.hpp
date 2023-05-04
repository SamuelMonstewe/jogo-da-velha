#include <iostream>
#include <vector>
#ifndef VERIFICARJOGADAINCORRETA_H_INCLUDED
#define VERIFICARJOGADAINCORRETA_H_INCLUDED

using std::cin;
using std::cout;
using std::vector;

bool verificarJogadaIncorreta(vector<vector<char>> &Tabuleiro, int OpcaoDaLinha, int OpcaoDaColuna)
{

    if(OpcaoDaLinha > 2 || OpcaoDaColuna > 2 || Tabuleiro[OpcaoDaLinha][OpcaoDaColuna] == 'X' || Tabuleiro[OpcaoDaLinha][OpcaoDaColuna] == 'O')
        return false;
    else
        return true;

}
#endif