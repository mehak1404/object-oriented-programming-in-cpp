// protected derivation
/* TAbLE TO REMEMBER:
                        private derivation     public derivation      protected derivation
private members  :          not inherited           not inherited           not inherited
public members   :          private                 public                  protected
protected memers :          private                 protected               protected
*/
#include<iostream>
using namespace std;



class base {
    int a;
    protected:
    int b;

};

class derived : private base{
public:   
    void setdata(int inp){
        b = inp;
    }
    void getdata(){
        cout<<"the value of b is "<<b<<endl;
    }
};

int main(){

    derived Mehak;

    Mehak.setdata(6);
    Mehak.getdata();

    return 0;
}
