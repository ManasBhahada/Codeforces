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
        int max=0;
        for(int l=0;l<n;l++){
            if(a[l]==k){
                max=1;
                break;
            }
            else{
                max=0;
            }
        }
        if(max==1){
            printf("YES\n");
        }
        else if(max==0){
            printf("NO\n");
        }

    }
    return 0;
}