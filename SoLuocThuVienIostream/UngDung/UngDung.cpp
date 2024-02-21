// Yêu cầu: Hãy định nghĩa toán tử vào và toán tử ra cho lớp đối tượng CNgay.

#include <iostream>
using namespace std;

class CNgay
{
    private:
        int ngay;
        int thang;
        int nam;


    public:
        friend istream& operator >> (istream &, CNgay &);
        friend ostream& operator << (ostream &, CNgay &);
};


istream& operator >> (istream &is, CNgay &x)
{
    cout << "Nhap ngay: ";
    is >> x.ngay;
    cout << "Nhap thang: ";
    is >> x.thang;
    cout << "Nhap nam: ";
    is >> x.nam;
    return is;
}


ostream& operator >> (ostream &os, CNgay &x)
{
    os << "\n Ngay Thang Nam: " << x.ngay << "/" << x.thang << "/" << x.nam;
    return os;
}
