# include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, px = 0, nx = 0, py = 0, ny = 0;
        cin >> n;
        for (int i = 0; i < n; i++){
            int x, y;
            cin >> x >> y;
            if (x == 0){
                if (y >= 0 && y >= py)
                    py = y;
                else if (y < 0 && y < ny)
                    ny = y;
            }
            else{
                if (x >= 0 && x >= px)
                    px = x;
                else if (x < 0 && x < nx)
                    nx = x;
            }
        }
        cout << 2*(abs(ny) + abs(nx) + px + py) << endl;

    }
}