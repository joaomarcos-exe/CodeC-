#include <iostream>
using namespace std;

int main() {
    //n1++;     n1 = n1 + 1;
    //n1 +=5;   n1 = n1 +5
    //n1--;     n1 = n1 -10
    //n1++; ++n1;
    int n1 = 10;


    //cout<< n1++ << "\n\n"; (se utilizarmos o incremento desse jeito ele primeiro ira mostrar o numero e depois adicionara mais) pos incremento

    cout << ++n1 << "\n\n"; //(Assim ele ira adicionar mais 1 e mostrara o numero) pre incremento


    system("pause");
    return 0;
}