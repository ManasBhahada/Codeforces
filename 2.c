#include<stdio.h>
int main(){
    int t,n,x,y;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&n,&x,&y);
        int a[n];
        for(int j=0;j<n;j++){
            scanf("%d",&a[n]);
        }
        for(int k=0;k<n;k++){
            int q=0;
            if(a[k]%x==0){
                q=a[k]/x;
                if((a[k+1]+q*y)%x==0){
                        
                    
                }
            }

        }
    }
    return 0;
}