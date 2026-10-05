// Ham ban them xe vao vi tri
void themXe(DanhSachXe &d)
{
    int viTri;

    cout << "\nNhap vi tri can them: ";
    cin >> viTri;

    if (viTri < 0 || viTri > d.n)
    {
        cout << "Vi tri khong hop le!\n";
        return;
    }

    XeOTo *b = new XeOTo[d.n + 1];

    for (int i = 0; i < viTri; i++)
    {
        b[i] = d.a[i];
    }

    cout << "\nNhap thong tin xe can them:\n";
    b[viTri].nhap();

    for (int i = viTri; i < d.n; i++)
    {
        b[i + 1] = d.a[i];
    }

    delete[] d.a;

    d.a = b;
    d.n++;

    cout << "\nDa them xe thanh cong!\n";
}


// Ham ban xoa xe tai vi tri
void xoaXe(DanhSachXe &d)
{
    int viTri;

    cout << "\nNhap vi tri can xoa: ";
    cin >> viTri;

    if (viTri < 0 || viTri >= d.n)
    {
        cout << "Vi tri khong hop le!\n";
        return;
    }

    XeOTo *b = new XeOTo[d.n - 1];

    for (int i = 0; i < viTri; i++)
    {
        b[i] = d.a[i];
    }

    for (int i = viTri; i < d.n - 1; i++)
    {
        b[i] = d.a[i + 1];
    }

    delete[] d.a;

    d.a = b;
    d.n--;

    cout << "\nDa xoa xe thanh cong!\n";
}