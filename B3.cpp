#include <stdio.h>

int main() {
    int n;

    // Nhap so luong phan tu cua mang
    do {
        printf("Nhap so phan tu cua mang (0 < n <= 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    int arr[n];

    // Nhap cac phan tu cua mang
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu [%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Dao nguoc mang
    printf("Mang sau khi dao nguoc:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

