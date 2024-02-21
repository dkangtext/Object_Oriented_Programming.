#include <iostream>

class CDiem 
{
    private:
        float x, y;

    public:
        // Hàm toán tử nhập
        friend std::istream& operator>>(std::istream& is, CDiem& diem) 
        {
            std::cout << "Nhap hoanh do x: ";
            is >> diem.x;

            std::cout << "Nhap tung do y: ";
            is >> diem.y;

            return is;
        }

        // Hàm toán tử xuất
        friend std::ostream& operator<<(std::ostream& os, const CDiem& diem) 
        {
            os << "Toa do diem: (" << diem.x << ", " << diem.y << ")";
            return os;
        }
};

int main() 
{
    CDiem diem1;

    // Sử dụng hàm toán tử nhập để nhập giá trị cho đối tượng CDiem
    std::cin >> diem1;

    // Sử dụng hàm toán tử xuất để xuất giá trị của đối tượng CDiem
    std::cout << diem1 << std::endl;

    return 0;
}
