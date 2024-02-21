// Hãy khai báo và định nghĩa hàm toán tử vào (toán tử nhập) và hàm toán tử ra (toán tử xuất) cho lớp đối tượng sau: 
// Lớp điểm (CDiem)

#include <iostream>
using namespace std;

class CDiem
{
    private:
        float x;
        float y;


    public:
        friend istream& operator >> (istream &, CDiem &);
        friend ostream& operator << (ostream &, CDiem &);
};

istream& operator >> (istream &is, CDiem &P)
{
    cout << "Nhap hoanh do x: ";
    is >> P.x;
    cout << "Nhap tung do y: ";
    is >> P.y;
    return is;
}

ostream& operator >> (ostream &os, CDiem &P)
{
    os << "\n Toa do diem la: (" << P.x << "," << P.y << ")";
    return os;
}
