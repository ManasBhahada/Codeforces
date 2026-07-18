#include <stdio.h>
#include <stdlib.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
    int a, b, xk, yk, xq, yq;
    scanf("%d %d %d %d %d %d", &a, &b, &xk, &yk, &xq, &yq);
    int arrx[] = {a, a, b, b, -a, -a, -b, -b};
    int arry[] = {b, -b, a, -a, -b, b, a, -a};
    int foundX[8], foundY[8], count = 0;
    for (int i = 0; i < 8; i++) {
    int x = xk + arrx[i];
    int y = yk + arry[i];
     int dx = abs(x - xq);
    int dy = abs(y - yq);
    if ((dx == a && dy == b) || (dx == b && dy == a)) {
        int already_counted = 0;
            for (int j = 0; j < count; j++) {
             if (foundX[j] == x && foundY[j] == y) {
              already_counted = 1;
                 }
                }
    if (already_counted == 0) {
    foundX[count] = x;
    foundY[count] = y;
        count++;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}