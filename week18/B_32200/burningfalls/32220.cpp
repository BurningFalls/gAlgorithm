#include <bits/stdc++.h>
using namespace std;

#define FASTIO cin.tie(0); ios_base::sync_with_stdio(0);
#define MOD 1000000007

int main() {
    FASTIO;
    int N, K;
    cin >> N >> K;
    vector<int> A(N + 1);
    for(int i = 1; i <= N; i++) {
        cin >> A[i];
    }
    
    vector<vector<int>> dp1(N + 1, vector<int>(K + 1, 0));
    vector<vector<int>> dp2(N + 1, vector<int>(K, 0));

    dp1[0][0] = 1;
    int sum = 1;
    for(int i = 1; i <= N; i++) {
        if (A[i] == 0) {
            dp1[i][0] = sum;
        } else if (A[i] == 1) {
            dp1[i][0] = 0;
        }
        sum = dp1[i][0];
        for(int j = 1; j <= K; j++) {
            dp1[i][j] = dp1[i - 1][j - 1];
            sum = (sum + dp1[i][j]) % MOD;
        }
    }
    
    int ans = sum;
    
    dp2[0][0] = 1;
    sum = 1;
    for(int i = 1; i <= N; i++) {
        if (A[i] == 0) {
            dp2[i][0] = sum;
        } else if (A[i] == 1) {
            dp2[i][0] = 0;
        }
        sum = dp2[i][0];
        for(int j = 1; j <= K - 1; j++) {
            dp2[i][j] = dp2[i - 1][j - 1];
            sum = (sum + dp2[i][j]) % MOD;
        }
    }
    
    ans = (ans - sum + MOD) % MOD;
    
    cout << ans << "\n";
    
    
    return 0;
}








