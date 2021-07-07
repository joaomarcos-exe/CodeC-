#include <iostream>

using namespace std;



int main() {
    int number_of_metter;
    int number_of_students;
    string board[number_of_students][number_of_metter];
    int i = 0;


    cout << "Record of notes\n";
    cout << "write the number of matter: ";
    cin >> number_of_metter;
    cout << "Write the number of students: ";
    cin >> number_of_students;
    system("cls");

    for (i < number_of_students; i++;)
    {
        cout << "written the note of " << i << ":";
    }

    system("pause");
    return 0;
}
