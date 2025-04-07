#include<iostream>

using namespace std;

int fibonaci(int n){
  if(n<=1)
  return n;
  
  int a,b,kq;
  for(int i=1; i<n;i++){
  	kq=a+b;
	  a=b;
	  b=kq; 
  } 
  return kq; 
} 

int main(){
	int n;
	cout<<" nhap n="<<endl;
	cin>>n;
	int a,b,kq;
//	cout<<" nhap a,b="<<endl;
//	cin>>a;
//	cin>>b;
	 cout<<" ket qua:"<<fibonaci(n)<<endl;
	 return 0; 
} 
