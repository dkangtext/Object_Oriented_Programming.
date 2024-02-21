// Bài toán 1: Viết chương trình nhập vào một phân số. Hãy cho biết phân số đó là phân số âm hay dương hay bằng không.

// Khối khai báo

#include <iostream>
using namespace std;

class CPhanSo
{
    private:
        int tu;
        int mau;

    public:
        void Nhap();
        void Xuat();
        int XetDau();
};

// Khối hàm main

int main()
{
    CPhanSo ps;
    ps.Nhap();
    int kq = ps.XetDau();
    switch(kq)
    {
        case 1: cout << "\n Phan so duong";
            break;
        case -1: cout << "\n Phan so am";
            break;
        case 0: cout << "\n Phan so bang khong";
            break;
    }
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
    cout << "\n Tu la: " << tu;
    cout << "\n Mau la: " << mau;
}

int CPhanSo::XetDau()
{
    if(tu * mau > 0)
        return 1;
    if(tu * mau < 0)
        return -1;
    return 0;
}