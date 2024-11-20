#include <stdio.h>

int power(float a, int b){
    float c = a;
    while(b > 1){
        a = a * c;
        b--;
    }
    return a;
}

int main() {
    int n, i = 1;
    float x;
    double S = 1, plus, plus2;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter x: ");
    scanf("%f", &x);
    printf("S = 1  ");
    while(i <=n){
        plus = i * power(-1, i);
        plus2 = power(x, i) + i;
        S = S + (plus / plus2);
        printf("%lf/(%f+%d) ", plus, x, i);
        i++;
    }
    printf("= %lf \n", S);
    return 0;
}
