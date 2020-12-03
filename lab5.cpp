#include "Human.hpp"
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list< int > lista;
    lista.push_back(14);
    cout << "Pierwszy element: " << lista.front() << " Ostatni element: " << lista.back() << endl;

    puts("\nOstatnia linijka kodu!");
}