#include <iostream>

class CHonSo 
{
    private:
        int phanNguyen;
        int tuSo;
        int mauSo;

    public:
        // Hàm toán tử nhập
        friend std::istream& operator>>(std::istream& is, CHonSo& honSo) 
        {
            std::cout << "Nhap phan nguyen: ";
            is >> honSo.phanNguyen;

            std::cout << "Nhap tu so: ";
            is >> honSo.tuSo;

            std::cout << "Nhap mau so: ";
            is >> honSo.mauSo;

            return is;
        }

        // Hàm toán tử xuất
        friend std::ostream& operator<<(std::ostream& os, const CHonSo& honSo) 
        {
            os << honSo.phanNguyen << " " << honSo.tuSo << "/" << honSo.mauSo;
            return os;
        }
};

int main() 
{
    CHonSo honSo1;

    // Sử dụng hàm toán tử nhập để nhập giá trị cho đối tượng CHonSo
    std::cin >> honSo1;

    // Sử dụng hàm toán tử xuất để xuất giá trị của đối tượng CHonSo
    std::cout << honSo1 << std::endl;

    return 0;
}
