#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector< int > v;
    cout << "Rozmiar wektora v = " << v.size() << endl;
    cout << "Pojemnosc wektora v = " << v.capacity() << endl;

    cout << "\nDodawanie elementow do wektora\n";
    for (int i = 0; i < 10; i++) {
        v.push_back(2 * i);
        cout << "Rozmiar: " << v.size() << " Pojemnosc: " << v.capacity() << endl;
    }

    puts("\nOstatnia linijka kodu!");
}