// Bài tập 2: Viết chương trình nhập tọa độ hai điểm trong không gian. Tính khoảng cách giữa chúng và xuất kết quả.

// Khối khai báo

#include <iostream>
#include <cmath>
using namespace std;

class CDiemKhongGian
{
    private:
        float x;
        float y;
        float z;
    
    public:
        void Nhap();
        void Xuat();
        float KhoangCach(CDiemKhongGian); // 
};

// Khối hàm main

int main()
{
    CDiemKhongGian A,B;
    cout << "\n Nhap toa do thu nhat: ";
    A.Nhap();
    cout << "\n Nhap toa do thu hai: ";
    B.Nhap();
    float kq = A.KhoangCach(B);
    cout << "\n Toa do thu nhat: ";
    A.Xuat();
    cout << "\n Toa do thu hai: ";
    B.Xuat();
    cout << "\n Khoang Cach la: " << kq;
    return 1;
}

// Khối định nghĩa hàm

void CDiemKhongGian::Nhap()
{
    float temp;
    cout << "\n Nhap x: ";
    cin >> temp;
    x = temp;
    cout << "\n Nhap y: ";
    cin >> temp;
    y = temp;
    cout << "\n Nhap z: ";
    cin >> temp;
    z = temp;
}

void CDiemKhongGian::Xuat()
{
    cout << "\n x: " << x;
    cout << "\n y: " << y;
    cout << "\n z: " << z;
}

float CDiemKhongGian::KhoangCach(CDiemKhongGian P)
{
    return sqrt((x-P.x)*(x-P.x)
              + (y-P.y)*(y-P.y)
              + (z-P.z)*(z-P.z));
}