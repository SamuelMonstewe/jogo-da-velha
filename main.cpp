#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    char FiguraEscolhida;
    char Jogador1;
    char Jogador2;
    string SituacaoDoJogo = "jogando";
    vector<vector<string>> JogoDaVelha(3, vector<string>(3));
    uint16_t OpcaoDaLinha;
    uint16_t OpcaoDaColuna;
    uint16_t JogadorAtual;
    uint16_t JogadorVencedor;
    uint16_t ContadorDeJogadadasJogador1 = 0;
    uint16_t ContadorDeJogadadasJogador2 = 0;

    printf("----------------------------------\n");
    cout << "Bem vindo ao jogo da velha!" << '\n';
    printf("----------------------------------\n");

    cout << "Escolha a sua figura <X ou O>" << '\n';
    cin >> FiguraEscolhida;
    FiguraEscolhida = toupper(FiguraEscolhida);

    if (FiguraEscolhida == 'X')
    {
        cout << "Como o jogador 1 escolheu " << FiguraEscolhida << " o jogador 2 vai ficar com o `O`" << '\n';
        Jogador1 = FiguraEscolhida;
        Jogador2 = 'O';
    }
    else if (FiguraEscolhida == 'O')
    {
        cout << "Como o jogador 1 escolheu " << FiguraEscolhida << " o jogador 2 vai ficar com o `X`" << '\n';
        Jogador1 = FiguraEscolhida;
        Jogador2 = 'X';
    }

    cout << "Aqui esta o jogo da velha: " << '\n';
    printf("----------------------------------\n");

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

    printf("----------------------------------\n");
    cout << "Voce deve efetuar as jogadas de acordo com os seu indices, exemplo: linha `0` depois enter; coluna `2` depos enter" << endl;
    cout << "Quem comeca primeiro? <para jogador1 <1> ou para jogador2 <2>>";
    cin >> JogadorAtual;

    if (JogadorAtual == 1)
    {

        while (SituacaoDoJogo == "jogando")
        {
            cout << "Vez de jogador " << JogadorAtual << '\n';
            cout << "Onde deseja jogar?" << '\n';
            cin >> OpcaoDaLinha >> OpcaoDaColuna;

            if (JogadorAtual == 1)
            {
                JogoDaVelha[OpcaoDaLinha][OpcaoDaColuna] = "X";
                ContadorDeJogadadasJogador1++;
            }

            else if (JogadorAtual == 2)
            {
                JogoDaVelha[OpcaoDaLinha][OpcaoDaColuna] = "O";
                ContadorDeJogadadasJogador2++;
            }

            cout << "Estado atual do jogo: " << '\n';

            cout << '\n';

            printf("----------------------------------\n");

            for (uint16_t i = 0; i < 3; i++)
            {
                cout.width(2);
                cout << i << " ";
            }

            cout << '\n';

            for (uint16_t i = 0; i < JogoDaVelha.size(); i++)
            {
                for (int j = 0; j < JogoDaVelha.size(); j++)
                {
                    cout.width(2);
                    cout << JogoDaVelha[i][j] << " ";
                }
                cout << '\n';
            }

            printf("----------------------------------\n");

            if (JogadorAtual == 1)
                JogadorAtual++;
            else
                JogadorAtual--;

            if (ContadorDeJogadadasJogador1 == 5 && ContadorDeJogadadasJogador2 == 4)
                SituacaoDoJogo = "velha";
        }
    }
    else if (JogadorAtual = 2)
    {
        while (SituacaoDoJogo == "jogando")
        {
            cout << "Vez de jogador " << JogadorAtual << '\n';
            cout << "Onde deseja jogar?" << '\n';
            cin >> OpcaoDaLinha >> OpcaoDaColuna;

            if (JogadorAtual == 1)
                JogoDaVelha[OpcaoDaLinha][OpcaoDaColuna] = 'X';
            else if (JogadorAtual == 2)
                JogoDaVelha[OpcaoDaLinha][OpcaoDaColuna] = 'O';

            cout << "Estado atual do jogo: " << '\n';

            cout << endl;

            printf("----------------------------------\n");

            for (uint16_t i = 0; i < JogoDaVelha.size(); i++)
            {
                cout.width(2);
                cout << i << " ";
            }

            cout << endl;

            for (uint16_t i = 0; i < JogoDaVelha.size(); i++)
            {
                for (int j = 0; j < JogoDaVelha.size(); j++)
                {
                    cout.width(2);
                    cout << JogoDaVelha[i][j] << " ";
                }
                cout << endl;
            }

            printf("----------------------------------\n");

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

    return 0;
}
