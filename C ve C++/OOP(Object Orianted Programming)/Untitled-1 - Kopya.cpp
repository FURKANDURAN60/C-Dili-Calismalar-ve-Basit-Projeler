#include <iostream>
using namespace std;

class Dikdortgen
{
private:
    double uzunluk;
    double genislik;

public:
    Dikdortgen()
    {
        uzunluk = 1;
        genislik = 1;
    }
    void setUzunluk(double uzunluk)
    {
        if (uzunluk > 0.0 && uzunluk <= 20.0)
        {
            this->uzunluk = uzunluk;
        }
        else
        {
            cout << "girebileceginiz deger 0 dan kucukk veya esit, 20 den buyuk olamaz." << endl;
        }
    }
    double getUzunluk()
    {
        return uzunluk;
    }
    void setGenislik(double genislik)
    {
        if (genislik > 0.0 && genislik <= 20.0)
        {
            this->genislik = genislik;
        }
        else
        {
            cout << "girebileceginiz deger 0 dan kucukk veya esit, 20 den buyuk olamaz." << endl;
        }
    }
    double getGenislik()
    {
        return genislik;
    }

    double alanHesapla()
    {
        return genislik * uzunluk;
    }
    double cevreHesapla()
    {
        return 2 * (uzunluk + genislik);
    }
};

int main()
{

    Dikdortgen dikdortgen1;
    dikdortgen1.setUzunluk(15.5);
    dikdortgen1.setGenislik(9.8);
    cout << dikdortgen1.getUzunluk() << endl;
    cout << dikdortgen1.getGenislik() << endl;
    cout << dikdortgen1.alanHesapla() << endl;
    cout << dikdortgen1.cevreHesapla() << endl;

    return 0;
}