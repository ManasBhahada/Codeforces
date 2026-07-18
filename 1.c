#include <stdio.h>
int main() {
    int t;
    long long n, w; 
    if (scanf("%d", &t) != 1) return 0;
    for(int i=0;i<t;i++){
        scanf("%lld %lld", &n, &w);
        long long count = n - (n / w);
        printf("%lld\n",count);
    }
    return 0;
}