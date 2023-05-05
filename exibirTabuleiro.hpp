#include <iostream>
#include <vector>
using std::vector;
using std::cout;

void exibirTabuleiroInicioDoJogo(vector<vector<char>> &Tabuleiro)
{
    for (int row = 0; row < 3; row++)
    {
        cout << " " << Tabuleiro[row][0] << "  |";
        cout << " " << Tabuleiro[row][1] << "  |";
        cout << " " << Tabuleiro[row][2] << '\n';

        if (row != 2)
        {
            cout << "___ ___ ___\n"
                 << '\n';
        }
    }
}