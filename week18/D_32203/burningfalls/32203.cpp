#include <bits/stdc++.h>
using namespace std;

#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
#define ll long long
#define MAX 100001

int N, M;
vector<int> C(MAX), Parent(MAX);
vector<pair<ll, ll>> cnt(MAX, pair<ll, ll>());
ll ans = 0;

int Find_Parent(int node) {
    if (node == Parent[node]) {
        return node;
    }
    return Parent[node] = Find_Parent(Parent[node]);
}

bool is_Same(int n1, int n2) {
    n1 = Find_Parent(n1);
    n2 = Find_Parent(n2);
    return n1 == n2;
}

void Union(int n1, int n2) {
    n1 = Find_Parent(n1);
    n2 = Find_Parent(n2);
    ans += cnt[n1].first * cnt[n2].second;
    ans += cnt[n1].second * cnt[n2].first;
    
    int start = max(n1, n2);
    int end = min(n1, n2);
    Parent[start] = end;
    cnt[end].first += cnt[start].first;
    cnt[end].second += cnt[start].second;
}

int main() {
    FASTIO;
    cin >> N >> M;
    for(int i = 1; i <= N; i++) {
        cin >> C[i];
        if (C[i] % 2 == 1) {
            cnt[i] = {1, 0};
        } else if (C[i] % 2 == 0) {
            cnt[i] = {0, 1};
        }
    }
    for(int i = 1; i <= N; i++) {
        Parent[i] = i;
    }
    
    for(int i = 1; i <= M; i++) {
        int a, b;
        cin >> a >> b;
        if (!is_Same(a, b)) {
            Union(a, b);
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}



