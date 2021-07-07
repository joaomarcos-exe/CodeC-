#include <iostream>
using namespace std;


int main() {
    int x, y, z;

    for (int tmp = 0; tmp < 1000000000; tmp++);
    //esse loop escrito assim sem nenhum codigo seria mais usado para o sistem dar uma pausa ate ser executado a proxima linha de comando
    for (x = 0; x <= 10; x++) {

        cout << x << "\n";

    }

    system("pause");
    return 0;
}