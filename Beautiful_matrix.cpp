# include <iostream>
# include <cmath>
using namespace std;

int main(){
    int row, col, n;
    for(int i = 1; i < 6; i++){
        int found = 0;
        for(int j = 1; j < 6; j++){
            cin >> n;
            if (n){
                col = j;
                found = 1;
            }
        }
        if (found){
            row = i;
        }
    }
    int result = abs(row-3) + abs(col-3);
    cout << result << endl;
}