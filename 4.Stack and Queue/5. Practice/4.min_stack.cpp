#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	
	public:
		
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		stack<int>st;
		stack<int>stmin;
		void push(int num)
		{
			// Write your code here.
			st.push(num);
			if(stmin.empty()|| num <= stmin.top())
			{
				stmin.push(num);
			}
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
			if(st.empty()) return -1;
		
				int x = st.top();
				st.pop();
				if(x==stmin.top()){
					stmin.pop();
				}
				return x;

			
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
			if(st.empty()) return -1;
			return st.top();

		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
			if(stmin.empty())return  -1;
			return  stmin.top();
		}
};
int main ()
{
    
    return 0;
}