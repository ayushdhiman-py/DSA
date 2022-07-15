#include<bits/stdc++.h>
using namespace std;

class Stack{
	public:
		int *arrayOfStack;
		int top;
		int size;

		Stack(int size){
			this->size = size;
            arrayOfStack = new int[size];
            top=-1;
		}
		void push(int element){
			if(top==size-1){
				cout<<"Stack is full\n";
			}
			else{
				top++;
				arrayOfStack[top]=element;
				cout<<"element pushed : "<<element<<"\n";
			}
		}
		void pop(){
			if(top>=0){
				cout<<arrayOfStack[top]<<" is popped out of stack\n";
				top--;
			}
			else{
				cout<<"Stack is empty\n";
			}
		}
		int peek(){
			if(top>=0)
				return arrayOfStack[top];
			else
				return -1;
		}
		bool isEmpty(){
			if(top==-1){
				return true;
			}
			else{
				return false;
			}
		}
};

int main(){
	Stack stack1(5);
	stack1.push(1);
	stack1.push(2);
	stack1.push(3);
	stack1.push(4);
	stack1.push(5);
	stack1.push(5);
    stack1.pop();
    cout<<stack1.peek()<<" at top\n";
    cout<<(stack1.isEmpty()?"true\n":"false\n");
    stack1.pop();
    stack1.pop();
    stack1.pop();
    stack1.pop();
    stack1.pop();
    cout<<(stack1.isEmpty()?"true\n":"false\n");
    cout<<stack1.peek()<<" at top\n";

	return 0;
}