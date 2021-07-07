#include <iostream>
#include <cstdlib>
using namespace std;
int main() {

    int n1, n2, res;
    char opc;

inicio:

    system("cls");// comando do DOS para limpar os comandos escritos ateriormente no cmd

    cout << "Digite o valor da primeira nota: ";
    cin >> n1;
    cout << "Digite o valor da segunda nota: ";
    cin >> n2;

    res = n1 + n2;

    /*
        >= 60   Aprovado
        >= 40 e < 60 Recuperação
        < 40 reprovado
    */

    if (res >= 60)
    {
        cout << "\nAluno Aprovado\n";
    }
    else if (res >= 40) {
        cout << "\nAluno Recuperacao\n";
    }
    else {
        cout << "\nAluno reprovado\n";
    }
    cout << "\n Digitar outras notas[y/n]: ";
    cin >> opc;
    if (opc == 'y' or opc == 'Y')
    {
        goto inicio;
    }


    system("pause");
    return 0;
}