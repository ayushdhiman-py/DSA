#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) (a).begin(), (a).end()
#define ll long long
int main(){
	fast;

    stack<int> st;

    string s = "Ayush";
    string res = "";
	
    //push all the elements into the stack then add it to the other string
    for(auto a:s){
        st.push(a);
    }
    while(!st.empty()){
        char temp = st.top();
        res+=temp;
        st.pop();
    }
    cout<<res;

	return 0;
}