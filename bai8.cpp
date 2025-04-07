#include <iostream>

using namespace std;

void thapHN(int n, char A, char B, char C) {
    if (n == 1) {
        cout << "Di chuyen dia 1 tu cot " << A << " sang cot " << C << endl;
        return;
    }
    thapHN(n - 1, A, C, B);  //di chuen dia n-1 tu A qua B  
    cout << "Di chuyen dia " << n << " tu cot " << A << " sang cot " << C << endl;  // Di chuyen tu A qua C  
    thapHN(n - 1, B, A, C);  // Di chuyen n-1 dia tu B qua C sang A  
}

int main() {
    int n;
    cout << "Nhap so luong dia: ";
    cin >> n;
    thapHN(n, 'A', 'B', 'C');
    return 0;
}

