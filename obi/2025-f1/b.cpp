#include <bits/stdc++.h>
using namespace std;

int main () {
    int min_l, max_l, cap, dose; cin >> min_l >> max_l >> cap >> dose;
    bool valid;

    while (cap >= 0) {
        if (cap >= min_l && cap <= max_l){
            valid = true;
            cout << "S" << "\n";
            break;
        }
        cap -= dose;
    }

    if (!valid) cout << "N" << "\n";
}