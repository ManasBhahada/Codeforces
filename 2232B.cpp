#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long d=100000000000000000;
        int n;
        cin >> n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        long long sum=0;
        for(int j=0;j<n;j++){
            int res;
            sum=sum+arr[j];
            res=sum/(j+1);
        if(res<d){
            d=res;
        }
            cout << d <<" ";      
    }
        cout << endl;
}
    return 0;
}