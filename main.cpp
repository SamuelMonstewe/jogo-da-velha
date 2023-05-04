#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "efetuarJogadas.hpp"
#include "mostrarSituacaoDoJogo.hpp"
using std::cin;
using std::cout;
using std::string;
using std::vector;

int main(int argc, char const *argv[])
{
    char FiguraEscolhida;
    char FiguraJogador1;
    char FiguraJogador2;
    string SituacaoDoJogo = "jogando";
    vector<vector<char>> JogoDaVelha(3, vector<char>(3));
    uint16_t OpcaoDaLinha;
    uint16_t OpcaoDaColuna;
    uint16_t JogadorAtual;
    uint16_t JogadorVencedor;
    uint16_t SomaDeFigurasX = 0;
    uint16_t SomaDeFigurasO = 0;

    cout << "----------------------------------\n";
    cout << "Bem vindo ao jogo da velha!" << '\n';
    cout << "----------------------------------\n";

    cout << "Escolha a sua figura <X ou O>" << '\n';
    cin >> FiguraEscolhida;
    FiguraEscolhida = toupper(FiguraEscolhida);

    if (FiguraEscolhida == 'X')
    {
        cout << "Como o jogador 1 escolheu " << FiguraEscolhida << " o jogador 2 vai ficar com o `O`" << '\n';
        FiguraJogador1 = FiguraEscolhida;
        FiguraJogador2 = 'O';
    }
    else if (FiguraEscolhida == 'O')
    {
        cout << "Como o jogador 1 escolheu " << FiguraEscolhida << " o jogador 2 vai ficar com o `X`" << '\n';
        FiguraJogador1 = FiguraEscolhida;
        FiguraJogador2 = 'X';
    }

    cout << "Aqui esta o jogo da velha: " << '\n';
    cout << "---------------------------------- " << '\n';

    for (uint16_t i = 0; i < JogoDaVelha.size(); i++)
    {
        cout.width(2);
        cout << i << " ";
    }

    cout << '\n';

    for (uint16_t i = 0; i < JogoDaVelha.size(); i++)
    {
        cout << i << '\n';
    }

    cout << "----------------------------------" << '\n';
    cout << "Voce deve efetuar as jogadas de acordo com os seu indices, exemplo: linha `0` depois enter; coluna `2` depos enter" << '\n';
    cout << "Quem comeca primeiro? <para jogador1 <1> ou para jogador2 <2>>";
    cin >> JogadorAtual;

    if (JogadorAtual == 1)
    {

        while (SituacaoDoJogo == "jogando")
        {

            efetuarJogadas(JogoDaVelha, JogadorAtual, FiguraJogador1, FiguraJogador2);
            mostrarSituacaoDoJogo(JogoDaVelha);

            cout << "----------------------------------" << '\n';

            if (JogadorAtual == 1)
                JogadorAtual++;
            else
                JogadorAtual--;
        }
    }
    else if (JogadorAtual = 2)
    {
        while (SituacaoDoJogo == "jogando")
        {
            efetuarJogadas(JogoDaVelha, JogadorAtual, FiguraJogador1, FiguraJogador2);
            mostrarSituacaoDoJogo(JogoDaVelha);

            cout << "----------------------------------" << '\n';

            if (JogadorAtual == 2)
                JogadorAtual--;
            else
                JogadorAtual++;
        }
    }

    if (SituacaoDoJogo == "velha")
        cout << "Resuldado do jogo deu velha!" << '\n';
    else if (SituacaoDoJogo == "Jogador1")
        cout << "Jogador1 venceu!" << '\n';
    else if (SituacaoDoJogo == "Jogador2")
        cout << "Jogador2 venceu!" << '\n';

    return 0;
}
