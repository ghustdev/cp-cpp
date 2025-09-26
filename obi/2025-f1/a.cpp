#include <bits/stdc++.h>
using namespace std;

int main () {
    int e, s, l, d1, d2, d3;

    cin >> e >> s >> l;

    e - s < 0 ? d1 = -1*(e - s) : d1 = e - s;
    e - l < 0 ? d2 = -1*(e - l) : d2 = e - l;
    l - s < 0 ? d3 = -1*(l - s) : d3 = l - s;

    cout << (d1 + d2 + d3);
}