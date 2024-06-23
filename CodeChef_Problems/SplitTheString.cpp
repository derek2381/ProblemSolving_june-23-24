// problem link
// https://www.codechef.com/problems/SPLITIT


#include <iostream>
#include <set>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    set<char> st;
	    int n;
	    cin >> n;
	    string str;
	    cin >> str;
	    for(int i = 0; i < n-1;i++){
	        st.insert(str[i]);
	    }


	   if(st.find(str[n-1]) == st.end()){
	       cout << "NO\n";
	   }else{
	       cout << "YES\n";
	   }
	}
	return 0;
}
