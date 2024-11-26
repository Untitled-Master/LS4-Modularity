#include <stdio.h>
#include <string.h>
void palindrome(char a[100]){
    int sum = 0, j = 0, i = strlen(a), sumcheck;
    sumcheck = i;
    i = i - 1;
    while(i > -1){
        if(a[i] == a[j]){
            sum = sum +1;
        }
        i--;
        j++;
    }
    if(sum == sumcheck){
        printf("palindrome");
    }else{
        printf("[X] not palindrome");
    }
}

int main(){
    char a[100];
    printf("Enter a word: ");
    scanf("%s", a);
    palindrome(a);
    return 0;
}

