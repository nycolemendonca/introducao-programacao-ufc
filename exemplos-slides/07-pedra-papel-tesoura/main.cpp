/*  Avalie o resultado do jogo pedra-papel-tesoura. O programa deve
    ler a escolha de dois jogadores como inteiros não-negativos de
    16 bits de acordo com os valores Pedra (1), Papel (2) e Tesoura (3).
    - Papel vence Pedra;
    - Tesoura vence Papel;
    - Pedra vence Tesoura.
    Escolhas iguais resultam em empate.
    O programa deve imprimir: Jogador 1 venceu, Jogador 2 vendeu ou Empate. */

#include <iostream>

using namespace std;

int main()
{
    const short int pedra = 1, papel = 2, tesoura = 3;
    unsigned short escolha1, escolha2; // jogadores

    cout << "Escolha do Jogador 1 [1 - Pedra, 2 - Papel, 3 - Tesoura]: ";
    cin >> escolha1;
    cout << "Escolha do Jogador 2 [1 - Ṕedra, 2 - Papel, 3 - Tesoura]: ";
    cin >> escolha2;

    do {
        if ((escolha1 >= pedra && escolha1 <= tesoura) && (escolha2 >= pedra && escolha2 <= tesoura)) {
            if (escolha1 != escolha2) {
                if ((escolha1 == papel && escolha2 == pedra) ||
                         (escolha1 == tesoura && escolha2 == papel) ||
                         (escolha1 == pedra && escolha2 == tesoura)) {
                            cout << "Jogador 1 venceu." << endl;
                         } else { cout << "Jogador 2 venceu." << endl; }
            } else { cout << "Empate." << endl; }
        }
    } while ((escolha1 < 1 && escolha1 > 3) && (escolha2 < 1 && escolha2 > 3));





    return 0;
}
