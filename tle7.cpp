#include <iostream>
#include<string.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin >> n >> m;
        string x,y;
        cin >> x >> y;
        int count=0;
        int result=-1;
        while((int)x.size() < 2*(n+m)){
            if(x.find(y)!=string::npos){
                result=count;
                break;
            }
            x=x+x;
            count++;
        }
        cout<< result <<endl;
    }
    return 0;
}