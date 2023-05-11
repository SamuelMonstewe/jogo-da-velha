#include <iostream>
#include <vector>
using std::vector;
using std::cout;

void exibirTabuleiroInicioDoJogo(vector<vector<char>> &Tabuleiro)
{
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