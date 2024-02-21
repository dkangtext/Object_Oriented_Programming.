// Ứng dụng 1: Viết chương trình nhập vào một phân số. Rút gọn phân số đó và xuất kết quả.

// Khối khai báo

#include <iostream>
#include <cmath>
using namespace std;

class CPhanSo
{
    private:
        int tu;
        int mau;

    public:
        void Nhap();
        void Xuat();
        void RutGon();
};

// Khối hàm main

int main()
{
    CPhanSo ps;   // ps là một đối tượng thuộc lớp đối tượng CPhanSo.
    ps.Nhap();    // đối tượng ps gọi thực hiện phương thức Nhap.
    cout << "\n Phan so ban dau: ";
    ps.Xuat();    // đối tượng ps gọi thực hiện phương thức Xuat.
    ps.RutGon();  // đối tượng ps gọi thực hiện phương thức RutGon.
    cout << "\n Phan so sau khi rut gon: ";
    ps.Xuat();
    return 1;
}

// Khối định nghĩa hàm

void CPhanSo::Nhap()
{
    cout << "\n Nhap tu: ";
    cin >> tu;
    cout << "\n Nhap mau: ";
    cin >> mau;
}

void CPhanSo::Xuat()
{
    cout << "\n Tu: " << tu;
    cout << "\n Mau: " << mau;
}

void CPhanSo::RutGon()
{
    int a = abs(tu);
    int b = abs(mau);
    while(a * b != 0)
    {
        if(a > b)
            a = a - b;
        else
            b = b - a;
    }
    tu = tu/(a+b);
    mau = mau/(a+b);
}
