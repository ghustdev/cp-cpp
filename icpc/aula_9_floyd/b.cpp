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
const int INF = 1e5 + 10;

vector<vector<int>> dist;
int n;

// --- Functions ---
void floyWarshall() {
    for (int k=1; k<=n; k++) {
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++)
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
        }
    }
}

// --- Code ---
int main () 
{
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );

    dist.assign(n+1, vector<int>(n+1, INF));

    return 0;
}