#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        
        // Estratégia: sempre que possível, colocar teleports entre amigos
        // para maximizar a distância mínima
        
        vector<long long> candidates;
        
        // Adicionar todas as posições dos amigos como candidatas
        for (long long pos : a) {
            candidates.push_back(pos);
        }
        
        // Adicionar posições entre amigos consecutivos
        for (int i = 1; i < n; i++) {
            long long mid = (a[i-1] + a[i]) / 2;
            candidates.push_back(mid);
            // Também adicionar posições próximas ao meio
            if (mid > 0) candidates.push_back(mid - 1);
            if (mid < x) candidates.push_back(mid + 1);
        }
        
        // Adicionar extremos
        candidates.push_back(0);
        candidates.push_back(x);
        
        // Remover duplicatas e ordenar
        sort(candidates.begin(), candidates.end());
        candidates.erase(unique(candidates.begin(), candidates.end()), candidates.end());
        
        // Para cada candidato, calcular a distância mínima
        vector<pair<long long, long long>> scores; // (score, position)
        
        for (long long candidate : candidates) {
            if (candidate < 0 || candidate > x) continue;
            
            long long min_dist = 1e18;
            for (long long pos : a) {
                min_dist = min(min_dist, abs(pos - candidate));
            }
            scores.push_back({min_dist, candidate});
        }
        
        // Ordenar por score (maior primeiro) e depois por posição
        sort(scores.begin(), scores.end(), [](auto& x, auto& y) {
            if (x.first != y.first) return x.first > y.first;
            return x.second < y.second;
        });
        
        // Pegar os k melhores
        vector<long long> result;
        for (int i = 0; i < min(k, (long long)scores.size()); i++) {
            result.push_back(scores[i].second);
        }
        
        // Se ainda precisar de mais, adicionar posições restantes
        sort(result.begin(), result.end());
        for (long long i = 0; i <= x && result.size() < k; i++) {
            if (!binary_search(result.begin(), result.end(), i)) {
                result.push_back(i);
            }
        }
        
        // Output
        for (int i = 0; i < result.size(); i++) {
            cout << result[i];
            if (i < result.size() - 1) cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}