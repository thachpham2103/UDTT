#include<iostream> 

using namespace std;

int fibonaci(int n){
	if(n<=1)
	return n;
	else{
		return fibonaci(n-1)+fibonaci(n-2); 
	} 
} 

int main(){
	int n;
	cout<<" nhap n="<<endl;
	cin>>n;
	cout<<" day la:"<<fibonaci(n)<<endl; 
	return 0; 
} 
