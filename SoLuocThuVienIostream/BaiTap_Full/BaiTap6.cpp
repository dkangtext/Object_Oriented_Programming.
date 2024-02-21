#include <iostream>

class CNgay 
{
    private:
        int ngay;
        int thang;
        int nam;

    public:
        // Hàm toán tử nhập
        friend std::istream& operator>>(std::istream& is, CNgay& ngay) 
        {
            std::cout << "Nhap ngay: ";
            is >> ngay.ngay;

            std::cout << "Nhap thang: ";
            is >> ngay.thang;

            std::cout << "Nhap nam: ";
            is >> ngay.nam;

            return is;
        }

        // Hàm toán tử xuất
        friend std::ostream& operator<<(std::ostream& os, const CNgay& ngay) 
        {
            os << ngay.ngay << "/" << ngay.thang << "/" << ngay.nam;
            return os;
        }
};

int main() 
{
    CNgay ngay1;

    // Sử dụng hàm toán tử nhập để nhập giá trị cho đối tượng CNgay
    std::cin >> ngay1;

    // Sử dụng hàm toán tử xuất để xuất giá trị của đối tượng CNgay
    std::cout << ngay1 << std::endl;

    return 0;
}
