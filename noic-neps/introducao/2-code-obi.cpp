#include <bits/stdc++.h>

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector<int> aux(3);

    int t=3;
    while (t--) 
        aux[t] = -1;

    vector<int> v(n);
    int i = 0;
    while (n--) {
        cin >> v[n];

        if (aux[i] == -1 && v[n] == 1)
            aux[i] = 1;
        else if (aux[i] == -1 && v[n] == 1)
    }

    return 0;
}