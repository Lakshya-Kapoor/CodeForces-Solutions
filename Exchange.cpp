# include <iostream>
# include <cmath>
using namespace std;

int main(){
    int k;
    cin >> k;
    for(k; k > 0; k--){
        int n, a, b, quests;
        cin >> n >> a >> b;
        if (b >= a){
            cout << (int) ceil((n*1.0)/a) << endl;
        }
        else{
            cout << 1 << endl;
        }
    }
}