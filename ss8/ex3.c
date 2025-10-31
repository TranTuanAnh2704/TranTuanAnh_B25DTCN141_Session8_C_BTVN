#include <stdio.h>
int i;
int main(void) {
    int arr[5] = {1, 3, 5, 7, 9}; 
    int found = 0;

    for ( i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            if (found) printf(" ");
            printf("%d", arr[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("Mang khong chi so chan");
    }

    printf("\n");
    return 0;
}
