#include <iostream>
using namespace std;

int main() {

    int cont;
    cont = 0;
    while (cont < 1000) {
        cont++;
        cout << cont << "\n";
        if (cont == 500)
        {
            break;
        }

    }
    system("pause");
    return 0;
}