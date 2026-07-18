#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        int count=0;
        for(int k=0;k<n;k++){
            if(a[k]%2!=0){
                count++;
            }
        }
        if(count%2!=0){
            printf("NO\n");
        }
        else if(count%2==0){
            printf("YES\n");
        }
    }
    return 0;
}