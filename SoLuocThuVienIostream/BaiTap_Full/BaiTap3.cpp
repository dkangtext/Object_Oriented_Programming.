#include <iostream>

class CPhanSo 
{
    private:
        int tuSo;
        int mauSo;

    public:
        // Hàm toán tử nhập
        friend std::istream& operator>>(std::istream& is, CPhanSo& phanSo) 
        {
            std::cout << "Nhap tu so: ";
            is >> phanSo.tuSo;

            std::cout << "Nhap mau so: ";
            is >> phanSo.mauSo;

            return is;
        }

        // Hàm toán tử xuất
        friend std::ostream& operator<<(std::ostream& os, const CPhanSo& phanSo) 
        {
            os << phanSo.tuSo << "/" << phanSo.mauSo;
            return os;
        }
};

int main() 
{
    CPhanSo phanSo1;

    // Sử dụng hàm toán tử nhập để nhập giá trị cho đối tượng CPhanSo
    std::cin >> phanSo1;

    // Sử dụng hàm toán tử xuất để xuất giá trị của đối tượng CPhanSo
    std::cout << phanSo1 << std::endl;

    return 0;
}
