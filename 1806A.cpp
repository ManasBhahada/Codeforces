#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,a,b;
        int count=0;
        vector<pair<int, int>> coord;
        cin >> x >> y >> a >> b;
        coord.push_back({x,y});
        coord.push_back({a,b});
        while(y!=b && y<b){
            x=x+1;
            y=y+1;
            count++;
        }
        while(x!=a && x>a){
            x=x-1;
            count++;
        }
        if(x==a && y==b){
            cout << count << endl;
        }
        else{
            cout << "-1" << endl;
        }

    }
    return 0;
}