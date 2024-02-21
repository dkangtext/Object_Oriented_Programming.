#include <iostream>

class CSoPhuc 
{
    private:
        float phanThuc;
        float phanAo;

    public:
        // Hàm toán tử nhập
        friend std::istream& operator>>(std::istream& is, CSoPhuc& soPhuc) 
        {
            std::cout << "Nhap phan thuc: ";
            is >> soPhuc.phanThuc;

            std::cout << "Nhap phan ao: ";
            is >> soPhuc.phanAo;

            return is;
        }

        // Hàm toán tử xuất
        friend std::ostream& operator<<(std::ostream& os, const CSoPhuc& soPhuc) 
        {
            os << soPhuc.phanThuc;
            if (soPhuc.phanAo >= 0) 
            {
                os << " + " << soPhuc.phanAo << "i";
            } 
            else 
            {
                os << " - " << -soPhuc.phanAo << "i";
            }
            return os;
        }
};

int main() 
{
    CSoPhuc soPhuc1;

    // Sử dụng hàm toán tử nhập để nhập giá trị cho đối tượng CSoPhuc
    std::cin >> soPhuc1;

    // Sử dụng hàm toán tử xuất để xuất giá trị của đối tượng CSoPhuc
    std::cout << soPhuc1 << std::endl;

    return 0;
}
