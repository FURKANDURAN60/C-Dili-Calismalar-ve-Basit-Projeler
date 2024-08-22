#include <iostream>
#include <conio.h>

using namespace std ; 

class Dede{

    protected:  
        string ad ; 
    public:
        Dede(){cout << " Dede DC" << endl ;ad="Polat" ; }
        void virtual icecekSoyle(){cout << ad << " dede ayran soyledi." << endl ; }  // Eğer ki virtual kullanılırsa dede sanallaştırmış olur ve dede nin özelliğini kullanamaz 
        void atSur(){cout << "Dede at suruyor" << endl ;}  
};

class Baba : public Dede{

    protected: 
        int TC ; 
    public:
        Baba(){cout << " Baba DC" << endl ;ad="Memati" ; TC = 12 ; }
        void icecekSoyle(){cout << ad << "  baba cay soyledi." << endl ; } 
        void icecekSoyle(int i){cout<<ad<<"baba " << i << " cay soyledi"<< endl ; }

};
// Dede den gelen void icecekSoyle()  ve Baba daki icecekSoyle() fonksiyonlar ıaynı old. için Baba daki overwriting oluyorrrr....
class Dayi {

    public :
        Dayi(){}
        void icecekSoyle(){cout << " dayi kahve soyledi." << endl ;}
        void gezmeyeGotur(){cout << "dayi tatili" << endl ; }
};

class Torun : public Baba , public Dayi{ 
    protected:
        string hesCode ; 
    public : 
    Torun(){cout << "Torun DC" << endl ;ad= "FURKAN" ; TC = 5656 ; hesCode = "1QAZ2wsx3EDC4rfv" ;}
    void icecekSoyle(){cout << ad << "  Torun gabbuucino soyledi." << endl ; } 
    void icecekSoyle(int i){cout<<ad<<"Torun " << i << " Kapucino soyledi"<< endl ; }
};



int main()
{
    system("cls") ;
    system("color 30") ;
    //Dede *d = new Dede() ;  d->icecekSoyle() ;
    //Baba *b= new Baba() ;   b->icecekSoyle() ;
    //Torun *t= new Torun() ; t->icecekSoyle() ;
    Dede *deneme = new Baba() ; deneme->icecekSoyle() ; // Bir Dedeyi taklik eden bir baba olabilir . 
    // Baba *convert = new Dede() ; convert->icecekSoyle() ; //  Ama bir babayi taklit eden bir dede olamaz.
    //Dede* c =  new Cocuk() ; c->gezmeyeGotur() ; 

    return 0 ;
}