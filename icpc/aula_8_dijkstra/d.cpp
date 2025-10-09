#include <bits/stdc++.h>
using namespace std;

// --- STL ---
typedef long long ll;
// typedef pair<int, int> pii;
// typedef pair<ll, ll> pll;
// typedef vector<pair<int, int>> v_pii;
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
const ll INF = 1e16;
const int MAXN = 1e5 + 10;
const int MAXM = 2 * 1e5 + 10;

vector<int> adj[MAXN];
vector<int> dist_s;
vector<int> dist_e;
int n, m, max_e;

queue<int> q;
void bfs(int s) {
    int u = q.front(); q.pop();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for (int i = 0; i < n-1; i++)
    {
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dist_e.assign(n+1, -1);
    dist_s.assign(n+1, -1);


    int origem = 1;
    q.push(origem);
    bfs(origem);



    return 0;
}
