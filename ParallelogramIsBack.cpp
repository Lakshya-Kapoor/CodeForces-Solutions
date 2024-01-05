# include <bits/stdc++.h>
using namespace std;

// There are always three possible points for the fourth position and this conincidentally lies on the edge of a triangle
// with the three points as midpoints of the sides. So we can simply get an O(1) solution to all the three edges.  
int main(){
    int ax, bx, cx, ay, by, cy;
    cin >> ax >> ay;
    cin >> bx >> by;
    cin >> cx >> cy;
    cout << 3 << endl;
    cout << ax + cx - bx << " " <<  ay + cy - by << endl;
    cout << ax - cx + bx << " " << ay - cy + by << endl;
    cout << -ax + cx + bx << " " << -ay + cy + by << endl;
}   