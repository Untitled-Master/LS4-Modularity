#include <stdio.h>
#include <string.h>

void miror(char word[100]){
    printf("The word is: %s\n", word);
    int len = strlen(word);
    int i = len;
    while(i >= 0){
        printf("%c", word[i]);
        i--;
    }
}

int main() {
    printf("Mirror!\n");
    char word[100];
    printf("Enter a word ya tawil el 3omr");
    scanf("%s", &word);
    miror(word);
    return 0;
}
