#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <unordered_map>
#include <set>
using namespace std;

int main() {
    vector<int> arr = {4,5,6,5,4,3,4,6};

    int total=accumulate(arr.begin(),arr.end(),0);
    int biggest=*max_element(arr.begin(),arr.end());

    unordered_map<int,int> freq;
    for( int x: arr) freq[x]++;

    set<int> unique(arr.begin(),arr.end());

    vector<pair<int,int>> v(freq.begin(),freq.end());
    sort(v.begin(),v.end(),[](pair<int,int>a,pair<int,int>b){
        if(a.second!=b.second) return a.first>b.first;
        return a.second<b.second;
    });
    cout<<"sum"<<total<<"max"<<biggest<<endl;
    for(auto p:v)cout<<p.first<<"->>"<<p.second <<"times"<<endl;

}


//     // 1. total sum and max, using accumulate/max_element
//     int total = accumulate(arr.begin(), arr.end(), 0);
//     int biggest = *max_element(arr.begin(), arr.end());

//     // 2. frequency count, using unordered_map
//     unordered_map<int,int> freq;
//     for (int x : arr) freq[x]++;
//     // 3. unique elements, sorted, using set
//     set<int> uniq(arr.begin(), arr.end());

//     // 4. print elements sorted by frequency (desc), tie-break by value (asc)
//     vector<pair<int,int>> v(freq.begin(), freq.end()); // {value, count}
//     sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b){
//         if (a.second != b.second) return a.first > b.first; // higher count first
//         return a.second < b.second;                              // smaller value first
//     });

//     cout << "sum=" << total << " max=" << biggest << "\n";
//     for (auto p : v) cout << p.first << " -> " << p.second << " times\n";
// }


// vector<pair<int,int>> v(freq.begin(), freq.end()); // {value, count}
//     sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b){
//         if (a.second != b.second) return a.first > b.first; // higher count first
//         return a.second < b.second;                              // smaller value first
//     });