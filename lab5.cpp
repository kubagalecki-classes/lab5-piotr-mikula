#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector< int > v(100, 42);
    cout << "Rozmiar wektora v = " << v.size() << endl;
    cout << "Pojemnosc wektora v = " << v.capacity() << endl;
    for (int i = 0; i < 15; i++)
        cout << v[i] << endl;
    cout << "\n";

    vector< int > x{100, 42};
    cout << "Rozmiar wektora x = " << v.size() << endl;
    cout << "Pojemnosc wektora x = " << v.capacity() << endl;
    for (int i = 0; i < 15; i++)
        cout << x[i] << endl;

    puts("\nOstatnia linijka kodu!");
}