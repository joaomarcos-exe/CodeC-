#include <iostream>
#include <string.h>

using namespace std;


int main()
{
    int controller = 0;
    int controller2 = 0;
    int quant;
    char pass [20];
    char logi [20];
    int testPass;
    string commodity[20][20];
    int testLog;

    //login boss
    char adm [20] = "joao";
    char pass_adm [20] = "102030";

    //login employed
    cout << "\n=-=Login=-=\n";

    cout << "\nLogin: \n";
    cin >> logi;
    cout << "\nPassword: \n";
    cin >> pass;
    system("cls");
    testLog = strcmp(logi, adm);
    testPass = strcmp(pass_adm, pass);
    if (testLog == 0 && testPass == 0) {

        cout << "\n =-= Register of Commodity =-=\n\n";

        do {
            cout << "how many products do you want to register? (but you have a limit of 20 objects)\n";
            cin >> quant;
        } while (quant < 0 || quant>20);
        system("cls");


        while (controller < quant) {
            controller2 = 0;
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
            while (controller2 < 3) {
                cout << "\nName of object: " << commodity[controller][controller2];
                ++controller2;

                cout << "\nQuantity: " << commodity[controller][controller2];
                ++controller2;

                cout << "\nPrice: USD " << commodity[controller][controller2];
                ++controller2;

            }
            ++controller;
        }
    }
    else {
        cout << "Login failed";
    }

    return 0;
}
