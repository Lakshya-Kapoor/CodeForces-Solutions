# include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        vector<int> a (n), diff (n-1);
        cin >> a[0];
        for (int i = 1; i < n; i++){
            cin >> a[i];
            diff[i-1] = abs(a[i] - a[i-1]);
        }
        sort(diff.begin(), diff.end());
        int sum = 0;
        for (int i = 0; i < n - k; i++)
            sum += diff[i];
        cout << sum << endl;
    }
}