#include <stdio.h>
#include <stdbool.h> 

int main() {
	int i;
    int my_array[5] = {10, 3, 8, 5, 12};
    bool foundEven = false;

    printf("các so chan trong mang là:\n");                       
    for ( i = 0; i < 5; i++) {
        if (my_array[i] % 2 == 0) {
            printf("%d\n", my_array[i]);
            foundEven = true; 
        }
    }
    if (!foundEven) {
        printf("Mang khong chia so chan\n");
    }

    return 0;
}
