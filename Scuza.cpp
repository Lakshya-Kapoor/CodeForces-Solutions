# include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int maxHeight(vector<ll>& arr, ll k){
    int low = 0, high = arr.size() - 1;
    if (k >= arr[high])
        return high;
    while (low < high){
        int mid = (high + low) / 2;
        if (arr[mid] <= k)
            low = mid + 1;
        else
            high = mid;
    } 
    return low-1;
}
// It's clear that this problem can be solved linearly by searching for the first increment in step height that is greater 
// than the leg height. 
// To optimise we must use binary search.
// But we can't straight away use BS as we don't have the step values sorted so we use a prefixSum array to be able to access
// the height that can be reached with leg height k in O(1) time and we use the prefixMax array to figure out the first step 
// increment greater than leg height and also its index.
int main(){
    ll t;
    cin >> t;
    while (t--){
        ll n, q, k, max;
        cin >> n >> q;
        vector<ll> steps (n), prefixSum (n), prefixMax (n), queries (q);
        for (ll i = 0; i < n; i++){
            cin >> steps[i];
            if (i == 0){
                prefixMax[i] = prefixSum[i] = steps[i];
                max = prefixMax[i];
            }
            else{
                prefixSum[i] = prefixSum[i-1]+steps[i];
                if (steps[i] > max){
                    max = steps[i];
                }
                prefixMax[i] = max;
            }
        }
        for (ll i = 0; i < q; i++)
            cin >> queries[i];
        for (int i = 0; i < q; i++){
            int idx = maxHeight(prefixMax, queries[i]);
            if (idx == -1)
                cout << 0 << " ";
            else
                cout << prefixSum[idx] << " ";
        }
        cout << endl;
         
    }
}