#include <iostream>
// bazi değişkenler her silah için ortak ve bunu her defasında yazmak yerine 
// kalıtım yapılabilir 
class Ak47 
{ 
    public : 
        string isim ; 
        int mermiKapasitesi ; 
        bool seriTek ; 
        int kayisUzunlugu ; 
        bool durbun ; 

    void atesEt()
    {

    }
};

class Pistol
{
    public :
        string isim ; 
        int mermiKapasitesi ; 
        int kurmaKoluDeseni ; 

        void atesEt()
        {
            
        }
};

class M1  
{
    public :
        string isim ; 
        int mermiKapasitesi ; 
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

    return 0 ;
}