#include <stdio.h>

struct temp {
    int a;
    float b;
    char c;
};

struct a {
    int a;
    char c;
};

struct b {
    float f;
    struct a sa;
};

int main() {

    // Initializing method 
    struct temp strct = {1, 1.2, 'a'};

    // Another initializing method 
    struct temp strct1;
    strct1.a = 1;
    strct1.b = 2.2;
    strct1.c = 's';

    // Structure inside structure
    struct b sb = {1.2, 10, 'c'};

    printf("%f, %d, %c", sb.f, sb.sa.a, sb.sa.c);

    return 0;

}