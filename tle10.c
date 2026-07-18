#include<stdio.h>
#define min(a, b) ((a) < (b) ? (a) : (b))
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        char a[10][10];
        int point=0;
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
                scanf(" %c",&a[j][k]);
        if (a[j][k] == 'X') {
                    int ring = min(min(j, 9 - j),min(k, 9 - k))+1;
                    point += ring;
                }
            }
        }
        printf("%d\n",point);
    }
    return 0;
}