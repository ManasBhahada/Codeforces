#include<stdio.h>
int main(){
    int t,n,x;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&n,&x);
        int a[n+1];
        a[0]=0;
        a[n+1]=x;
        for(int j=1;j<n+1;j++){
            scanf("%d",&a[j]);
        }
        int min=0;
        for(int j=0;j<n+1;j++){
			if((a[j+1]-a[j])>min){
			min = (a[j+1]-a[j]);	 
			}
			if((2*(a[n+1]-a[n]))>min){
				min = (2*(a[n+1]-a[n]));
			}
        }
        printf("%d\n",min);
    }
    return 0;
}