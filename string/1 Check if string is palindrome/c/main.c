#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int isPalindrome(char *str) {

    int length = strlen(str);

    int l = 0;
    int r = strlen(str) - 1;

    while (r > l) {
        if (str[l++] != str[r--]) {
            printf("String is not palindrome.");
            return 0;
        }
    }
    printf("String is palindrome.");
    return 1;

}

int main() {

    char *string = "sumeet";

    isPalindrome(string);
    // if (isPalindrome(string)) {
    //     printf("String is palindrome.");
    // } else {
    //     printf("String is not palindrome.");
    // }

    return 0;

}