#include <stdio.h>
int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int n = 5;
    printf("Cac phan tu cua mang tu cuoi ve dau:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
