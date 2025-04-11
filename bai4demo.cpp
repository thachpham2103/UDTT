#include<iostream>

using namespace std;

long long  soMu(long long a, long long  b){

    long long d = power(a, b / 2);
		 
	if(b==0){
	return 1;
}
	else if(b%2==0){
		return d*d; 
	} 
	else
	return d*d*a;  
} 

int main(){
	long long a,b;
	cout<<" nhap a,b"<<endl;
	cin>>a;
	cin>>b;
	soMu(a,b);
	return 0; 
} 
