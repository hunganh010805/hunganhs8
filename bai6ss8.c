#include <stdio.h>
int main() {
    int n;
    printf("Nhap kich thuoc ma tran vuong n: ");
    scanf("%d", &n);
    int matran[n][n];
    int sum = 0;
    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("matran[%d][%d] = ", i, j);
            scanf("%d", &matran[i][j]);
        }
    }
    printf("Cac phan tu tren duong cheo chinh la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", matran[i][i]);
        sum += matran[i][i];
    }
    printf("\nTong cua cac phan tu tren duong cheo chinh la: %d\n", sum);
    return 0;
}

