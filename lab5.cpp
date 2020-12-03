#include "Human.hpp"
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list< int > lista;
    lista.push_back(14);
    lista.push_front(3);
    lista.push_front(1);
    lista.push_front(5);
    lista.push_front(10);

    cout << "Lista:\n";
    cout << "Pierwszy element: " << lista.front() << ", Ostatni element: " << lista.back() << endl;

    cout << "\nDrukowanie elementow od pierwszego do ostatniego\n";
    for (const int& e : lista)
        cout << e << endl;

    puts("\nOstatnia linijka kodu!");
}