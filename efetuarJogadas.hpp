#include <iostream>
#include <iomanip>
#include <vector>
#include "verificarJogadaIncorreta.hpp"
#ifndef EFETUARJOGADOR_H_INCLUDED
#define EFETUARJOGADOR_H_INCLUDED

using std::cin;
using std::cout;
using std::vector;

void efetuarJogadas(vector<vector<char>> &Tabuleiro, int JogadorAtual, const char FiguraJogador1, const char FiguraJogador2)
{
    int OpcaoDaLinha;
    int OpcaoDaColuna;
    char VerificarJogada = 'N';
    cout << "Vez de jogador " << JogadorAtual << '\n';

    while (VerificarJogada == 'N')
    {
        cout << "Onde deseja jogar?" << '\n';
        cin >> OpcaoDaLinha >> OpcaoDaColuna;

        if (verificarJogadaIncorreta(Tabuleiro, OpcaoDaLinha, OpcaoDaColuna))
        {
            if (JogadorAtual == 1)
            {
                Tabuleiro[OpcaoDaLinha][OpcaoDaColuna] = FiguraJogador1;
                VerificarJogada = 'S';
            }
            else if (JogadorAtual == 2)
            {
                Tabuleiro[OpcaoDaLinha][OpcaoDaColuna] = FiguraJogador2;
                VerificarJogada = 'S';
            }
        }
        else
        {
            cout << "Jogada fora dos limites do tabuleiro ou espaco ja ocupado!" << '\n';
        }
    }
}
#endif