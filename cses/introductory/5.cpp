#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> v_i;
typedef vector<ll> v_ll;
// typedef map<ll, ll> map_ll;
// typedef set<ll> set_ll;
// typedef unordered_map<ll, ll> u_map_ll;
// typedef vector<ll> v_ll;
// typedef unordered_set<ll> u_set_ll;
// typedef queue<ll> q_ll;
// typedef vector<pair<int, int>> v_pair_i;
// typedef vector<pair<long, long>> v_pair_ll;
// typedef unordered_map<int, int> u_map_ii;
// typedef unordered_map<string, bool> u_map_str;
// typedef unordered_map<char, ll> u_map_c;
// typedef set<ll, greater<ll>> set__ll_greater;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin >> n;

    ll number = n;

    int it = n;
    while (it--) {
        if (n == 2 || n == 3) {
            cout << "NO SOLUTION" << "\n";
            break;
        }
        if (n == 4) {
            cout << "3 1 4 2";
            break;
        }

        cout << number << " ";

        if (n % 2 != 0 && number == 1) {
            number = n - 1;
            continue;
        }
        
        number -= 2;

        if (n % 2 == 0 && number == 0)
            number = n - 1;
    }

    return 0;
}