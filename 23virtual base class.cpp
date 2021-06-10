// virtual base class
#include<bits/stdc++.h>
using namespace std;

class student{
    protected:
    int roll_number;
    public:
    void set_rollnumber(int a){
        roll_number = a;
    }
    void get_rollnumber(){
        cout<<"the roll number of the student is "<<roll_number<<endl;
    }
}; 
class test : virtual public student {
    protected:
    int maths, physics;
    public:
    void setmarks( int m1, int m2){
        maths = m1;
        physics = m2;
    }
    void getmarks(){
        cout<<"the marks of maths and physics are "<<maths <<" "<<physics<<endl;
    }
};
class music : virtual public student{
    protected:
    float score;
    public:
    void set_score(int sc){
        score = sc;
    } 
    void get_score(){
        cout<<"the pt score is "<<score<<endl;
    }
};

class result : public test, public music{
    float total;
    public:
    void display(){
        total = score + maths + physics;
        cout<<" the total score of the student is "<<total<<endl;
    }
};
int main(){

    result mehak;
    mehak.set_rollnumber(1219264);
    mehak.setmarks(95,96);
    mehak.set_score(92);
    mehak.get_rollnumber();
    mehak.getmarks();
    mehak.get_score();
    mehak.display();

    return 0;
}