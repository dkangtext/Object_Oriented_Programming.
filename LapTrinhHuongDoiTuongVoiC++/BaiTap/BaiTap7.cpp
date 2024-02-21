// Bài tập 7: Viết chương trình nhập vào một ngày. Tìm ngày hôm qua và xuất kết quả.

// Khối khai báo

#include <iostream>
using namespace std;

class CDate 
{
    private:
        int Ngay;
        int Thang;
        int Nam;

    public:
        // Phương thức khởi tạo
        CDate(int ngay, int thang, int nam);

        // Phương thức kiểm tra năm nhuận
        bool NamNhuan();

        // Phương thức tìm ngày hôm qua
        CDate TimNgayHomQua();

        // Phương thức hiển thị ngày
        void HienThiNgay();
};

// Khối hàm main

int main() 
{
    // Nhập thông tin ngày
    int ngay, thang, nam;
    cout << "Nhap ngay: ";
    cin >> ngay;
    cout << "Nhap thang: ";
    cin >> thang;
    cout << "Nhap nam: ";
    cin >> nam;

    // Tạo đối tượng ngày
    CDate NgayHienTai(ngay, thang, nam);

    // Tìm ngày hôm qua
    CDate NgayHomQua = NgayHienTai.TimNgayHomQua();

    // Xuất kết quả
    cout << "Ngay hien tai la: ";
    NgayHienTai.HienThiNgay();
    cout << "Ngay hom qua la: ";
    NgayHomQua.HienThiNgay();

    return 0;
}

// Khối định nghĩa hàm

CDate::CDate(int ngay, int thang, int nam) : Ngay(ngay), Thang(thang), Nam(nam) {}

bool CDate::NamNhuan() 
{
    return (Nam % 4 == 0 && Nam % 100 != 0) || (Nam % 400 == 0);
}

CDate CDate::TimNgayHomQua() 
{
    CDate NgayHomQua = *this;

    // Kiểm tra ngày đầu tháng
    if (NgayHomQua.Ngay > 1) 
    {
        NgayHomQua.Ngay--;
    } 
    else 
    {
        if (NgayHomQua.Thang > 1) 
        {
            NgayHomQua.Thang--;

            // Xác định ngày cuối tháng trước
            switch (NgayHomQua.Thang) 
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    NgayHomQua.Ngay = 31;
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    NgayHomQua.Ngay = 30;
                    break;
                case 2:
                    NgayHomQua.Ngay = (NgayHomQua.NamNhuan()) ? 29 : 28;
                    break;
            }
        } 
        else 
        {
            // Nếu là tháng 1, chuyển về tháng 12 của năm trước
            NgayHomQua.Thang = 12;
            NgayHomQua.Nam--;
            NgayHomQua.Ngay = 31;
        }
    }
    return NgayHomQua;
}

void CDate::HienThiNgay() 
{
    cout << Ngay << "/" << Thang << "/" << Nam << endl;
}
