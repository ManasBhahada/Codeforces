#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%2!=0){
            cout << "NO" <<endl;
            for(int i=0;i<n;i++){
                 int x; 
                 cin>>x; 
                } 
            continue;
        }
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
        }
        int m = ((sum % 4) + 4) % 4;
        if(m==0){
            cout <<"YES"<<endl;
        }
        else{
            cout << "NO" <<endl;
        }
    }
    return 0;
}