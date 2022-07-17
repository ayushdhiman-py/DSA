#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) (a).begin(), (a).end()
#define ll long long

void insertAtBottom(stack<int> &st, int number){
    if(st.empty()){
        st.push(number);
        return;
    }
    int prev = st.top();
    st.pop();   
    insertAtBottom(st,number);
    st.push(prev);
}

void pushElementAtLast(stack<int> &st){   
    if(st.empty()){
        return;
    }
    int prevEle = st.top();
    st.pop();
    pushElementAtLast(st);
    insertAtBottom(st,prevEle);
}


int main(){
    fast;
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    pushElementAtLast(st);
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    return 0;
}

// OUTPUT:
// 123