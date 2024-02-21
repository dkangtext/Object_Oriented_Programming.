#include <iostream>

class CDonThuc 
{
    private:
        float heSo;
        int bac;

    public:
        // Hàm toán tử nhập
        friend std::istream& operator>>(std::istream& is, CDonThuc& donThuc) 
        {
            std::cout << "Nhap he so: ";
            is >> donThuc.heSo;

            std::cout << "Nhap bac: ";
            is >> donThuc.bac;

            return is;
        }

        // Hàm toán tử xuất
        friend std::ostream& operator<<(std::ostream& os, const CDonThuc& donThuc) 
        {
            os << donThuc.heSo;
        
            if (donThuc.bac != 0) 
            {
            os << "x";
            
            if (donThuc.bac != 1) 
            {
                os << "^" << donThuc.bac;
            }
            }

            return os;
        }
};

int main() 
{
    CDonThuc donThuc1;

    // Sử dụng hàm toán tử nhập để nhập giá trị cho đối tượng CDonThuc
    std::cin >> donThuc1;

    // Sử dụng hàm toán tử xuất để xuất giá trị của đối tượng CDonThuc
    std::cout << donThuc1 << std::endl;

    return 0;
}
