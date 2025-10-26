#include <bits/stdc++.h>
using namespace std;

// --- STL ---
typedef long long ll;
// typedef pair<int, int>; pii;
// typedef vector<pair<int, int>> vpii;
// typedef vector<pair<long, long>> vpll;
// typedef unordered_map<ll, ll> u_mll;
// typedef unordered_map<int, int> u_mii;
// typedef unordered_set<ll> u_sll;
// typedef priority_queue<ll> qll;
// typedef priority_queue<int> qi;
// typedef priority_queue<int, vector<int>, greater<int>> qi_greater; // Min heap (min in top)
// typedef set<ll, greater<ll>> sll_greater; // Min heap (min in top)
// stack, queue, map, set, list, deque;

// --- Vars ---


// --- Functions ---


// --- Code ---
int main () 
{
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    
    int t; cin >> t;

    while (t--) {
        ll y, x, max, min; cin >> y >> x;

        if (x > y) {
            max = x;
            min = y;
        } else {
            max = y;
            min = x;
        }

        ll diag_max = max*max - (max - 1);

        ll value = 0;
        if (min == y && max%2==0) 
            value = diag_max - (max - min);
        if (min == x && max%2==0) 
            value = diag_max + (max - min);
        if (min == y && max%2!=0) 
            value = diag_max + (max - min);
        if (min == x && max%2!=0) 
            value = diag_max - (max - min);

        cout << value << "\n";
    }

    return 0;
}