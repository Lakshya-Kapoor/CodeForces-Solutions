# include <stdio.h>
# include <math.h>
void main(){
    int a, b, c, n;
    scanf("%d", &n);
    for(n; n > 0; n--){
        scanf("%d %d %d", &a, &b, &c);
        int temp = b - a;
        if(a>b)
            temp = a - b;
        double num = (temp/2.0)/c;
        int result;
        result = ceil(num);
        printf("%d\n",  result);
    }
}