#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    int min=100000;
    for(int j=0;j<n;j++){
        if(abs(a[j])<min){
            min=abs(a[j]);
        }
    }
    if(min==0){
        printf("0\n");
    }
    else{
        printf("%d\n",min);
    }

    return 0;
}