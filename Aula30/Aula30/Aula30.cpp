// Aula30.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <queue>

using namespace std;


int main()
{
    queue <string> cards;

    cards.push("Jack of Heart");  // push adiciona elementeos 
    cards.push("Jack of Spades");
    cards.push("Jack of Diamond");
    cards.push("Jack of Clubss");

    cout << "Size of queue: " << cards.size() << "\n";
    cout << "First card: " << cards.front() << "\n";
    cout << "last card: " << cards.back() << "\n";
    
    while (!cards.empty()) {
        cout << "First card: " << cards.front() << "\n";
        cards.pop();

    }
    
}

/*codes that i can use on queue
*empty 
* push
* pop
* back
* front
*size 
*/
