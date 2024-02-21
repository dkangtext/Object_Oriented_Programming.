// Hãy khai báo và định nghĩa hàm toán tử vào (toán tử nhập) và hàm toán tử ra (toán tử xuất) cho lớp đối tượng sau: 
// Lớp đơn thức (CDonThuc)

#include <iostream>
using namespace std;

class CDonThuc;
{
    private:
        float heso;
        int bac;

    public:
        friend istream& operator >> (istream &, CDonThuc &);
        friend ostream& operator << (ostream &, CDonThuc &);
};

istream& operator >> (istream &is, CDonThuc &P)
{
    cout << "Nhap he so: ";
    is >> P.heso;
    cout << "Nhap bac cua he so: ";
    is >> P.bac;
    return is;
}

ostream& operator << (ostream &os, CDonThuc &P)
{
    os << "Don thuc la: " << P.heso;
    if(P.bac != 0)
    {
        os << "x";
        if(P.bac != 1)
        {
            os << "^" << P.bac;
        }
    }
    return os;
}