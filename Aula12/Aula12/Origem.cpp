#include <iostream>
using namespace std;

int main() {

    //(express�o) ? valor1 : valor2;
//? Se   : caso contrario
    int n1, n2, nota;
    string res;

    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;

    nota = n1 + n2;

    // nota >=60 Aprovado
    // nota < 60 Reprovado

//(nota >= 60) ? res ="Aprovado" : res="Reprovado";
    res = (nota >= 60) ? "Aprovado" : "Reprovado";

    cout << "\nO aluno foi " << res << "\n";

    system("pause");
    return 0;
}