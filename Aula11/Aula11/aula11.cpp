#include <iostream>
using namespace std;

int main() {
    int num;

    /*
    1 2 3 4 5 6 7 8 9 10
    >4 e <7
    <3 ou >8
    !
    */

    /*    if ((num >10 && num < 14) || (num >3 && num <6) || (num >16 && num < 19))
    {
        cout << "\n\nValor aceito\n";
    }else{
        cout << "\n\nNao Aceito\n";
    }*/
    if (!num)
    {
        cout << "\n\nVou ao clube\n";
    }
    else {
        cout << "\n\nVou ao cinema\n";
    }
    system("pause");
    return 0;
}