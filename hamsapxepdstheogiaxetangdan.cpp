//Hamsapxep
void sapXep(DanhSachXe &d)
{
    for (int i = 0; i < d.n - 1; i++)
        for (int j = i + 1; j < d.n; j++)
            if (d.a[i].getGiaXe() > d.a[j].getGiaXe())
            {
                XeOTo temp = d.a[i];
                d.a[i] = d.a[j];
                d.a[j] = temp;
            }
}
