#include <bits/stdc++.h>
using namespace std;

// --- STL ---
typedef long long ll;
// typedef pair<int, int>; pi;
// typedef vector<pair<int, int>> v_pi;
// typedef vector<pair<long, long>> v_pll;
// typedef unordered_map<ll, ll> u_mll;
// typedef unordered_map<int, int> u_mii;
// typedef unordered_set<ll> u_sll;
// typedef priority_queue<ll> qll;
// typedef priority_queue<int> qi;
// typedef priority_queue<int, vector<int>, greater<int>> qi_greater; // Min heap (min in top)
// typedef set<ll, greater<ll>> sll_greater; // Min heap (min in top)
// stack, queue, map, set, list, deque;

// --- Functions ---


// --- Code ---
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> ones_position;
        for (int i = 0; i < n; i++)
            if (s[i] == '1')
                ones_position.push_back(i);

        int out = 0;
        int last_pos_protected = -1;
        int i = 0;

        while (i < (int) ones_position.size()) {
            if (last_pos_protected != -1 && ones_position[i] <= last_pos_protected + k - 1) {
                i++;
                continue;
            }

            int j = i;
            while (j + 1 < (int) ones_position.size() && ones_position[j + 1] <= ones_position[i] + k - 1)
                j++;

            last_pos_protected = ones_position[j];
            out++;
            i = j + 1;
        }

        cout << out << "\n";
    }

    return 0;
}