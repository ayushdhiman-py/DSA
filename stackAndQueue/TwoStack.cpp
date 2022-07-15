#include <bits/stdc++.h>
using namespace std;

class TwoStack{
	public:
		int *arrayOfStack;
		int size;
		int top1;
		int top2;

		TwoStack(int size){
			this->size = size;
			arrayOfStack = new int[size]; 
			top1=-1;
			top2=size;
		}
		void push1(int element){
			//at least one empty space
			if(top2-top1>1){
				top1++;
				arrayOfStack[top1]=element;
				cout<<"Pushed : "<<element<<"\n";
			}
			else{
				cout<<"Overflow\n";
			}
		}
		void push2(int element){
			//at least one empty space
			if(top2-top1>1){
				top2--;
				arrayOfStack[top2]=element;
				cout<<"Pushed : "<<element<<"\n";
			}
			else{
				cout<<"Overflow\n";
			}
		}
		int pop1(){
			if(top1>=0){
				int ans = arrayOfStack[top1];
				top1--;
				return ans;
			}
			else{
				return -1;
			}
		}
		int pop2(){
			if(top2<size ){
				int ans = arrayOfStack[top2];
				top1++;
				return ans;
			}
			else{
				return -1;
			}
		}
		
		int peek1(){
			if(top1>=0){
				return arrayOfStack[top1];
			}
			else{
				return -1;
			}
		}
		int peek2(){
			if(top2<size){
				return arrayOfStack[top2];
			}
			else{
				return -1;
			}
		}
		bool isEmpty1(){
			if(top1==-1){
				return true;
			}
			else{
				return false;
			}
		}
		bool isEmpty2(){
			if(top2==size){
				return true;
			}
			else{
				return false;
			}
		}
};

int main(){
	
	TwoStack stack1(5);
	stack1.push1(1);
	stack1.push1(2);
	stack1.push1(3);
	stack1.push2(4);
	stack1.push2(5);
	stack1.push2(6);
	cout<<"Peek 1 : "<<stack1.peek1()<<"\n";
	cout<<"Peek 2 : "<<stack1.peek2()<<"\n";
	cout<<(stack1.isEmpty1()?"true\n":"false\n");
	cout<<(stack1.isEmpty2()?"true\n":"false\n");
	stack1.pop1();
	stack1.pop1();
	stack1.pop1();
	stack1.pop2();
	stack1.pop2();
	stack1.pop2();
	cout<<(stack1.isEmpty1()?"true\n":"false\n");
	cout<<(stack1.isEmpty2()?"true\n":"false\n");
	return 0;
}

// OUTPUT :

// Pushed : 1
// Pushed : 2
// Pushed : 3
// Pushed : 4
// Pushed : 5
// Overflow
// Peek 1 : 3
// Peek 2 : 5
// false
// false
// false
// false