#include <stdio.h>

int main() {
	int i;
    int my_array[5] = {15, 2, 99, 4, 38};
    int max_val = my_array[0];
    int min_val = my_array[0];
    for ( i = 1; i < 5; i++) {
        if (my_array[i] > max_val) {
            max_val = my_array[i];
        }
        if (my_array[i] < min_val) {
            min_val = my_array[i];
        }
    }

    printf("Phan tu lon nhat la: %d\n", max_val);
    printf("Phan tu nho nhat la: %d\n", min_val);

    return 0;
}
