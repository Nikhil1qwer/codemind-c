#include <stdio.h>

int main() {
    int d, c;
    scanf("%d %d", &d, &c);

    int a1, a2, a3;
    scanf("%d %d %d", &a1, &a2, &a3);

    int b1, b2, b3;
    scanf("%d %d %d", &b1, &b2, &b3);
    
    int day1 = a1 + a2 + a3;
    int day2 = b1 + b2 + b3;

    int totalWithoutCoupon = day1 + day2 + (2 * d);
    int totalWithCoupon = 0;

    if (day1 >= 150 && day2 >= 150) {
        totalWithCoupon = day1 + day2 + c;
    } else if (day1 >= 150 && day2 < 150) {
        totalWithCoupon = (day1 + c) + (day2 + d);
    } else if (day1 < 150 && day2 >= 150) {
        totalWithCoupon = (day1 + d) + (day2 + c);
    } else {
        totalWithCoupon = totalWithoutCoupon;
    }

    if (totalWithCoupon < totalWithoutCoupon) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
