#include <cmath>
#include <iostream>
    using namespace std;

    class Araba
    {
        private : 
            string model ;
            string marka ;
            int uretim_yili ;
        public : 
            Araba()
            {
                cout<<"1 araba olusturuldu. kiralik degil." << endl ;
            }
            Araba(string model , string marka , int uretim_yili)
            {
                this->model = model ;
                this->marka = marka ;
                this->uretim_yili = uretim_yili ;
                cout<< uretim_yili << marka << model ;
                cout<<"Kiralik degil." << endl ;
            }
            string getModel()  {return model ;}
            string getMarka()  {return marka ;}
            int getYil()  {return uretim_yili ;} 

            void setModel(string newModel) {model = newModel ;}
            void setMarka(string newMarka) {marka = newMarka ;}
            void setYil(int newYil) {uretim_yili = newYil ;}

            void kiralama()
            {
                cout<< uretim_yili <<" " << marka << " " << model << endl ;


                cout << "kiralandi " << endl ;
            }

    };



    int main()
    {
        Araba araba1 , araba2("Ford","Taunus",1982) ;
        cout<< araba2.getYil() << araba2.getMarka()<< araba2.getModel()  << endl ;
        araba2.kiralama() ;
         
        return 0;
    }