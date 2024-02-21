// Hãy khai báo và định nghĩa hàm toán tử vào (toán tử nhập) và hàm toán tử ra (toán tử xuất) cho lớp đối tượng sau: 
// Lớp đường tròn (CDuongTron) trong mặt phẳng Oxy.

#include <iostream>
using namespace std;

class CDuongTron
{
    private:
        float x;
        float y;
        float bankinh;
    
    public:
        friend istream& operator >> (istream &, CDuongTron &);
        friend ostream& operator << (ostream &, CDuongTron &);
};

istream& operator >> (istream &is, CDuongTron &P)
{
    cout << "Nhap hoanh do x cua tam: ";
    is >> P.x;
    cout << "Nhap tung do y cua tam: ";
    is >> P.y;
    cout << "Nhap ban kinh cua duong tron: ";
    is >> P.bankinh;
    return is;
}

ostream& operator << (ostream &os, CDuongTron &P)
{
    os << "Duong tron co tam: (" << P.x << "," << P.y << ") va ban kinh R = " << P.bankinh;
    return os; 
}