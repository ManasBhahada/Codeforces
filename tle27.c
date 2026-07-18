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
        int count1=0;
        for(int l=0;l<n;l++){
            if(a[l]==2){
                count++;
            }
        }
        if(count%2!=0){
            printf("-1\n");
        }
        else if(count%2==0 && count!=0){
            for(int k=0;k<n;k++){
                if(a[k]==2){
                    count1++;
                    if(count1==count/2){
                        printf("%d\n",k+1);
                        break;
                    }
                }
            }
        }
        else if(count==0){
            printf("1\n");
        }
    }
    return 0;
}