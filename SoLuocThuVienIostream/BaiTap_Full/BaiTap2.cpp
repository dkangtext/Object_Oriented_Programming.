#include <iostream>

class CDiemKhongGian 
{
    private:
        float x, y, z;

    public:
        // Hàm toán tử nhập
        friend std::istream& operator>>(std::istream& is, CDiemKhongGian& diemKhongGian) 
        {
            std::cout << "Nhap hoanh do x: ";
            is >> diemKhongGian.x;

            std::cout << "Nhap tung do y: ";
            is >> diemKhongGian.y;

            std::cout << "Nhap cao do z: ";
            is >> diemKhongGian.z;

            return is;
        }

        // Hàm toán tử xuất
        friend std::ostream& operator<<(std::ostream& os, const CDiemKhongGian& diemKhongGian) 
        {
            os << "Toa do diem khong gian: (" << diemKhongGian.x << ", " << diemKhongGian.y << ", " << diemKhongGian.z << ")";
            return os;
        }
};

int main() 
{
    CDiemKhongGian diemKhongGian1;

    // Sử dụng hàm toán tử nhập để nhập giá trị cho đối tượng CDiemKhongGian
    std::cin >> diemKhongGian1;

    // Sử dụng hàm toán tử xuất để xuất giá trị của đối tượng CDiemKhongGian
    std::cout << diemKhongGian1 << std::endl;

    return 0;
}
