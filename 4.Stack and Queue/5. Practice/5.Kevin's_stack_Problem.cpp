#include<bits/stdc++.h>
using namespace std;

string kevinStackProblem(string &s)
{
	// Write your code here.
	stack<char>st;
	stack<char>Rst;
	string sg;
	for(char x: s){
		st.push(x);
	}
	
	while(!st.empty()){
		char x = st.top();
		sg +=x;
		st.pop(); 

	}
	return sg;
	
}

int main ()
{
    
    return 0;
}