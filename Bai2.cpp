#include <iostream>
using namespace std;

int UCLN(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int a, b;
	cout<<" nhap a="<<endl;
	cin>>a;
	cout<<" nhap b="<<endl;
	cin>>b; 
    cout << "UCLN(" << a << ", " << b << ") = " << UCLN(a, b) << endl;
    return 0;
}

