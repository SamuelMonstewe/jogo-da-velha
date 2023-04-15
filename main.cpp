#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    char FiguraEscolhida;
    char Jogador1;
    char Jogador2;
    string SituacaoDoJogo = "jogando";
    string JogoDaVelha[3][3];
    uint16_t OpcaoDaLinha;
    uint16_t OpcaoDaColuna;
    uint16_t JogadorAtual;
    uint16_t JogadorVencedor;

    printf("----------------------------------\n");
    cout << "Bem vindo ao jogo da velha!" << endl;
    printf("----------------------------------\n");

    cout << "Escolha a sua figura <X ou O>" << endl;
    cin >> FiguraEscolhida;
    FiguraEscolhida = toupper(FiguraEscolhida);

    if (FiguraEscolhida == 'X')
    {
        cout << "Como o jogador 1 escolheu " << FiguraEscolhida << " o jogador 2 vai ficar com o `O`" << endl;
        Jogador1 = FiguraEscolhida;
        Jogador2 = 'O';
    }
    else if (FiguraEscolhida == 'O')
    {
        cout << "Como o jogador 1 escolheu " << FiguraEscolhida << " o jogador 2 vai ficar com o `X`" << endl;
        Jogador1 = FiguraEscolhida;
        Jogador2 = 'X';
    }

    cout << "Aqui esta o jogo da velha: " << endl;
    printf("----------------------------------\n");

    for (uint16_t i = 0; i < 3; i++)
    {
        cout.width(2);
        cout << i << " ";
    }

    cout << endl;

    for (uint16_t i = 0; i < 3; i++)
    {
        cout << i << endl;
    }

    printf("----------------------------------\n");
    cout << "Voce deve efetuar as jogadas de acordo com os seu indices, exemplo: linha `0` depois enter; coluna `2` depos enter" << endl;
    cout << "Quem comeca primeiro? <para jogador1 <1> ou para jogador2 <2>>";
    cin >> JogadorAtual;

    if (JogadorAtual == 1)
    {

        while (SituacaoDoJogo == "jogando")
        {
            cout << "Vez de jogador " << JogadorAtual << endl;
            cout << "Onde deseja jogar?" << endl;
            cin >> OpcaoDaLinha >> OpcaoDaColuna;

            if (JogadorAtual == 1)
                JogoDaVelha[OpcaoDaLinha][OpcaoDaColuna] = 'X';
            else if (JogadorAtual == 2)
                JogoDaVelha[OpcaoDaLinha][OpcaoDaColuna] = 'O';

            cout << "Estado atual do jogo: " << endl;

            cout << endl;

            printf("----------------------------------\n");

            for (uint16_t i = 0; i < 3; i++)
            {
                cout.width(2);
                cout << i << " ";
            }

            cout << endl;

            for (uint16_t i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout.width(2);
                    cout << JogoDaVelha[i][j] << " ";
                }
                cout << endl;
            }

            printf("----------------------------------\n");

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
            cout << "Vez de jogador " << JogadorAtual << endl;
            cout << "Onde deseja jogar?" << endl;
            cin >> OpcaoDaLinha >> OpcaoDaColuna;

            if (JogadorAtual == 1)
                JogoDaVelha[OpcaoDaLinha][OpcaoDaColuna] = 'X';
            else if (JogadorAtual == 2)
                JogoDaVelha[OpcaoDaLinha][OpcaoDaColuna] = 'O';

            cout << "Estado atual do jogo: " << endl;

            cout << endl;

            printf("----------------------------------\n");

            for (uint16_t i = 0; i < 3; i++)
            {
                cout.width(2);
                cout << i << " ";
            }

            cout << endl;

            for (uint16_t i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
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

    return 0;
}
