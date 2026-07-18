#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        char s[n];
        for(int j=0;j<n;j++){
            scanf(" %c",&s[j]);
        }
        int count=0;
        int max=0;
        for(int k=0;k<n;k++){
            if(s[k]=='.' && s[k+1]=='.' && s[k+2]=='.' && k+1<n && k+2<n){
                max=1;
            }
            else{
                if(s[k]=='.'){
                    count++;
                }
            }
        }
        if(max==1){
            printf("2\n");
        }
        else{
        printf("%d\n",count);
        }
    }
    return 0;
}