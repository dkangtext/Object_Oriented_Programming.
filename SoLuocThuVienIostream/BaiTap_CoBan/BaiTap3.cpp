// Hãy khai báo và định nghĩa hàm toán tử vào (toán tử nhập) và hàm toán tử ra (toán tử xuất) cho lớp đối tượng sau: 
// Lớp phân số (CPhanSo)

#include <iostream>
using namespace std;

class CPhanSo
{
    private:
        int tu;
        int mau;


    public:
        friend istream& operator >> (istream &, CPhanSo &);
        friend ostream& operator << (ostream &, CPhanSo &);
};

istream& operator >> (istream &is, CPhanSo &P)
{
    cout << "Nhap tu: ";
    is >> P.tu;
    cout << "Nhap mau: ";
    is >> P.mau;
    return is;
}

ostream& operator << (ostream &os, CPhanSo &P)
{
    os << "\n Phan so la: " << P.tu << "/" << P.mau;
    return os;
}
