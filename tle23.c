#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(b>d){
            printf("-1\n");
        }
        else if(b==d){
            if(c>a){
                printf("-1\n");
            }
            else{
                printf("%d\n",a-c);
            }
        }
        else if(b<d){
                a=a+d-b;
                if(a<c){
                    printf("-1\n");
                }
                else{
                printf("%d\n",a-c+d-b);
                }
            }
        }
    return 0;
}