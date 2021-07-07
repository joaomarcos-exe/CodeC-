#include <iostream>
using namespace std;

int main() {
    /*
    int tam=5;
    int vetor[tam];
    outro jeito que eu poderia fazer:
    int vetor[5]=(10,20,30,40,50);
    nesse exemplo eu ja coloquei os valores dos vetores
    */
    int vetor[7];
    int i;

    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;
    vetor[5] = 60;
    vetor[6] = 70;

    for (i = 0; i < sizeof(vetor) / 4; i++) //para não precisarmos nos preocupar em mudar o valor dos vetores podemos usar o sizefo so que devemos tomar cuidado pois ele conta o tamanho de bites, e por ser um int tem o tamanho de 4 bit então devemos dividilo por 4 igual eu fiz mas tambem poderiamos declarar uma variavel e dentro da declaração do tamanho do vetor poderiamos colocar elae no for substituir o do meio pela variavel tam.
    {
        cout << vetor[i] << "\n";
    }



    system("pause");
    return 0;
}