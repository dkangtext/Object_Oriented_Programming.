// Hãy khai báo và định nghĩa hàm toán tử vào (toán tử nhập) và hàm toán tử ra (toán tử xuất) cho lớp đối tượng sau: 
// Lớp đường thẳng (CDuongThang) trong mặt phẳng Oxy.

#include <iostream>
using namespace std;

class CDuongThang
{
    private:
        float a;
        float b;
        float c;
    
    public:
        friend istream& operator >> (istream &, CDuongThang &);
        friend ostream& operator << (ostream &, CDuongThang &);
};

istream& operator >> (istream &is, CDuongThang &x)
{
    cout << "Nhap he so a: ";
    is >> x.a;
    cout << "Nhap he so b: ";
    is >> x.b;
    cout << "Nhap he so c: ";
    is >> x.c;
    return is;
}

ostream& operator << (ostream &os, CDuongThang &x)
{
    os << "Duong thang co dang: " << x.a << "x + " << x.b << "y + " << x.c << " = 0";
    return os;
}