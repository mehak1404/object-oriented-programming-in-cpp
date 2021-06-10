// virtual funtions and PURE VIRTUAL FUNTIONS and ABSTRACT base class
#include<bits/stdc++.h>
using namespace std;

class CWH {
protected:
    string title;
    float ratings;
public:
    CWH (string s, float r){
        title = s;
        ratings = r;
    }
    virtual void display()= 0; // do nothing funtions --> PURE VIRTUAL FUNCTIONS
    // this make sure every derived class must have this function overridden.
};

class CWHvideo : public CWH{
    float videolen;
public:
    CWHvideo(string s, float r, float l) : CWH (s,r){
        videolen = l;
    }
    void display(){
        cout<<"The title of the video is "<<title<<" with ratings "<<ratings<<endl;
        cout<<"the length of the video is "<<videolen<<" mins"<<endl;
    }
};
class CWHtext : public CWH{
    int wordlen;
public:
    CWHtext(string s, float r, int l) : CWH (s,r){
        wordlen = l;
    }
    void display(){
        cout<<"The title of the artical is "<<title<<" with ratings "<<ratings<<endl;
        cout<<"the word length of the artical is "<<wordlen<<" words"<<endl;
    }
};

int main(){

    // for the video class
    float rat = 4.8, l =23.5;
    string title = "python tut";
    int w = 4342;
    CWHvideo obj1(title,rat,l);
    CWHtext obj2(title, rat,w);

    CWH * p[2];
    p[0] = &obj1;
    p[1] = &obj2;

    p[0]->display();
    p[1]->display();

    return 0;

}