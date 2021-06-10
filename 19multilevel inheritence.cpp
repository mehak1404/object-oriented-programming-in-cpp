// multilevel inheritence
#include <bits/stdc++.h>
using namespace std;

class student
{

protected:
    int roll_number;

public:
    void setroll_number(int);
    void getroll_number();
};
void student ::setroll_number(int r)
{
    roll_number = r;
}
void student ::getroll_number()
{
    cout << "the roll number of the student is " << roll_number << endl;
}

class Exam : public student
{
protected:
    int maths;
    int physics;

public:
    void setmarks(int, int);
    void getmarks();
};
void Exam ::setmarks(int m1, int m2)
{
    maths = m1;
    physics = m2;
}
void Exam ::getmarks()
{

    cout << "the marks of the student in maths are " << maths << endl;
    cout << "the marks of the student in physics are " << physics << endl;
}
class Results : public Exam
{
    float percentage = (maths + physics) / 2;

public:
    void display()
    {
        getroll_number();
        getmarks();
        cout << "the percentage of the student is " << percentage << endl;
    }
};

int main()
{

    Results Mehak;
    Mehak.setroll_number(1219264);
    Mehak.setmarks(95.3, 96.5);
    Mehak.display();

    return 0;
}