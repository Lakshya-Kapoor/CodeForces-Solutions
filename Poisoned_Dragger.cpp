# include <bits/stdc++.h>
using namespace std;

bool dmg(long long k, vector<long long>& attack, long long h){
    long long damage = k;
    long long length = attack.size() - 1;
    for (long long i = 0; i < length && damage < h ; i++){
        if (attack[i+1]-attack[i] < k)
            damage += attack[i+1]-attack[i];
        else
            damage += k;
    }
    return damage < h;
}
int main(){
    long long t;
    cin >> t;
    while (t--){
        long long n, h;
        cin >> n >> h;
        vector<long long> attack;
        for (long long i = 0; i < n; i++){
            long long a;
            cin >> a;
            attack.push_back(a);
        }
        long long low = 1, high = h;
        while (low < high){
            long long mid = low + (high - low) / 2;
            if (dmg(mid, attack, h))
                low = mid + 1;
            else
                high = mid;
        }
        cout << high << endl;
    }
}