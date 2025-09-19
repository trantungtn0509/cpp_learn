#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so n: ";
    cin >> n;   

    int a[1000]; 

    cout << "Nhap " << n << " so tu nhien: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Danh sach cac so ban da nhap la: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

