#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        for(int j=0;j<n-1;j++){
            scanf("%d",&a[j]);
        }
        int sum=0;
        for(int k=0;k<n-1;k++){
            sum+=a[k];
        }
        int result;
        result=(-1)*sum;
        printf("%d\n",result);
    }
    return 0;
}