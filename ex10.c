#include <stdio.h>
#include <stdbool.h> 
#include <math.h>    
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num == 2) {
        return true;
    }
    if (num % 2 == 0) {
        return false;
    }
     for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    
    return true; 
}

int main() {
    int n;
    printf("Nhap so phan tu mang: ");
    scanf("%d", &n);

    int my_array[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &my_array[i]);
    }
    printf("\nCac so nguyen tu trong mang là:\n");
    bool foundPrime = false; 

    for (int i = 0; i < n; i++) {
        if (isPrime(my_array[i])) {
            printf("%d\n", my_array[i]);
            foundPrime = true;
        }
    }
    if (!foundPrime) {
        printf("Khong co so nguyen tu nao trong mang\n");
    }

    return 0;
}
