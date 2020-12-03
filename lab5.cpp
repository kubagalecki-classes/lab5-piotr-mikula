#include "Human.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector< Human > people;
    string          imie;
    unsigned int    wiek;
    bool            ld;
    bool            lk;
    for (int i = 0; i < 3; i++) {
        cout << "Podaj imie:\t";
        cin >> imie;
        if (imie == "skasuj") {
            people.pop_back();
            i--;
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
        people.push_back(temp);
    }

    cout << "Wektor\n";
    cout << "rozmiar: " << people.size() << ", pojemnosc: " << people.capacity() << endl;

    cout << "\nMOI LUDZIE TO\n";
    for (unsigned int i = 0; i < people.size(); i++) {
        cout << people[i].getName() << " " << people[i].getAge() << " " << people[i].isMonster()
             << endl;
    }

    puts("\nOstatnia linijka kodu!");
}