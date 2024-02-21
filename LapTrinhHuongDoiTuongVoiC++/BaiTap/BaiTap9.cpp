// Bài tập 9: Viết chương trình nhập tọa độ tâm và bán kính của một đường tròn. Tính diện tích và chu vi của đường tròn.

// Khối khai báo

#include <iostream>
#include <cmath>
using namespace std;

class Diem 
{
    public:
        float x;
        float y;

        // Phương thức khởi tạo
        Diem(float x = 0, float y = 0) : x(x), y(y) {}

        void Nhap();
        void Xuat();
};

class DuongTron 
{
    public:
        Diem tam;
        float banKinh;
        void Nhap();
        void Xuat();
        double ChuVi();
        double DienTich();
};

// Khối hàm main

int main() 
{
    DuongTron c;
    c.Nhap();
    c.Xuat();

    double cv = c.ChuVi();
    cout << "\n Chu vi: " << cv;

    double dt = c.DienTich();
    cout << "\n Dien Tich: " << dt;

    return 0;
}

// Khối định nghĩa hàm

// Định nghĩa phương thức nhập cho lớp Diem
void Diem::Nhap() 
{
    cout << "\n Nhap x: ";
    cin >> x;
    cout << "\n Nhap y: ";
    cin >> y;
}

// Định nghĩa phương thức xuất cho lớp Diem
void Diem::Xuat() 
{
    cout << "\n x = " << x;
    cout << "\n y = " << y;
}

// Định nghĩa phương thức nhập cho lớp DuongTron
void DuongTron::Nhap() 
{
    cout << "\n Nhap tam: ";
    tam.Nhap();
    cout << "\n Nhap ban kinh: ";
    cin >> banKinh;
}

// Định nghĩa phương thức xuất cho lớp DuongTron
void DuongTron::Xuat() 
{
    cout << "\n Tam duong tron: ";
    tam.Xuat();
    cout << "\n Ban kinh duong tron: " << banKinh;
}

// Định nghĩa phương thức tính chu vi cho lớp DuongTron
double DuongTron::ChuVi() 
{
    return 2 * 3.14 * banKinh;
}

// Định nghĩa phương thức tính diện tích cho lớp DuongTron
double DuongTron::DienTich() 
{
    return 3.14 * banKinh * banKinh;
}
