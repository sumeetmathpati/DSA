#include <stdio.h>
#include <string.h>


int isAnagram(char *str0, char *str1) {

    int i;

    // Assume that string is at most of size 128 characters
    int count[256] = {0};

    for (i = 0; str0[i] && str1[i]; i++) {
        count[str0[i]]++;
        count[str1[i]]--;
    }

    // If length is not same, then strings are not anagrams.
    if (str0[i] || str1[i]) {
        return 0;
    }

    for (i = 0; i < 256; i++) {
        if (count[i]) {
            return 0;
        }
    }

    return 1;

}

int main() {

    char *str0 = "sumeet";
    char *str1 = "sumseet";

    if (isAnagram(str0, str1)) {
        printf("Strings are anagrams.");
    } else {
        printf("Strings are not anagrams.");
    }


    return 0;

}