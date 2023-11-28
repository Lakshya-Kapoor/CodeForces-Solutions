# include <iostream>
# include <algorithm>
using namespace std;

int main(){
    int t, n, c;
    cin >> t;
    for(t; t > 0; t--){
        cin >> n >> c;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int start = 1, end = 4;
        while (start < end){
            int w = (start + end) / 2;
            int sum = 0;
            for(int i = 0; i < n; i++){
                sum += ((arr[i] + 2*w)*(arr[i] + 2*w));
                if (sum > c){
                    end = w - 1;
                    break;
                }
            }
            if (sum < c){
                start = w + 1;
            }
            else{
                cout << w << endl;
                break;
            }
        }
    }
}