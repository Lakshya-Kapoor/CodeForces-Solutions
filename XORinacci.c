#include <stdio.h>

int main() {
int t, a, b, n, c;
scanf("%d", &t);
for (t; t > 0; t--){
    scanf("%d %d %d", &a, &b, &n);
    if (n == 0) {
        printf("%d\n", a);
    } 
    else if (n == 1) {
        printf("%d\n", b);
    } 
    else {
        int i;
        for (i = 2; i <= n; i++) {
            c = a ^ b;
            a = b;
            b = c;
        }
        printf("%d\n", c);
    }
  }
  return 0;
}