    #include <bits/stdc++.h>
using namespace std;

// --- STL ---
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
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

vector<vector<pll>> adj(MAXN); 

int n, m;
ll price;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        ll a, b, w;
        cin >> a >> b >> w;

        adj[a].push_back({b, w});
    }

    int ori = 1;

    // vector<array<ll,2>> dist(n + 1, {INF, INF});
    //     node, state -> guarda os valores para cada estado, 0 = não usou, 1 = usou;
    ll dist[n+1][2];
    dist[ori][0] = 0;

    //            weight, node, state
    using t = tuple<ll, int, int>;
    priority_queue<t, vector<t>, greater<t>> pq;
    pq.emplace(0, 1, 0);

    vector<bool> visited(n+1);

    while (!pq.empty())
    {
        auto [w, node, state] = pq.top(); 
        pq.pop();

        if (visited[node]) continue;
        visited[node] = true;

        for (auto [v, p] : adj[node])
        {
            if (w + p < dist[v][state])
            {
                dist[v][state] = w + p;
                pq.emplace(w + p, v, state);
            }
            if (state == 0) {
                ll p_cupom = w + (p/2);
                if (p_cupom < dist[v][1]) {
                    dist[v][1] = p_cupom;
                    pq.emplace(p_cupom, v, 1);
                }
            }
        }
    }

    cout << dist[n][1];

    return 0;
}