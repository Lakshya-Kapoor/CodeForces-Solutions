# include <bits/stdc++.h>
using namespace std;

bool kalindrome(vector<int>& vec, int i, int j, int num){
    while (i < j){
        if (vec[i] != vec[j]){
            if (vec[i] == num)
                i++;
            else if (vec[j] == num)
                j--;
            else
                return false;
        }
        else{
            i++;
            j--;
        }
    }
    return i >= j;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int i = 0, j = n - 1;
        while (i < j){
            if (a[i] != a[j]){
                if (kalindrome(a, i+1, j, a[i]) || kalindrome(a, i, j-1, a[j]))
                    cout << "YES";
                else
                    cout << "NO";
                break;
            }
            i++;
            j--;
        }
        if (i >= j)
            cout << "YES";
        cout << endl;
    }
}
