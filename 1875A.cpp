#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
    long long a,b,n;
    cin >> a >> b >> n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    long long count=b;
    for(int i=0;i<n;i++){
        if(arr[i] >= a){
            count += a - 1;
        } else {
            count += arr[i];
        }
    }
    cout << count << endl;
}

    return 0;
}