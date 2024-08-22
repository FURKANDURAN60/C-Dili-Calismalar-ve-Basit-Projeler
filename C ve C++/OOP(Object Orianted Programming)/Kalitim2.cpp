#include <iostream>

using namespace std ; 

// bazi değişkenler her silah için ortak ve bunu her defasında yazmak yerine 
// kalıtım yapılabilir 
class Silah 
{
    public : 
        string isim ; 
        int mermiKapasitesi ;
        string renk ; 

    Silah()
    {   
        cout << "Silah  Olusturuldu...\n" ;
    }

    ~Silah()
    {   
        cout << "Silah  Bitti...\n" ;
    }
        
};


class Ak47 : public Silah
{
    public : 
        bool seriTek ; 
        int kayisUzunlugu ; 
        bool durbun ; 

    Ak47()
    {
        cout << "Ak47 Olusturuldu...\n" ; 
    }
    ~Ak47()
    {   
        cout << "Ak47  Bitti...\n" ;
    }

    void atesEt()
    {

    }
};

class Pistol : public Silah
{
    public :
        int kurmaKoluDeseni ; 

        void atesEt()
        {
            
        }
};

class M1 : public Silah
{
    public :
        bool seriTek ; 
        int kayisUzunlugu ; 
        bool kurmaPozisyonu ; 

        void atesEt()
        {

        }
};

using namespace std ; 

int main ()
{
    Ak47 ak47 ;
    Ak47 *ak47ptr = &ak47 ;
    int sayi1 = 10 ;
    cout << "Sayi1 ilk deger : " << sayi1 << endl  ;
    cout<<"------------------------------------------------"<<endl ; 
    int& referans = sayi1 ;

    referans = 21 ; 

    cout << "referans uygulanir ve referansdaki deger sayi1 e aktaririlir."<< endl  ;

    cout <<"referans sonrasi : "<< sayi1 << endl  ;
    sayi1 = 50 ;
    cout << "sayi1 i degistirince referansimiz da degisir REFERNS DEGERI : " << referans << endl ; 
    cout<<"------------------------------------------------"<<endl ; 

    cout << ak47ptr ; 
    ak47.isim = "Ak47 Yeni Dizayn" ; 
    ak47.renk = "Kahverengi" ; 


    return 0 ;
}