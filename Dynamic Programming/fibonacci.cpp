#include<iostream>
using namespace std;
int fib(int n){
	//base case
	if(n==0 or n==1){
		return n;
	}
	int ans;
	ans = fib(n-1) + fib(n-2);
	return ans;
}


int main(){
	int n;
	cin>>n;

	cout<<fib(n)<<endl;

	return 0;
}