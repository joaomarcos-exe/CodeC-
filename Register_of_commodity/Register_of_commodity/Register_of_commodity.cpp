#include <iostream>
#include <string>

using namespace std;


int main()
{
    int controller = 0;
    int controller2 = 0;
    int quant;
    string pass;
    string logi;
    string commodity[20][20];
    //login boss
    string adm = "joao";
    string pass_adm = "102030";

    //login employed
    cout << "=-=Login=-=";

    cout << "Login: \n";
    cin >> logi;
    cout << "Password: \n";
    cin >> pass;
    system("cls");


    cout << "\n =-= Register of Commodity =-=\n\n";
    
    do {
    cout << "how many products do you want to register? (but you have a limit of 20 objects)\n";
    cin >> quant;
    } while (quant < 0 || quant>20 );
    system("cls");
    

    while (controller < quant) {
        controller2 =0;
        while (controller2 < 3) {
            cout << "\nWhat is the name of object: ";
            cin >> commodity[controller][controller2];
            ++controller2;
            cout << "\n";

            cout << "\nWhat is the quantity: ";
            cin >> commodity[controller][controller2];
            ++controller2;

            cout << "\nWhats is the price: ";
            cin >> commodity[controller][controller2];
            ++controller2;
        }
        ++controller;
        system("cls");
    }
    controller = 0;

    while (controller < quant) {
        controller2 = 0;
        while (controller2 <3) {
            cout << "\nName of object: " << commodity[controller][controller2];
            ++controller2;

            cout << "\nQuantity: " << commodity[controller][controller2];
            ++controller2;

            cout << "\nPrice: USD\n" << commodity[controller][controller2];
            ++controller2;

        }
        ++controller;
    }

    return 0;
}
