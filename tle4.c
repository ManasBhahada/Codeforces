#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        if(n%3==1 || n%3==2){
            printf("First\n");
        }
        else if(n%3==0){
            printf("Second\n");
        }
    }
    return 0;
}