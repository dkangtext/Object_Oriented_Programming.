// Hãy khai báo và định nghĩa hàm toán tử vào (toán tử nhập) và hàm toán tử ra (toán tử xuất) cho lớp đối tượng sau: 
// Lớp điểm không gian (CDiemKhongGian)

#include <iostream>
using namespace std;

class CDiemKhongGian
{
    private:
        float x;
        float y;
        float z;
   
    public:
        friend istream& operator >> (istream &, CDiemKhongGian &);
        friend ostream& operator << (ostream &, CDiemKhongGian &);
};

istream& operator >> (istream &is, CDiemKhongGian &P)
{
    cout << "Nhap hoanh do x: ";
    is >> P.x;
    cout << "Nhap tung do y: ";
    is >> P.y;
    cout << "Nhap cao do z: ";
    is >> P.z;
    return is;
}

ostream& operator <<  (ostream &os, CDiemKhongGian &P)
{
    os << "\n Toa do diem trong khong gian la: (" << P.x << "," << P.y << "," << P.z << ")";
    return os;
}
