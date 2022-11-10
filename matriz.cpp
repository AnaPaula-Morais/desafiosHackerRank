#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int z = 0;
    cin >> z;
    int n[z];
    
    for (int i = 0; i < z; i++) {
        cin  >> n[i];
    }
    
    for (int i = z - 1; i >= 0; i--) {
        cout << n[i] << " ";
    }
}