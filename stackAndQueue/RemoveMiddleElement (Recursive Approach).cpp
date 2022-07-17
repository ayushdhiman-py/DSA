#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) (a).begin(), (a).end()
#define ll long long

void deleteElement(stack<int> &st,int count, int size){
    //Base Case
    if(count==size/2){
        st.pop();
        return;
    }
    int num=st.top();
    st.pop();
    //Recursive Call
    deleteElement(st,count+1,size);
    st.push(num);
}

int main(){
    fast;
    stack<int> st;
    st.push(1);   
    st.push(2);   
    st.push(3);   
    st.push(4);
    st.push(5);
    int size = st.size();
    int count = 0;
    deleteElement(st,count,size);
    //printing elements in the stack//
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    return 0;
}

// OUTPUT:
// 5421
// 431