#include <stdio.h>
int main() {
    int n,i;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];
    for ( i = 0; i < n; i++) {
        while (1) { 
            printf("Nhap a[%d] = ", i);
            scanf("%d", &a[i]);

            if (a[i] % 2 != 0) {
                break;
            } else {
                printf("Gia tri vua nhap khong phai so le! Vui long nhap lai.\n");
            }
        }
    }
    printf("\nMang toan so le vua nhap la: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
