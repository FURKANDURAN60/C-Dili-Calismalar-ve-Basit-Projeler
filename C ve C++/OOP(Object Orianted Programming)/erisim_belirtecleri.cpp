#include <iostream>

using namespace std ; 

class Payment
{
    //Private Main içeresinde ya da başka bir yerde tanımlanan hasCode nin değiştirilmesini engeller daha doğrusu
    // payment.hasCode() olarak yazıldığında bu gözükmez . gibi gibi ...
    //Kullanıcın işine yaramayacak ya da dolaylı yoldan kullanmadığı bazı method - fonksiyonları  da 
    // private içerisine alabiliriz...
    protected : 
        string hasCode ="123456789" ; 
    public :
        string paraBirimi = "tl" ; 
        string tutar = "0.0" ;

        void pay()
        {
            cout << "Veriler Bankaya Gönderiliyor. Parabirimi : " + this->paraBirimi + " Tutar : " + this->tutar +" Kod : " + this->hasCode ; 
                    }

} ; 

class Payment2 : public Payment
{
    public : 
        void merhaba()
        {
            Payment2::hasCode = "yeninumberslar" ; 
        }
}
{

}

int main()
{
    Payment payment ; 
    payment.paraBirimi = "tl"  ;
    payment.tutar = "50.6" ; 
    payment.pay() ; 

    return 0  ;
}

//protected ise farklı bir sınıfta private olarak korunan 
//bazi değişkenleri ve methodları  kullanabilir manasına geliyr yani
// buna miras deniyor. miras veren class in private kısmına protected yazılmalıddd