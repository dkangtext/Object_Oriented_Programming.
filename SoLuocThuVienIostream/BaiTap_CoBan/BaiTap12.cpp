// Hãy khai báo và định nghĩa hàm toán tử vào (toán tử nhập) và hàm toán tử ra (toán tử xuất) cho lớp đối tượng sau: 
// Lớp hình cầu (CHinhCau) trong không gian Oxyz.

#include <iostream>
using namespace std;

class CHinhCau
{
    private:
        float x;
        float y;
        float z;
        float bankinh;

    public:
        friend istream& operator >> (istream &, CHinhCau &);
        friend ostream& operator << (ostream &, CHinhCau &);
};

istream& operator >> (istream &is, CHinhCau &P)
{
    cout << "Nhap hoanh do x cua tam: ";
    is >> P.x;
    cout << "Nhap tung do y cua tam: ";
    is >> P.y;
    cout << "Nhap cao do z cua tam: ";
    is >> P.z;
    cout << "Nhap ban kinh cua hinh cau: ";
    is >> P.bankinh;
    return is;
}

ostream& operator << (ostream &os, CHinhCau &P)
{
    os << "Hinh cau co tam (" << P.x << ", " << P.y << ", " << P.z << ") va ban kinh R = " << P.bankinh;
    return os;
}