// Hãy khai báo và định nghĩa hàm toán tử vào (toán tử nhập) và hàm toán tử ra (toán tử xuất) cho lớp đối tượng sau: 
// Lớp thoi gian (CThoiGian)

#include <iostream>
using namespace std;

class CThoiGian
{
    private:
        int gio;
        int phut;
        int giay;
    
    public:
        friend istream& operator >> (istream &, CThoiGian &);
        friend ostream& operator << (ostream &, CThoiGian &);
};

istream& operator >> (istream &is, CThoiGian &x)
{
    cout << "Nhap gio: ";
    is >> x.gio;
    cout << "Nhap phut: ";
    is >> x.phut;
    cout << "Nhap giay: ";
    is >> x.giay;
    return is;
}

ostream& operator << (ostream &os, CThoiGian &x)
{
    os << "Thoi gian la: " << x.gio << " gio " << x.phut << " phut " << x.giay << " giay";
    return os;
}