// Hãy khai báo và định nghĩa hàm toán tử vào (toán tử nhập) và hàm toán tử ra (toán tử xuất) cho lớp đối tượng sau: 
// Lớp hỗn số (CHonSo)

#include <iostream>
using namespace std;

class CHonSo
{
    private:
        int phannguyen;
        int tu;
        int mau;

    public:
        friend istream& operator >> (istream &, CHonSo &);
        friend ostream& operator << (ostream &, CHonSo &);
};

istream& operator >> (istream &is, CHonSo &x)
{
    cout << "Nhap phan nguyen: ";
    is >> x.phannguyen;
    cout << "Nhap tu so: ";
    is >> x.tu;
    cout << "Nhap mau so: ";
    is >> x.mau;
    return is;
}

ostream& operator << (ostream &os, CHonSo &x)
{
    os << "\n Hon so la: " << x.phannguyen << " " << x.tu << "/" << x.mau;
    return os;
}