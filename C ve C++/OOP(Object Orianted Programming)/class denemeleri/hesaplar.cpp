#include <iostream>
using namespace std  ;

class Hesaplar
{
    private : 
        double bakiye ;

    public : 
        Hesaplar(double initialBalance)
        {
            cout << "____________________________________________________[-][o][x]" << endl ;
            bakiye = initialBalance ; 
            cout << "Hesap Olusturuldu . Baslangic Bakiyesi : " << bakiye << " TL" << endl ; 
        }
        void ParaYatir(double miktar)
        {
            bakiye += miktar ; 
            cout << miktar << " TL Yatirildi. Yeni Bakiye : " << bakiye << " TL" << endl ; 
        }
        double BakiyeSorgula()
        {
            cout << "Mevcut Bakiye " << bakiye << " TL" << endl ; 
            return bakiye ; 
        }
        ~Hesaplar()
        {
            
            cout << "Islemler Yapildi. Sistemden Cikis Yapiliyor..." << endl ; 
            cout << "_____________________________________________________________" ; 
        }

        
};  

int main()
{
    Hesaplar musteriHesabi(1000.00) ; 

    musteriHesabi.ParaYatir(500.00) ; 

    double mevcutBakiye = musteriHesabi.BakiyeSorgula() ;
    
    return 0 ; 
}