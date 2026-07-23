#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        int k;
        if(((a+c)%2)==0){
        k=(a+c)/2;
        if(k%b==0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    }
    return 0;
}