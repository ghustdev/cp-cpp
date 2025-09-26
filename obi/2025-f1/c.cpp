#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, i, cont = 0, higher = 1; cin >> n;
    int vect[n];
    
    for (i = 0; i < n; i++)
        cin >> vect[i];
    
    for (i = n-1; i >= 0; i--)
        cout << vect[i] << "\n";
    
    for (i = n-1; i > 0; i--) {
        if (vect[i] > higher) higher == vect[i];
        if (vect[i-1] <= higher) cont++;
    }

    cout << cont;
}