#include <iostream>
using namespace std;

int main() {

    int valor;
    cout << "selecione uma corrente\n";
    cout << "[1]= Carro, [2]=Moto, [3]=Aviao, [4]Helicoptero\n";
    cin >> valor;

    switch (valor) {
    case 1:
    case 2:
        cout << "Transporte Terrestre\n";
        switch (valor) {
        case 1:
            cout << "Carro selecionado\n";
            break;
        case 2:
            cout << "Moto selecionada";
            break;
        }
        break;
    case 3:
    case 4:
        cout << "Transporte Aereo\n";
        switch (valor) {
        case 1:
            cout << "Aviao selecionado\n";
            break;
        case 2:
            cout << "Helicoptero selecionada";
            break;
        }

    default:
        cout << "Veiculo Selecionado Invalido";
    }
    cout << "\nPrograma finalizado\n";

    system("pause");
    return 0;
}