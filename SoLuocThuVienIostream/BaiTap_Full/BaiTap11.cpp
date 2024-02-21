#include <iostream>

class CTamGiac 
{
    private:
        float a, b, c;  // Độ dài các cạnh

    public:
        // Hàm toán tử nhập
        friend std::istream& operator>>(std::istream& is, CTamGiac& tamGiac) 
        {
            std::cout << "Nhap do dai canh a: ";
            is >> tamGiac.a;

            std::cout << "Nhap do dai canh b: ";
            is >> tamGiac.b;

            std::cout << "Nhap do dai canh c: ";
            is >> tamGiac.c;

            return is;
        }

        // Hàm toán tử xuất
        friend std::ostream& operator<<(std::ostream& os, const CTamGiac& tamGiac) 
        {
            os << "Tam giac co cac canh co do dai: a = " << tamGiac.a << ", b = " << tamGiac.b << ", c = " << tamGiac.c;
            return os;
        }
};

int main() 
{
    CTamGiac tamGiac1;

    // Sử dụng hàm toán tử nhập để nhập giá trị cho đối tượng CTamGiac
    std::cin >> tamGiac1;

    // Sử dụng hàm toán tử xuất để xuất giá trị của đối tượng CTamGiac
    std::cout << tamGiac1 << std::endl;

    return 0;
}
