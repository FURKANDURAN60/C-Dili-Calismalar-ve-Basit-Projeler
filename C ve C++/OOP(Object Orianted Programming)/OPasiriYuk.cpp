#include <iostream>
#include <cmath> 
using namespace std ; 
class Karmasik
{
    private : 
        int x , y ; 
    public :
    Karmasik(int x = 0 , int y = 0)
    {
        this->x = x ;
        this->y = y ;
    }

    int getX() {return x ;}
    int getY() {return y ;}

    void setX(int newX) { x = newX ;}
    void setY(int newY) { y = newY ;}

    Karmasik operator+(Karmasik sayi)
    {
       return Karmasik(x + sayi.x , y + sayi.y);  
    }
    Karmasik operator-(Karmasik sayi)
    {
        return Karmasik(x - sayi.x , y - sayi.y) ; 
    }
    Karmasik operator*(Karmasik sayi)
    {
        return Karmasik(x*sayi.x , y*sayi.y) ;
    }

    void display()
    {
        cout << x << " + " << y << "i" << endl ; 
    }
};

int main()  
{
    Karmasik complexSayi1(15,12) ;
    Karmasik complexSayi2(15,18) ;
    Karmasik toplam = complexSayi1 + complexSayi2  ;
    cout << "Karmasik Sayilarin Toplami : " ;
    toplam.display() ;

    int a  =  15  ,  b = 23 ; 
    
    cout << endl ;
    cout << "a + b : " << a + b  << endl ;

    
    return 0;
}