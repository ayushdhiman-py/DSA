#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) (a).begin(), (a).end()
#define ll long long

void sorted(stack<int> &st, int prevnum){
    if(st.empty() || st.top()>prevnum){
        st.push(prevnum);
        return;
    }
    else{
        int top = st.top();
        st.pop();
        sorted(st,prevnum);
        st.push(top);
    }
}


void solve(stack<int> &st){
    if(st.empty()){
        return; 
    }
    int prev=st.top();
    st.pop();
    solve(st);
    sorted(st,prev);
}

int main(){
    fast;
    stack<int> st;
    st.push(10);
    st.push(2);
    st.push(31);
    solve(st);
    while(!st.empty()){
        cout<<st.top()<<"  ";
        st.pop();
    }
    return 0;
}

// OUTPUT:
// 