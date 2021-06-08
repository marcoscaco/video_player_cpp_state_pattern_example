#include <iostream>
#include "VideoPlayer.h"

using namespace std;


void helper() {
    cout << "Utilize:\n";
    cout << "1 - Para Pausar:\n";
    cout << "2 - Para Tocar:\n";
    cout << "3 - Para Parar:\n";
}

int main() {
    int op = 0;
    VideoPlayer player;

    cout << "BEM VINDO AO PLAYER DE VIDEOS\n";

    helper();
    while (op != 'X') {
        cin >> op;

        switch (op) {
            case 0:
                cout << "\n";
                break;
            case 1:
                player.Pausar();
                break;
            case 2:
                player.Tocar();
                break;
            case 3:
                player.Parar();
                break;
            default:
                cout << "Opção de estado ainda não implementada";
                helper();
                op = 0;
                break;

        }
    }

    return 0;
}

