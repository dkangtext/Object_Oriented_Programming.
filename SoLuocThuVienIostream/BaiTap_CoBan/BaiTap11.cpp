// Hãy khai báo và định nghĩa hàm toán tử vào (toán tử nhập) và hàm toán tử ra (toán tử xuất) cho lớp đối tượng sau: 
// Lớp tam giac (CTamGiac) trong mặt phẳng Oxy.

#include <iostream>
using namespace std;

class CTamGiac
{
    private:
        float a;
        float b;
        float c;
    
    public:
        friend istream& operator >> (istream &, CTamGiac &);
        friend ostream& operator << (ostream &, CTamGiac &);
};

istream& operator >> (istream &is, CTamGiac &P)
{
    cout << "Nhap do dai canh a: ";
    is >> P.a;
    cout << "Nhap do dai canh b: ";
    is >> P.b;
    cout << "Nhap do dai canh c: ";
    is >> P.c;
    return is;
}

ostream& operator >> (ostream &os, CTamGiac &P)
{
    os << "Tam giac co cac canh co do dai: a = " << P.a << ", b = " << P.b << ", c = " << P.c;
    return os;
}