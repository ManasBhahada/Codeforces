#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int res;
    if(k>n/2){
        if(n%2==0){
        res=(k-n/2)*2;
        }
        else{
            res=(k-1-n/2)*2;
        }
    }
    else{
        res=2*k-1;
    }
    cout << res << endl;
    return 0;
}