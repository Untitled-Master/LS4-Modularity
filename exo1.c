#include <stdio.h>

int integerpart(double a){
    a = (int)a;
    return a;
}
double fractionalpart(double a){
    a = a - integerpart(a);
    return a;
}
int main() {
    double a, c;
    int b;
    printf("Enter a number: ");
    if(a < 0){
        printf("Enter a positive number");
    }
    else{
        scanf("%lf", &a);
        b = integerpart(a);
        c = fractionalpart(a);
        printf("[+] Integer part: %d\n", b);
        printf("[+] Fractional part:%lf", c);
    }
    return 0;
}
