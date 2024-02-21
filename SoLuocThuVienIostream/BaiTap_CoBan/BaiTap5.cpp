// Hãy khai báo và định nghĩa hàm toán tử vào (toán tử nhập) và hàm toán tử ra (toán tử xuất) cho lớp đối tượng sau: 
// Lớp số phức (CSoPhuc)

#include <iostream>
using namespace std;

class CSoPhuc
{
    private:
        float thuc;
        float ao;

    public:
        friend istream& operator >> (istream &, CSoPhuc &);
        friend ostream& operator << (ostream &, CSoPhuc &); 
};

istream& operator >> (istream &is, CSoPhuc &x)
{
    cout << "Nhap phan thuc: ";
    is >> x.thuc;
    cout << "Nhap phan ao: ";
    is >> x.ao;
    return is;
}

ostream& operator << (ostream &os, CSoPhuc &x)
{
    os << "So phuc la: " << x.thuc << "," << x.ao << "i";
    return os;
}