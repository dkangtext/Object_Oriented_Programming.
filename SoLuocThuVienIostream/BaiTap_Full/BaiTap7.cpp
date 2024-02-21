#include <iostream>

class CThoiGian 
{
    private:
        int gio;
        int phut;
        int giay;

    public:
        // Hàm toán tử nhập
        friend std::istream& operator>>(std::istream& is, CThoiGian& thoiGian) 
        {
            std::cout << "Nhap gio: ";
            is >> thoiGian.gio;

            std::cout << "Nhap phut: ";
            is >> thoiGian.phut;

            std::cout << "Nhap giay: ";
            is >> thoiGian.giay;

            return is;
        }

        // Hàm toán tử xuất
        friend std::ostream& operator<<(std::ostream& os, const CThoiGian& thoiGian) 
        {
            os << thoiGian.gio << " gio " << thoiGian.phut << " phut " << thoiGian.giay << " giay";
            return os;
        }
};

int main() 
{
    CThoiGian thoiGian1;

    // Sử dụng hàm toán tử nhập để nhập giá trị cho đối tượng CThoiGian
    std::cin >> thoiGian1;

    // Sử dụng hàm toán tử xuất để xuất giá trị của đối tượng CThoiGian
    std::cout << thoiGian1 << std::endl;

    return 0;
}
