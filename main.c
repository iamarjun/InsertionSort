#include <stdio.h>
#include "insertionsortrecursion.h"

int main() {

    //printf("Hello, World!\n");

    int a[10], n;

    printf("enter size = ");
    scanf("%d", &n);

    printf("enter no. = ");

    for (int i = 0; i < n; ++i) {

        scanf("%d", &a[i]);

    }

    sort(a, 0, n);

    printf("sorted list = ");

    for (int i = 0; i < n; ++i) {

        printf("%d ", a[i]);

    }
    return 0;
}