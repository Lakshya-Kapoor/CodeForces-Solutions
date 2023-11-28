# include <iostream>
using namespace std;

int main(){
    char s[20];
    cin >> s;
    int n = 0;
    while(s[n] != '\0'){
        n++;
    }
    int i = 0, j = n - 1;
    int count = 0;
    while (i < j){
        if (s[i++] != s[j--]){
            count++;
        }
        if (count > 1){
            cout << "NO"<<endl;
            break;
        }
    }
    if (count == 1){
        cout << "YES" << endl;
    }
    else if (count == 0){
        if (n % 2 == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
