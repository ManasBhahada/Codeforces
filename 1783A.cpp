#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end(),greater<int>());
        if(arr[0]!=arr[1]){
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout << arr[i] << " ";
                }
                cout<<endl;
        }
        else{
            int temp;
            temp=arr[n-1];
            if(temp==arr[1]){
                cout<<"NO"<<endl;
                
            }
            else{
                arr[n-1]=arr[1];
                arr[1]=temp;
                cout<<"YES"<<endl;
                for(int i=0;i<n;i++){
                    cout << arr[i] << " ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}