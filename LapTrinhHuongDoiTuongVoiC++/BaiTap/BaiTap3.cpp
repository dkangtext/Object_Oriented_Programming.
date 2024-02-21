// Bài tập 3: Viết chương trình nhập vào 2 phân số. Tìm phân số lớn nhất và xuất kết quả.

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
        int SoSanh(CPhanSo);
};

// Khối hàm main

int main()
{
    CPhanSo A,B;
    cout << "\n Nhap phan so thu nhat: \n";
    A.Nhap();
    cout << "\n Nhap phan so thu hai: \n";
    B.Nhap();
    int kq = A.SoSanh(B);
    cout << "\n Phan so lon nhat la: ";
    if (kq >= 0)
        A.Xuat();
    else    
        B.Xuat();
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

int CPhanSo::SoSanh(CPhanSo x)
{
    float a = (float)tu/mau;
    float b = (float)x.tu/x.mau;
    if(a > b)
        return 1;
    if(a < b)
        return -1;
    return 0;
}