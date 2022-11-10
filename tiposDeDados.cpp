#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int numero;
    long numero1;
    char caracter;
    float numero2;
    double numero3;
    
    cin >> numero >> numero1 >> caracter >> numero2 >> numero3;
    cout << numero << "\n" << numero1 << "\n" << caracter << "\n";
    
    cout << fixed << setprecision(3) << numero2 << "\n";
    cout << fixed << setprecision(9) << numero3 << "\n";

     
    return 0;
}