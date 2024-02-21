// Bài toán: Viết chương trình nhập họ tên, điểm toán, điểm văn của một học sinh. Tính điểm trung bình và xuất kết quả.

// Khối khai báo

#include <iostream>
#include <string>
using namespace std;

class CHocSinh
{
    private:
        string hoten;
        int toan;
        int van;
        float dtb;
    
    public:
        void Nhap();
        void Xuat();
        void XuLy();
};

// Khối hàm main

int main()
{
    CHocSinh hs; // hs là một đối tượng thuộc về lớp đối tượng CHocSinh.
    hs.Nhap(); // đối tượng hs gọi thực hiện phương thức Nhap.
    hs.XuLy(); // đối tượng hs gọi thực hiện phương thức XuLy.
    hs.Xuat(); // đối tượng hs gọi thực hiện phương thức Xuat.
    return 1; // kết thúc lời gọi hàm và trả về giá trị 1.
}

// Khối định nghĩa hàm

void CHocSinh::Nhap()
{
    cout << "Nhap ho ten: ";
    getline(cin,hoten);
    cout << "Nhap toan: ";
    cin >> toan;
    cout << "Nhap van: ";
    cin >> van;
}

void CHocSinh::XuLy()
{
    dtb = (float)(toan + van)/2;
}

void CHocSinh::Xuat()
{
    cout << "\n Ho ten: " << hoten;
    cout << "\n Toan: " << toan;
    cout << "\n Van: " << van;
    cout << "\n DTB: " << dtb;
}