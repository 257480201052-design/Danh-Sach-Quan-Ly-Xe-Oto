// Ham ban tim kiem xe theo bien so
void timKiem(DanhSachXe &d)
{
    string bienSoCanTim;

    cin.ignore();

    cout << "\nNhap bien so xe can tim: ";
    getline(cin, bienSoCanTim);

    bool timThay = false;

    for (int i = 0; i < d.n; i++)
    {
        if (d.a[i].getBienSo() == bienSoCanTim)
        {
            cout << "\nTim thay xe:\n";

            cout << "Bien so\t\tHang xe\t\tMau xe\t\tGia xe\n";

            d.a[i].xuat();

            timThay = true;
            break;
        }
    }

    if (timThay == false)
    {
        cout << "\nKhong tim thay xe co bien so: "
             << bienSoCanTim << endl;
    }
}
