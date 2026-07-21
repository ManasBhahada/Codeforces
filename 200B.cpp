#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
        
    }
    float sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    float res=(sum/n);
    cout << res << endl;

    return 0;
}