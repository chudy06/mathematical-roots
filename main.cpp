#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int main()
{
    float liczba, stopien;
    cout << "Wprowadz liczbe: ";
    cin >> liczba;
    cout << "Wprowadz stopien pierwiastka: ";
    cin >> stopien;
    cout << pow(liczba, 1/stopien);
    return 0;
}
