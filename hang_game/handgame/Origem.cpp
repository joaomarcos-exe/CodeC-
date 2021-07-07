#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
here:
    //variable
    char word[30], letter[1], secret[30];
    int size, i, chances, hits;
    bool hit = false;
    char answer;

    //statements
    chances = 6;
    size = 0;
    i = 0;
    hit = false;
    hits = 0;

    //beginning
    cout << "===HANGMAN GAME===\n\n";
    cout << ("RULES\n");
    cout << ("The first player choose a word and the second player need try discovery the word\n");
    cout << ("but the second player has 5 chances \n\n");
    cout << ("Write an word: ");
    cin >> word;
    system("cls");

    //processes 
    while (word[i] != '\0') //The \0 is enter's caracter and when the progam discover the \0 means that is the end of word
    {
        i++;// I need increment the indice for analise the next space
        size++;// and i need incrementar the size because if isen't \0 so there is a letter in this space
    }

    for (i = 0; i < 30; i++)
    {
        secret[i] = '-';
    }

    while ((chances > 0) && (hits < size))
    {
        cout << "Chances: " << chances << "\n";
        cout << "Secret word: ";
        for (i = 0; i < size; i++) {
            cout << secret[i];
        }
        cout << "\n\n Write a word: ";
        cin >> letter[0];
        for (i = 0; i < size; i++) {
            if (word[i] == letter[0]) {
                hit = true;
                secret[i] = word[i];
                hits++;
            }
        }   if (!hit) {
            chances--;
        }

        hit == false;
        system("cls");
    }

    if (hits == size)
    {
        cout << "you win\n";

    }
    else {
        cout << "you lose\n";
    }

    cout << "Do you want play again? (y) or (n)\n";
    cin >> answer;
    if (answer == 'y')
    {
        system("cls");
        goto here;
    }
    else {
        system("cls");
        cout << "Thanks for play :)\n";

    }


    system("pause");
    return 0;

}