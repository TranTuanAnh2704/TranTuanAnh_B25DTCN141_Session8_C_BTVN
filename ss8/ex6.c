#include <stdio.h>

int main() {
	int i;
    int my_array[5] = {1, 2, 3, 4, 5};
    printf("Mang ban dau: [");
    for ( i = 0; i < 5; i++) {
        printf("%d", my_array[i]);
        if (i < 4) {
            printf(", ");
        }
    }
    printf("]\n");
    for ( i = 0; i < 5; i++) {
        if (my_array[i] % 2 == 0) {
            my_array[i] = my_array[i] + 3;
        } else {
            my_array[i] = my_array[i] + 2;
        }
    }
    printf("Mang sau khi thay doi: [");
    for ( i = 0; i < 5; i++) {
        printf("%d", my_array[i]);
        if (i < 4) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
