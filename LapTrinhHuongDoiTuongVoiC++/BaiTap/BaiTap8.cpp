// Bài tập 8: Viết chương trình nhập tọa độ 3 đỉnh A,B,C của một tam giác trong mặt phẳng Oxy. Tính chu vi, diện tích và tìm tọa độ trọng tâm.

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

class TamGiac 
{
    public:
        Diem A;
        Diem B;
        Diem C;
        void Nhap();
        void Xuat();
        float ChuVi();
        float DienTich();
        Diem TrongTam();
};

// Khối hàm main

int main() 
{
    TamGiac tg;
    tg.Nhap();
    tg.Xuat();

    float cv = tg.ChuVi();
    cout << "\n Chu vi: " << cv;

    float dt = tg.DienTich();
    cout << "\n Dien Tich: " << dt;

    Diem G = tg.TrongTam();
    cout << "\n Trong Tam: ";
    G.Xuat();
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
    cout << "\n x= " << x;
    cout << "\n y= " << y;
}

// Định nghĩa phương thức nhập cho lớp TamGiac
void TamGiac::Nhap() 
{
    cout << "\n Nhap A: ";
    A.Nhap();
    cout << "\n Nhap B: ";
    B.Nhap();
    cout << "\n Nhap C: ";
    C.Nhap();
}

// Định nghĩa phương thức xuất cho lớp TamGiac
void TamGiac::Xuat() 
{
    cout << "\n A: ";
    A.Xuat();
    cout << "\n B: ";
    B.Xuat();
    cout << "\n C: ";
    C.Xuat();
}

// Định nghĩa phương thức tính chu vi cho lớp TamGiac
float TamGiac::ChuVi() 
{
    float a = sqrt((B.x - C.x)*(B.x - C.x) + (B.y - C.y)*(B.y - C.y));
    float b = sqrt((C.x - A.x)*(C.x - A.x) + (C.y - A.y)*(C.y - A.y));
    float c = sqrt((A.x - B.x)*(A.x - B.x) + (A.y - B.y)*(A.y - B.y));
    return (a + b + c);
}

// Định nghĩa phương thức tính diện tích cho lớp TamGiac
float TamGiac::DienTich() 
{
    float a = sqrt((B.x - C.x)*(B.x - C.x) + (B.y - C.y)*(B.y - C.y));
    float b = sqrt((C.x - A.x)*(C.x - A.x) + (C.y - A.y)*(C.y - A.y));
    float c = sqrt((A.x - B.x)*(A.x - B.x) + (A.y - B.y)*(A.y - B.y));
    float p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

// Định nghĩa phương thức tìm tọa độ trọng tâm cho lớp TamGiac
Diem TamGiac::TrongTam() 
{
    Diem temp;
    temp.x = (A.x + B.x + C.x) / 3;
    temp.y = (A.y + B.y + C.y) / 3;
    return temp;
}