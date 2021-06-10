// Templates

#include<iostream>
using namespace std;

template < class T>

class vector{
    public:
    int size;
    T * arr;

    vector(int s){
        size = s;
        arr = new T[s];
    }
    T dotproduct( vector &v){
        T sum =0;
        for(int i = 0; i < size; ++i){
            sum += this->arr[i]*arr[i];
        }
        return sum;
    }
};

int main(){
   
   vector<int>v1(3);
   v1.arr[0] = 4;
   v1.arr[1] = 7;
   v1.arr[2] = 3;

   vector<int>v2(3);
   v2.arr[0] = 5;
   v2.arr[1] = 8;
   v2.arr[2] = 2;

   cout<<v1.dotproduct(v2)<<endl;

   return 0;

   
}