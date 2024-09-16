#include <bits/stdc++.h>
using namespace std;

#define FASTIO cin.tie(0); ios_base::sync_with_stdio(0);
#define MAX 1001

int N, M, K;
vector<vector<int>> S(MAX, vector<int>(MAX));
vector<vector<vector<int>>> Roop(MAX, vector<vector<int>>());
vector<int> visited(MAX, 0);

void Make_Roop(int idx) {
    fill(visited.begin(), visited.end(), 0);
    for(int i = 1; i <= N; i++) {
        if (visited[i]) continue;
        vector<int> route;
        int node = i;
        visited[node] = 1;
        route.push_back(node);
        while(S[idx][node] != i) {
            node = S[idx][node];
            visited[node] = 1;
            route.push_back(node);
        }
        Roop[idx].push_back(route);
    }
}

int main() {
    FASTIO;
    cin >> N >> M >> K;
    for(int i = 1; i <= M; i++) {
        for(int j = 1; j <= N; j++) {
            cin >> S[i][j];
        }
    }
    
    for(int i = 1; i <= M; i++) {
        Make_Roop(i);
    }
    
    vector<int> ans(N + 1);
    vector<int> tmp(N + 1, 0);
    for(int i = 1; i <= N; i++) {
        ans[i] = i;
    }
    for(int i = 1; i <= K; i++) {
        int X, Y;
        cin >> X >> Y;
        for(int j = 0; j < Roop[X].size(); j++) {
            vector<int>& roop = Roop[X][j];
            int cnt = Y % roop.size();
            for(int k = 0; k < roop.size(); k++) {
                int idx = (k + cnt) % roop.size();
                tmp[roop[idx]] = ans[roop[k]];
            }
        }
        ans = tmp;
    }
    
    for(int i = 1; i <= N; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
    
    return 0;
}







