#include <bits/stdc++.h>
using namespace std;

#define FASTIO cin.tie(0); ios_base::sync_with_stdio(0);
#define MAX 1000000

int main() {
    FASTIO;
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    cout << N / 2 << "\n";
    for(int i = 0; i < N / 2; i++) {
        if (i == 0) {
            A[i] += MAX;
            A[N - i - 1] -= MAX;
        } else {
            int a = A[i - 1] - A[i];
            int b = A[N - i - 1] - A[N - i];
            A[i] += min({a, b, MAX});
            A[N - i - 1] -= min({a, b, MAX});
        }
        for(int j = 0; j < N; j++) {
            cout << A[j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}







