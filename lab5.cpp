#include "Human.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    Human h1, h2, h3;

    vector< Human > people(3);
    string          imie;
    unsigned int    wiek;
    bool            ld;
    bool            lk;

    vector< Human >::iterator it = people.begin();
    // vector< Human >::iterator end = people.end();

    for (it = people.begin(); it != people.end(); ++it) {
        cout << "Podaj imie:\t";
        cin >> imie;
        if (imie == "skasuj") {
            people.pop_back();
            it--;
            cout << "Podaj imie:\t";
            cin >> imie;
        }
        cout << "Podaj wiek:\t";
        cin >> wiek;
        cout << "Czy lubi pjeski (1 - tak, 0 - nie)\t";
        cin >> ld;
        cout << "Czy lubi koty (1 - tak, 0 - nie)\t";
        cin >> lk;
        cout << "\n";

        Human temp{imie, wiek, ld, lk};
        *it = temp;
    }

    cout << "Wektor\n";
    cout << "rozmiar: " << people.size() << ", pojemnosc: " << people.capacity() << endl;

    cout << "\nMOI LUDZIE TO\n";
    for (it = people.begin(); it != people.end(); ++it) {
        Human temp{};
        temp = *it;
        cout << temp.getName() << ", " << temp.getAge() << " lat, ";
        if (temp.isMonster() == 1)
            cout << "POTWOR\n";
        if (temp.isMonster() == 0)
            cout << "KOKS\n";
    }

    puts("\nOstatnia linijka kodu!");
}