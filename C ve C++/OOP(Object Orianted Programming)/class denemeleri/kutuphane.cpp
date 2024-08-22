#include <iostream>
#include <vector>
#include <string>

using namespace std  ;

class Kitap
{
    private : 
        string ad ;
        string yazar ; 
        bool oduncAlindiMi ;
    
    public :
        Kitap(const string &ad , const string &yazar) : ad(ad) , yazar(yazar) , oduncAlindiMi(false){};

        string AdiAl() const
        {
            return ad ; 
        }
        
        string YazarAl() const
        {
            return yazar ; 
        }

        bool OduncAlindiMi() const
        {
            return oduncAlindiMi ; 
        }

        void KitabiOduncAl()
        {
            oduncAlindiMi = true ;
        }

        void KitabiIadeEt()
        {
            oduncAlindiMi = false ;
        }
};

class Kutuphane
{
    private : 
        vector<Kitap> kitaplar ;
    
    public : 
        void KitapEkle(const string &ad , const string &yazar)
        {
            Kitap yeniKitap(ad , yazar) ; 
            kitaplar.push_back(yeniKitap) ; 
            cout << "Kitap Eklendi : " << ad << " - " << yazar << endl ;
        }

        void KitaplariListele() const
        {
            cout << "Kutuphanedeki Kitaplar : " << endl ;
            for(const Kitap &kitap : kitaplar)
            {
                cout << kitap.AdiAl() << " - " << kitap.YazarAl() ;
                if(kitap.OduncAlindiMi())
                {
                    cout << " (Odunc Alindi) " << endl ;
                }

            } 
        }

        void KitapOduncAl(const string &KitapAdi)
        {
            for(Kitap &kitap :  kitaplar)
            {
                if(kitap.AdiAl() == KitapAdi && !kitap.OduncAlindiMi())
                {
                    kitap.KitabiOduncAl() ; 
                    cout << KitapAdi << " Odunc Alindi ." << endl ;
                    return;
                }
            }
            cout << "Kitap Bulunamadi veya Zaten Odunc Alinmis." << endl ;
        }

        void KitapIadeEt(const string &kitapAdi)
        {
            for(Kitap &kitap : kitaplar)
            {
                if(kitap.AdiAl() == kitapAdi && kitap.OduncAlindiMi())
                {
                    kitap.KitabiIadeEt();
                    cout << kitapAdi << " Iade Edildi." << endl ;
                    return ;
                }
            }
            cout << "Kitap Bulunamadi veya Zaten Iade Edilmis." << endl ; 
        }
};

int main()
{
    Kutuphane kutuphane ; 

    kutuphane.KitapEkle("1984", "George Orwell");
    kutuphane.KitapEkle("Suc ve Ceza", "Fyodor Dostoyevski");
    kutuphane.KitapEkle("Beyaz Zambaklar Ulkesinde", "Grigory Petrov");

    kutuphane.KitaplariListele() ;

    kutuphane.KitapOduncAl("1984");
    kutuphane.KitapOduncAl("Suc ve Ceza");

    kutuphane.KitaplariListele();

    kutuphane.KitapIadeEt("1984");

    kutuphane.KitaplariListele(); 

    return 0 ;
}