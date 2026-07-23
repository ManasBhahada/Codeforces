#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count=0;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        for(int i=n-2;i>=0;i--){
            while(arr[i]>=arr[i+1] && arr[i]>0){
            arr[i]=arr[i]/2;
            count++;
            }
        }
        int found=1;
        for(int i=0;i<n-1;i++){
            if(arr[i]>=arr[i+1]){
                found=0;
                break;
            }
        }
        if(found==1){
        cout << count << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }

    return 0;
}