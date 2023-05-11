#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "efetuarJogadas.hpp"
#include "mostrarSituacaoDoJogo.hpp"
#include "exibirTabuleiro.hpp"
#include "verificarVelha.hpp"
#include "enumeradores.hpp"
#include "verificarEntradaIncorreta.hpp"
#include "verificarGanhador.hpp"

using std::cin;
using std::cout;
using std::string;
using std::vector;

int main(int argc, char const *argv[])
{
    char FiguraEscolhida;
    char FiguraJogador1;
    char FiguraJogador2;
    char FiguraIncorreta = 'S';
    SituacaoDoJogo JogadorVencedor;
    SituacaoDoJogo SituacaoDoJogo = SituacaoDoJogo::JOGANDO;
    vector<vector<char>> Tabuleiro(3, vector<char>(3));
    uint16_t OpcaoDaLinha;
    uint16_t OpcaoDaColuna;
    uint16_t JogadorAtual;

    cout << "----------------------------------\n";
    cout << "Bem vindo ao jogo da velha!" << '\n';
    cout << "----------------------------------\n";

    while (FiguraIncorreta == 'S')
    {
        cout << "Escolha a sua figura <X ou O>" << '\n';
        cin >> FiguraEscolhida;
        FiguraEscolhida = toupper(FiguraEscolhida);
        if (verificarEntradaIncorreta(FiguraEscolhida))
            cout << "Por favor, insira corretamente a figura que voce quer! " << '\n';
        else
            FiguraIncorreta = 'N';
    }

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

    cout << "Aqui esta o tabuleiro: " << '\n';
    cout << "---------------------------------- " << '\n';

    exibirTabuleiroInicioDoJogo(Tabuleiro);

    cout << "----------------------------------" << '\n';
    cout << "Voce deve efetuar as jogadas de acordo com os seu indices, exemplo: linha `0` depois enter; coluna `2` depos enter" << '\n';
    cout << "Quem comeca primeiro? <para jogador1 <1> ou para jogador2 <2>>";
    cin >> JogadorAtual;

    if (JogadorAtual == 1)
    {

        while (SituacaoDoJogo == SituacaoDoJogo::JOGANDO)
        {

            efetuarJogadas(Tabuleiro, JogadorAtual, FiguraJogador1, FiguraJogador2);
            mostrarSituacaoDoJogo(Tabuleiro);

            cout << "----------------------------------" << '\n';

            if (verificarJogadorVencedor(Tabuleiro) == 1)
            {
                JogadorVencedor = (FiguraJogador1 == 'X') ? SituacaoDoJogo::VITORIA_JOGADOR1 : SituacaoDoJogo::VITORIA_JOGADOR2;
                SituacaoDoJogo = SituacaoDoJogo::FIM_DE_JOGO;
            }
            else if (verificarJogadorVencedor(Tabuleiro) == -1)
            {
                JogadorVencedor = (FiguraJogador1 == 'O') ? SituacaoDoJogo::VITORIA_JOGADOR1 : SituacaoDoJogo::VITORIA_JOGADOR2;
                SituacaoDoJogo = SituacaoDoJogo::FIM_DE_JOGO;
            }
            else if (verificarSituacaoDeVelha(Tabuleiro))
                SituacaoDoJogo = SituacaoDoJogo::VELHA;
            else
                SituacaoDoJogo = SituacaoDoJogo::JOGANDO;

            if (JogadorAtual == 1)
                JogadorAtual++;
            else
                JogadorAtual--;
        }
    }
    else if (JogadorAtual == 2)
    {
        while (SituacaoDoJogo == SituacaoDoJogo::JOGANDO)
        {
            efetuarJogadas(Tabuleiro, JogadorAtual, FiguraJogador1, FiguraJogador2);
            mostrarSituacaoDoJogo(Tabuleiro);

            cout << "----------------------------------" << '\n';

            if (verificarJogadorVencedor(Tabuleiro) == 1)
            {
               JogadorVencedor = (FiguraJogador1 == 'X') ? SituacaoDoJogo::VITORIA_JOGADOR1 : SituacaoDoJogo::VITORIA_JOGADOR2;
                SituacaoDoJogo = SituacaoDoJogo::FIM_DE_JOGO;
            }
            else if (verificarJogadorVencedor(Tabuleiro) == -1)
            {
               JogadorVencedor = (FiguraJogador1 == 'O') ? SituacaoDoJogo::VITORIA_JOGADOR1 : SituacaoDoJogo::VITORIA_JOGADOR2;
                SituacaoDoJogo = SituacaoDoJogo::FIM_DE_JOGO;
            }
            else if (verificarSituacaoDeVelha(Tabuleiro))
                SituacaoDoJogo = SituacaoDoJogo::VELHA;
            else
                SituacaoDoJogo = SituacaoDoJogo::JOGANDO;

            if (JogadorAtual == 2)
                JogadorAtual--;
            else
                JogadorAtual++;
        }
    }

    if (JogadorVencedor == SituacaoDoJogo::VITORIA_JOGADOR1)
    {
        cout << "JOGADOR 1 VENCEU!" << '\n';
    }
    else if (JogadorVencedor == SituacaoDoJogo::VITORIA_JOGADOR2)
    {
        cout << "JOGADOR 2 VENCEU!" << '\n';
    }
    else
    {
        cout << "O JOGO DEU VELHA!";
    }
    return 0;
}
