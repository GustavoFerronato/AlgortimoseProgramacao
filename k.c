#include <stdio.h>

int main() {
    int a = 5;
    int *ptr=NULL;
    ptr = &a;
    printf("%d", *ptr);
    printf("\n%d", a);

    return 0;
}
