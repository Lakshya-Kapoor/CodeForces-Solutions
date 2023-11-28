# include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, i = 0, count = 0;
    cin >> n;
    int a[n];
    for(i; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+sizeof(a)/sizeof(a[0]));
    i = 0;
    while (i < n){
        if (a[i++] >= count + 1){
            count += 1;
        }
    }
    cout << count << endl;
}