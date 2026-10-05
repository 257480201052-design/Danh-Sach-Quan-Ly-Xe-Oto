#include <iostream>
#include <string>
using namespace std;

int main()
{
    DanhSachXe d;

    cout << "========== QUAN LY DANH SACH XE O TO ==========\n";

    // Nhap danh sach_long 
    d.nhap();

    // Xuat danh sach_my 
    cout << "\nDanh sach xe vua nhap:\n";
    d.xuat();

    // Sap xep_thu 
    sapXep(d);

    cout << "\nDanh sach sau khi sap xep gia tang dan:\n";
    d.xuat();

    // Tim kiem_khanh 
    timKiem(d);

    // Them xe_dung 
    themXe(d);

    cout << "\nDanh sach sau khi them xe:\n";
    d.xuat();

    // Xoa xe_dung 
    xoaXe(d);

    cout << "\nDanh sach sau khi xoa xe:\n";
    d.xuat();

    // Kiem tra ham tao sao chep_khanh 
    DanhSachXe d2(d);

    cout << "\nDanh sach d2 sau khi tao sao chep tu d:\n";
    d2.xuat();

    return 0;
}
