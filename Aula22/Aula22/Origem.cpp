#include <iostream>

using namespace std;

//Colocar a função neste lugar se chama prototipar a função
void texto();
void soma(int n1, int n2);
int soma2(int n3, int n4);
void tr(string tra[4]);


int main() {
    int res;
    string transp[4] = { "carro", "moto", "barco", "aviao" };
    texto();//Form de chamar a função
    soma(15, 5);//Esses numeros são os valores determinados da variavel
    res = soma2(175, 25);

    cout << "O valor de res: " << res << "\n";//No lugar do res eu tambem poderia colocar soma2(175, 25);

    tr(transp);

    system("pause");
    return 0;
}

void texto() {
    cout << "Canal Fessor Bruno\n";
}

void soma(int n1, int n2) {
    cout << "Soma dos valores: " << n1 + n2 << "\n";
}

int soma2(int n3, int n4) {
    return n3 + n4;
}

void tr(string tra[4]) {
    for (int i = 0; i < 4; i++) {
        cout << tra[i] << "\n";
    }

}