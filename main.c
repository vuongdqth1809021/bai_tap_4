#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool kiemTraTamGiac(int canhGocVuong1, int canhGocVuong2) {
    if (canhGocVuong1 <= 0 || canhGocVuong2 <= 0) {
        printf("Do dai cua canh tam giac phai lon hon 0\n");
        return false;
    }
    return true;
}
float tinhCanhHuyen(int canhGocVuong1, int canhGocVuong2) {
    return sqrtf(canhGocVuong1 * canhGocVuong1 + canhGocVuong2 * canhGocVuong2);
}
int main() {
    int canhGocVuong1, canhGocVuong2;
    printf("Hay nhap canh goc vuong 1\n");
    scanf("%d", &canhGocVuong1);
    printf("Hay nhap canh goc vuong 2\n");
    scanf("%d", &canhGocVuong2);
    if (kiemTraTamGiac(canhGocVuong1, canhGocVuong2)) {
        printf("Do dai canh huyen la %.3f", tinhCanhHuyen(canhGocVuong1, canhGocVuong2));
    }
    return 0;
}