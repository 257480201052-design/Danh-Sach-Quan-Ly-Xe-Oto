// Ham nhap
void nhap()
{
    cout << "Nhap so luong xe: ";
    cin >> n;

    a = new XeOTo[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap xe thu " << i + 1 << ":\n";
        a[i].nhap();
    }
}
