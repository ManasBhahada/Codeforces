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
    if(a[0]==1){
    printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
return 0;
}