#include <iostream>
#include <vector>
using std::cout;
using std::vector;

bool verificarSituacaoDeVelha(vector<vector<char>> &Tabuleiro)
{
    uint16_t TabuleiroPreenchido;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(Tabuleiro[i][j] == 'X' || Tabuleiro[i][j] == 'O')
                TabuleiroPreenchido++;
            
        }
    }

    if(TabuleiroPreenchido == 9)
        return true;    
    else
        return false;
    
}