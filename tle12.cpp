#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        vector<int> a;
        a.push_back(arr[0]);

        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                a.push_back(1);
            }
            a.push_back(arr[i+1]);
        }
        cout << a.size() << endl;
        for(int i=0;i<a.size();i++){
        cout << a[i] << " ";
        }
        cout<<endl;
        
    }
    
    return 0;
}