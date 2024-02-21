// Bài tập 5: Viết chương trình nhập vào 2 số phức. Tính tổng, hiệu, tích và xuất kết quả.

// Khối khai báo

#include <iostream>
#include <cmath>
using namespace std;

class CSoPhuc
{
    private:
        float thuc;
        float ao;

    public:
        void Nhap();
        void Xuat();
        CSoPhuc Tong(CSoPhuc);
        CSoPhuc Hieu(CSoPhuc);
        CSoPhuc Tich(CSoPhuc);
};

// Khối hàm main

int main()
{
    CSoPhuc a,b,kq;
    cout << "\n Nhap so phuc thu nhat: ";
    a.Nhap();
    cout << "\n Nhap so phuc thu hai: ";
    b.Nhap();

    kq = a.Tong(b);
    cout << "\n Tong hai so phuc la: ";
    kq.Xuat();

    kq = a.Hieu(b);
    cout << "\n Hieu hai so phuc la: ";
    kq.Xuat();

    kq = a.Tich(b);
    cout << "\n Tich hai so phuc la: ";
    kq.Xuat();
}

// Khối định nghĩa hàm

void CSoPhuc::Nhap()
{
    cout << "\n Nhap phan thuc: ";
    cin >> thuc;
    cout << "\n Nhap phan ao: ";
    cin >> ao;
}

void CSoPhuc::Xuat()
{
    cout << "\n Phan thuc la: " << thuc;
    cout << "\n Phan ao la: " << ao;
}

CSoPhuc CSoPhuc::Tong(CSoPhuc x)
{
    CSoPhuc temp;
    temp.thuc = thuc + x.thuc;
    temp.ao = ao + x.ao;
    return temp;
}

CSoPhuc CSoPhuc::Hieu(CSoPhuc x)
{
    CSoPhuc temp;
    temp.thuc = thuc - x.thuc;
    temp.ao = ao - x.ao;
    return temp;
}

CSoPhuc CSoPhuc::Tich(CSoPhuc x)
{
    CSoPhuc temp;
    temp.thuc = thuc*x.thuc - ao*x.ao;
    temp.ao = thuc*x.ao + ao*x.thuc;
    return temp;
}
