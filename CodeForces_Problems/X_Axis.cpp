// problem link
// https://codeforces.com/contest/1986/problem/A


#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        vector<int> arr;
        cin >> a >> b >> c;
        arr.push_back(a);
        arr.push_back(b);
        arr.push_back(c);

        sort(arr.begin(), arr.end());

        int val = arr[2] - arr[0];

        cout << val << endl;
    }
}
