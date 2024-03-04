#include <iostream>
using namespace std;
int main()
{
    int sodau, socuoi;


    cout << "Nhap so dau:";
    cin >> sodau;
    cout << "Nhap so cuoi:";
    cin >> socuoi;

    cout << "Vong lap while\n";
    while (sodau <= socuoi)
    {
        cout << sodau << " ";
        sodau++;
    }
    
    cout << "\nNhap so dau:";
    cin >> sodau;
    cout << "Nhap so cuoi:";
    cin >> socuoi;
    cout << "\nVong lap while\n";
    do
    {
        cout << sodau << " ";
        sodau++;
    } while (sodau <= socuoi);


    return 0;
   
}
