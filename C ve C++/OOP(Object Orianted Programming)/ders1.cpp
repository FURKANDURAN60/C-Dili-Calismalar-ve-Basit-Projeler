#include <iostream>

using namespace std  ;

class hesapla 
{
    public : 
        int genislik ,  yukseklik ; 
        int alan ; 

        void giris()
        {
            cout<< "Genislik Giriniz : " ; 
            cin >> genislik ; 
            cout<< "Yukseklik Giriniz : " ; 
            cin >> yukseklik ; 
        }

        void hesapla_()
        {
            alan = yukseklik*genislik ; 
            cout << alan  ;
        }
    
};

int main()
{
    hesapla hesap ; 
    hesap.giris() ; 
    hesap.hesapla_(); 

}