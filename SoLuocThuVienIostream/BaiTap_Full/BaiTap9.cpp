#include <iostream>

class CDuongThang 
{
    private:
        float a, b, c;

    public:
        // Hàm toán tử nhập
        friend std::istream& operator>>(std::istream& is, CDuongThang& duongThang) 
        {
            std::cout << "Nhap he so a: ";
            is >> duongThang.a;

            std::cout << "Nhap he so b: ";
            is >> duongThang.b;

            std::cout << "Nhap he so c: ";
            is >> duongThang.c;

            return is;
        }

        // Hàm toán tử xuất
        friend std::ostream& operator<<(std::ostream& os, const CDuongThang& duongThang) 
        {
            os << duongThang.a << "x + " << duongThang.b << "y + " << duongThang.c << " = 0";
            return os;
        }
};

int main() 
{
    CDuongThang duongThang1;

    // Sử dụng hàm toán tử nhập để nhập giá trị cho đối tượng CDuongThang
    std::cin >> duongThang1;

    // Sử dụng hàm toán tử xuất để xuất giá trị của đối tượng CDuongThang
    std::cout << duongThang1 << std::endl;

    return 0;
}
