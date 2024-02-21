// Ứng dụng 2: Viết chương trình nhập vào tọa độ 2 điểm trong mặt phẳng Oxy. Tính khoảng cách giữa chúng và xuất kết quả.

// Khối khai báo

#include <iostream>
#include <cmath>
using namespace std;

class CDiem
{
    private:
        float x;
        float y;

    public:
        void Nhap();
        void Xuat();
        float KhoangCach(CDiem);
};

// Khối hàm main

int main()
{
    CDiem A,B;
    cout << "Nhap toa do thu 1: " << endl;
    A.Nhap();
    cout << "Nhap toa do thu 2: " << endl;
    B.Nhap();
    float kq = B.KhoangCach(A); // Đối tượng B gọi thực hiện phương thức KhoangCach với đối số là đối tượng A.
    cout << "\n Toa do thu 1: ";
    A.Xuat();
    cout << "\n Toa do thu 2: ";
    B.Xuat();
    cout << "\n Khoang cach la: " << kq;
    return 1;
}

// Khối định nghĩa hàm

void CDiem::Nhap()
{
    float temp;
    cout << "Nhap x: ";
    cin >> temp;
    x = temp;
    cout << "Nhap y: ";
    cin >> temp;
    y = temp;
}

void CDiem::Xuat()
{
    cout << "\n x = " << x;
    cout << "\n y = " << y;
}

float CDiem::KhoangCach(CDiem P)
{
    return sqrt((x-P.x)*(x-P.x)
              + (y-P.y)*(y-P.y));
}

// float kq = B.KhoangCach(A); 
// Đối tượng B gọi thực hiện phương thức KhoangCach với đối số là đối tượng A. Gía trị trả về sẽ gán cho biến kq.
// x,y ở hàng 60,61 là thuộc tính của đối tượng đang gọi phương thức => x,y là thuộc tính của đối tượng B.
// P.x,P.y ở hàng 60,61 là thuộc tính của đối tượng đối số đầu vào A => P.x,P.y là thuộc tính của đối tượng A. (Hiểu một cách đơn giản)
// Chính xác: P.x, P.y là thuộc tính của đối tượng P và P là bản sao của đối tượng đối số đầu vào A. 
// Vì khi một hàm hay một phương thức được gọi thực hiện mà tham số đầu vào là tham trị, thì những tham số đó được cấp phát bộ nhớ, copy giá trị của đối số tương ứng (mà đối số tương ứng ở đây là đối tượng A).
// Đối tượng B là đối tượng hành động.