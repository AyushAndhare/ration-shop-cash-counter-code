#include <iostream>

using namespace std;

//This code can be used in ration shops

int main ()
{
    string resource;
    double amount;

    cout << "Enter resource :";
    cin >> resource;

    cout << "Enter amount:";
    cin >> amount;

    if (resource == "rice") {
        cout << (amount * 15) << endl;
    }


    if (resource == "wheat") {
        cout << (amount * 7.50) << endl;
    }

    if (resource == "bajra") {
        cout << (amount * 65) << endl;
    }

    if (resource == "jowar") {
        cout << (amount * 23) << endl;
    }

    if (resource == "sugar") {
        cout << (amount * 13.50) << endl;
    }

    if (resource == "kerosene") {
        cout << (amount * 14.20) << endl;
    }

    if (resource == "toor_dal") {
        cout << (amount * 30) << endl;
    }

    if (resource == "urid_dal") {
        cout << (amount * 30) << endl;
    }

    if (resource == "oil") {
        cout << (amount * 25) << endl;
    }
         return 0;
}
