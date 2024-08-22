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

void test(Ak47& ak47)
{
    ak47.isim = "testt...\n" ; 
}

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
    Ak47* ak47ptr = &ak47 ;

    ak47.isim = "test\n" ; 
    ak47.renk = "Kahverengi" ; 
    ak47ptr->isim = "test\n" ; 
    ak47ptr->atesEt() ; 

    Ak47& ak47Ref = ak47  ;
    ak47Ref.isim = "test...\n" ; 

    test(ak47)
    return 0 ;
}