// Aula31.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> aula;/*If i put the number 50 for exemple list<int> aula(50); the code will interpret that have 50 posicions but if put 
    aula(5,50) the would interpretet that have 5 position with the 50 inside that positions */
    int tam;
    list<int>::iterator it; //O iterator e usado para eu adicionar um numero em qualquer posição da lista 1

    /*tam = 10;
    for (int i = 0; i < tam; i++) {
        aula.push_back(i);
    }
    */
    //it = aula.begin(); 2
    //advance(it, 5); 3

    aula.sort(); // sort colocar em orgem a lista
    aula.reverse();// reverse inverte a ordem 
    //aula.insert(it, 0); 4

    cout << "Size of list: " << aula.size() << "\n\n";

    tam = aula.size();
    for (int i = 0; i < tam; i++) {
        cout << aula.front() << "\n";
        aula.pop_front();
    }

    return 0;
}


