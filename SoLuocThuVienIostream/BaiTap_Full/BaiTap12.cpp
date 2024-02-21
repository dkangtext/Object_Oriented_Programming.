#include <iostream>

class CHinhCau 
{
    private:
        float x, y, z;  // Tọa độ tâm
        float banKinh;

    public:
        // Hàm toán tử nhập
        friend std::istream& operator>>(std::istream& is, CHinhCau& hinhCau) 
        {
            std::cout << "Nhap hoanh do x cua tam: ";
            is >> hinhCau.x;

            std::cout << "Nhap tung do y cua tam: ";
            is >> hinhCau.y;

            std::cout << "Nhap cao do z cua tam: ";
            is >> hinhCau.z;

            std::cout << "Nhap ban kinh: ";
            is >> hinhCau.banKinh;

            return is;
        }

        // Hàm toán tử xuất
        friend std::ostream& operator<<(std::ostream& os, const CHinhCau& hinhCau) 
        {
            os << "Hinh cau co tam (" << hinhCau.x << ", " << hinhCau.y << ", " << hinhCau.z << ") va ban kinh " << hinhCau.banKinh;
            return os;
        }
};

int main() 
{
    CHinhCau hinhCau1;

    // Sử dụng hàm toán tử nhập để nhập giá trị cho đối tượng CHinhCau
    std::cin >> hinhCau1;

    // Sử dụng hàm toán tử xuất để xuất giá trị của đối tượng CHinhCau
    std::cout << hinhCau1 << std::endl;

    return 0;
}
