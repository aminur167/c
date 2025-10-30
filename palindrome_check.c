#include <stdio.h>
#include <string.h>

// checks if a string is palindrome
int isPalindrome(char str[]) {
    int len = strlen(str);
    int i;
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i])
            return 0;
    }
    return 1;
}

int main() {
    char word[100];
    printf("Enter a word: ");
    scanf("%s", word);

    if (isPalindrome(word))
        printf("%s is a palindrome\n", word);
    else
        printf("%s is not a palindrome\n", word);

    return 0;
}
