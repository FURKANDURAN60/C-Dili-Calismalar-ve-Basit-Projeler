#include <iostream>

using namespace std ; 

class Payment
{
    public : 
        float tutar ; 

        string parabirimi ; 
        string hasCode = "15647876" ;
    
    // Yapıcı Fonksiyon Payment()
    Payment() 
    {
        cout <<  "Yapici deneme  : çalisti ." << endl;
    } ; 
    // Yıkıcı Fonksiyon ~Payment()
    ~Payment()  
    {
        cout <<  "Bitti ..." << endl ; 
    } ; 


    void pay()
    {
        cout << "odeme alindi..." << endl  ;
    }
};


int main()
{

    Payment pay ; 
    pay.tutar = 30,23  ;
    pay.parabirimi = "tl"  ;
    pay.pay() ;
    
    return 0  ;

}