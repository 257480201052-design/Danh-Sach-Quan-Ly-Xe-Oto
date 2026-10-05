#include <iostream>
#include <string>
using namespace std;

class XeOTo
{
private:
    string bienSo;
    string hangXe;
    string mauXe;
    float giaXe;

public:
    // Ham tao
    XeOTo()
    {
        bienSo = "";
        hangXe = "";
        mauXe = "";
        giaXe = 0;
    }

    // Ham tao co tham so
    XeOTo(string bs, string hx, string mx, float gx)
    {
        bienSo = bs;
        hangXe = hx;
        mauXe = mx;
        giaXe = gx;
    }

    // Ham tao sao chep
    XeOTo(const XeOTo &x)
    {
        bienSo = x.bienSo;
        hangXe = x.hangXe;
        mauXe = x.mauXe;
        giaXe = x.giaXe;
    }

    // Ham huy
    ~XeOTo()
    {
    }

    // Ham nhap
    void nhap()
    {
        cin.ignore();

        cout << "Bien so xe = ";
        getline(cin, bienSo);

        cout << "Hang xe = ";
        getline(cin, hangXe);

        cout << "Mau xe = ";
        getline(cin, mauXe);

        cout << "Gia xe = ";
        cin >> giaXe;
    }

    // Ham xuat
    void xuat()
    {
        cout << bienSo << "\t"
             << hangXe << "\t"
             << mauXe << "\t"
             << giaXe << endl;
    }

    // Ham lay bien so
    string getBienSo()
    {
        return bienSo;
    }

    // Ham lay gia xe
    float getGiaXe()
    {
        return giaXe;
    }
};
