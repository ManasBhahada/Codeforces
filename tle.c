#include<stdio.h>
int main(){
    int t,n,k;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&n,&k);
        int a[n];
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
    if(k==1 && n!=1){
        int inc=0;
        for(int l=0;l<n-1;l+=2){
            if(a[l]<=a[l+1]){
                inc=1;
            }
            else{
                inc=0;
            }
            
        }
        if(inc==1 || n==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    else if(k>1){
        printf("YES\n");
    }
    }
    return 0;
}