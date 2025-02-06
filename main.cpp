#include<iostream>
#include<string>
#include "libs/list.cpp"
#include "libs/customer.cpp"

using namespace std;

int main() {
    List<int> list;
    cout << "Inizio pushando roba " << endl;
    for (int i = 0; i < 10; i++) {
        list.pushBack(i);
    }
    cout << "Fine pushando roba " << endl;
    if (list.isEmpty()) {
        cout << "La lista è vuota, errore" << endl;
        return 0;
    }
    cout << "La lista non è vuota" << endl;
    cout << "Pusho roba frontalmente" << endl;
    for (int i = 0; i < 10; i++) {
        list.pushFront(i);
    }
    cout << "Fine pushando roba" << endl;

    cout << "Stampo tutti i numeri pari: " << endl;
    for (int i = 0; i < list.length(); i++) {
        if (list.at(i) % 2 == 0) {
            cout << list.at(i) << " ";
        }
    }
    cout << "Fine stampa numeri pari" << endl;

    cout << "Stampo tutti i numeri dispari: " << endl;
    for (int i = 0; i < list.length(); i++) {
        if (list.at(i) % 2 == 1) {
            cout << list.at(i) << " ";
        }
    }

    cout << endl << "Termine del test" << endl;
}
