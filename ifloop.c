#include<stdio.h>

int main() {
    int a = 10, b = 20, c = 30, d = 40;

    if (a > b && a > c && a > d) {
        printf("The largest number is: %d\n", a);
    }

    if (b > a && b > c && b > d) {
        printf("The largest number is: %d\n", b);
    }

    if (c > a && c > b && c > d) {
        printf("The largest number is: %d\n", c);
    }

    if (d > a && d > b && d > c) {
        printf("The largest number is: %d\n", d);
    }

    return 0;
}
