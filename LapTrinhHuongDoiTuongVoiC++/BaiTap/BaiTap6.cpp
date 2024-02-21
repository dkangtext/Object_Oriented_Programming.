// Bài tập 6: Viết chương trình nhập vào một ngày. Tìm ngày kế tiếp và xuất kết quả.

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
        CDate(int ngay, int thang, int nam);
        bool NamNhuan();
        CDate TimNgayKeTiep();
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

    // Tìm ngày kế tiếp
    CDate NgayKeTiep = NgayHienTai.TimNgayKeTiep();

    // Xuất kết quả
    cout << "Ngay hien tai la: ";
    NgayHienTai.HienThiNgay();
    cout << "Ngay ke tiep la: ";
    NgayKeTiep.HienThiNgay();

    return 0;
}

// Khối định nghĩa hàm

CDate::CDate(int ngay, int thang, int nam) : Ngay(ngay), Thang(thang), Nam(nam) {}

bool CDate::NamNhuan()
{
    return (Nam % 4 == 0 && Nam % 100 != 0) || (Nam % 400 == 0);
}

CDate CDate::TimNgayKeTiep()
{
    CDate NgayKeTiep = *this;

    int NgayCuoiCuaThang;
    switch (NgayKeTiep.Thang)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            NgayCuoiCuaThang = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            NgayCuoiCuaThang = 30;
            break;
        case 2:
            NgayCuoiCuaThang = (NgayKeTiep.NamNhuan()) ? 29 : 28;
            break;
        default:
            NgayCuoiCuaThang = -1; // Tháng không hợp lệ
    }

    if (NgayKeTiep.Ngay < NgayCuoiCuaThang)
    {
        NgayKeTiep.Ngay++;
    }
    else
    {
        NgayKeTiep.Ngay = 1;
        if (NgayKeTiep.Thang < 12)
        {
            NgayKeTiep.Thang++;
        }
        else
        {
            NgayKeTiep.Thang = 1;
            NgayKeTiep.Nam++;
        }
    }

    return NgayKeTiep;
}

void CDate::HienThiNgay()
{
    cout << Ngay << "/" << Thang << "/" << Nam << endl;
}