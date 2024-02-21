#include <iostream>

class CDuongTron 
{
    private:
        float x, y;  // Tọa độ tâm
        float banKinh;

    public:
        // Hàm toán tử nhập
        friend std::istream& operator>>(std::istream& is, CDuongTron& duongTron) 
        {
            std::cout << "Nhap hoanh do x cua tam: ";
            is >> duongTron.x;

            std::cout << "Nhap tung do y cua tam: ";
            is >> duongTron.y;

            std::cout << "Nhap ban kinh: ";
            is >> duongTron.banKinh;

            return is;
        }

        // Hàm toán tử xuất
        friend std::ostream& operator<<(std::ostream& os, const CDuongTron& duongTron) 
        {
            os << "Duong tron co tam (" << duongTron.x << ", " << duongTron.y << ") va ban kinh " << duongTron.banKinh;
            return os;
        }
};

int main() 
{
    CDuongTron duongTron1;

    // Sử dụng hàm toán tử nhập để nhập giá trị cho đối tượng CDuongTron
    std::cin >> duongTron1;

    // Sử dụng hàm toán tử xuất để xuất giá trị của đối tượng CDuongTron
    std::cout << duongTron1 << std::endl;

    return 0;
}
