// Bài tập 4: Viết chương trình nhập vào 2 phân số. Tính tổng, hiệu, tích, thương giữa chúng và xuất kết quả.

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
        CPhanSo Tong(CPhanSo);
        CPhanSo Hieu(CPhanSo);
        CPhanSo Tich(CPhanSo);
        CPhanSo Thuong(CPhanSo);
};

// Khối hàm main

int main()
{
    CPhanSo a,b,kq;
    cout << "\n Nhap phan so thu nhat: ";
    a.Nhap();
    cout << "\n Nhap phan so thu hai: ";
    b.Nhap();
    
    kq = a.Tong(b); // đối tượng a gọi thực hiện phương thức Tong với đối số là đối tượng b
    cout << "\n Tong cua hai phan so la: ";
    kq.Xuat();
    
    kq = a.Hieu(b);
    cout << "\n Hieu cua hai phan so la: ";
    kq.Xuat();

    kq = a.Tich(b);
    cout << "\n Tich cua hai phan so la: ";
    kq.Xuat();

    kq = a.Thuong(b);
    cout << "\n Thuong cua hai phan so la: ";
    kq.Xuat();
    return 1;
}

// Khối định nghĩa hàm.

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

CPhanSo CPhanSo::Tong(CPhanSo x)
{
    CPhanSo temp;
    temp.tu = tu*x.mau + mau*x.tu;
    temp.mau = mau * x.mau;
    return temp;
}

CPhanSo CPhanSo::Hieu(CPhanSo x)
{
    CPhanSo temp;
    temp.tu = tu*x.mau - mau*x.tu;
    temp.mau = mau * x.mau;
    return temp;
}

CPhanSo CPhanSo::Tich(CPhanSo x)
{
    CPhanSo temp;
    temp.tu = tu * x.tu;
    temp.mau = mau * x.mau;
    return temp;
}

CPhanSo CPhanSo::Thuong(CPhanSo x)
{
    CPhanSo temp;
    temp.tu = tu * x.mau;
    temp.mau = mau * x.tu;
    return temp;
}