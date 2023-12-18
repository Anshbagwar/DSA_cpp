# Stack-basi\
#include<iostream>
#include<stack>

using namespace std ;
int main()
{
	stack <int> s;
	s.push(10);
	s.push(9);
	
	s.pop();
	cout << "top element: "<< s.top()<< endl ;
	
	if (s.empty()){
		cout << "stack is emnpty" << endl ;
	}
	else{
		cout << "stack is full"<< endl ;
	}
	cout << "size of stack: "<< s.size() << endl ;
}
