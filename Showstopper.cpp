# include <bits/stdc++.h>
# define readVec(vec, n) for (int i = 0; i < n; i++) cin >> vec[i];

using namespace std;

void swap(int &a, int&b){
    int temp = a;
    a = b;
    b = temp;
}
// The idea is very simple : Continuously compare values at ith index of a and b and store the smaller of the two in a.
// Since a contains all the smallest values and b contains all the greatest values. We can directly check if the max of these
// arrays lies at the last position or not
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a (n), b (n);
        readVec(a, n);
        readVec(b, n);
        for (int i = 0; i < n; i++){
            if (a[i] > b[i])
                swap(a[i], b[i]);
        }
        if ((a[n-1] == *max_element(a.begin(), a.end())) && (b[n-1] == *max_element(b.begin(), b.end())))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}