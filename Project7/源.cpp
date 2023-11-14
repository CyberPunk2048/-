#include <stdio.h>

int main() {
    int n, i, j;

    printf("请输入菱形的边长 n（n<=13）：");
    scanf_s("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("*");
        }

        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}