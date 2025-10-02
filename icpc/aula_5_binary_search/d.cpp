#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> v_i;
// typedef vector<ll> v_ll;
// typedef vector<pair<int, int>> v_pair_i;
// typedef vector<pair<long, long>> v_pair_ll;
// typedef unordered_map<ll, ll> u_map_ll;
typedef map<ll, ll> map_ll;
// typedef unordered_map<int, int> u_map_ii;
// typedef unordered_map<string, bool> u_map_str;
// typedef unordered_map<char, ll> u_map_c;
// typedef set<ll> set_ll;
typedef unordered_set<ll> u_set_ll;
// typedef queue<ll> q_ll;
// typedef set<ll, greater<ll>> set__ll_greater;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    v_i vect(n);

    for (int i = 0; i < n; i++)
        cin >> vect[i];

    map_ll window;
    ll r, l = 0;
    ll cont = 0;
    for (r = 0; r < n; r++)
    {
        window[vect[r]]++;
        while (window[vect[r]] > 1)
        {
            window[vect[l]]--;
            l++;
        }
        cont += (r - l + 1);
    }

    cout << cont;

    return 0;
}