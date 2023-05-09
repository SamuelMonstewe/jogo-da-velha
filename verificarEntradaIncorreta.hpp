#include <iostream>

using std::cout;

bool verificarEntradaIncorreta(const char FiguraEscolhida)
{
    if(FiguraEscolhida != 'X' && FiguraEscolhida != 'O')
        return true;
    else
        return false;
}

