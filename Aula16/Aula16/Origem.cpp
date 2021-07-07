#include <iostream>
using namespace std;

int main() {
    int cont;
    cont = 20;

    do {
        cout << "Canal Fessor Bruno - " << cont << "\n";
        if (cont == 10)
        {
            break;
        }

        //n++;
        cont++;
        //cont+=2;
    } while (cont < 20);


    cout << "\nRotina finalizada\n";

    system("pause");
    return 0;
}