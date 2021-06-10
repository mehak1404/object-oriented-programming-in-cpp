// Array of objects using pointers

#include<bits/stdc++.h>
using namespace std;

class shopitem{
    int id;
    int price;
    public:
    void setdata(int a, int b){
        id = a;
        price = b;
    }
    void getdata(){
        cout<<" The Id of the shop is "
            <<id <<" and the  price of the respective shop is "<<price<<endl;
    }
};

int main(){
    int s1 = 3,s2 = 3;
    shopitem* ptr = new shopitem[3];
    shopitem * temp = ptr;
    int p, q;
    int n  = 1;
    while(s1--){
        
        cout<<"Enter the id and price of item "<<n<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
        n++;
    }
    while(s2--){
        temp->getdata();
        temp++;
    }
    return 0;
}