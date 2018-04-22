#include <iostream>
using namespace std;
#include "CircularInt.hpp"

// CircularInt&  CircularInt :: operator () (int x, int y){
//         CircularInt ans (x,y);
//         return ans;
// }

  CircularInt& CircularInt :: operator += (const int& b){
        // clear();
        // newVar(b);
        this->current =this->current+ b;
        //  if (this.current > this->end){
        //          this->current = this.current % (b.end - b.start +1);
        // // }
        // cout << &b << " hours after " << *this << endl;
        return (*this);
 }

 CircularInt& CircularInt::operator-=(const int& other) {}
CircularInt& CircularInt::operator*=(const int& mult) {
    return *this;
}
const CircularInt operator / (const CircularInt& a,const int& div){ 
       CircularInt ans(1,12);
    return ans;
}

const CircularInt operator - (const int a, const CircularInt& other){
    CircularInt ans(1,12);
}

const CircularInt operator + (const CircularInt& a, const CircularInt& b){
    CircularInt ans(1,12);
    return ans;
}

int CircularInt::operator++(int){
    return 3;
}
CircularInt& CircularInt::operator++(){
    return *this;
}
// int CircularInt::operator--(int){}
// CircularInt& CircularInt::operator--(){}
 int CircularInt::operator-() {
     return 5;
 }
// CircularInt& CircularInt::operator =(const CircularInt& other){}
// CircularInt& CircularInt::operator =(const int& other){}
// CircularInt& CircularInt::operator*=(const int& mult) {}
// CircularInt& CircularInt::operator/=(const int& div) {}

// CircularInt& CircularInt :: operator ++ (){
//     this->current=this->current++;
//     return *this;
// }



//  CircularInt& CircularInt :: operator + (const CircularInt &b){
//      CircularInt ans;
//     ans=this->current+b->current;
//     return ans;
//  }

 ostream& operator <<(ostream& os, const CircularInt& b){
     os<< b.current;
     return os;
 }
const CircularInt operator+(const int a,const CircularInt& b){
CircularInt ans(1,12);
    return ans;
}

// CircularInt (const CircularInt& b){
//         newVar();
// }
// ~CircularInt (const CircularInt& b){
//         clear();
// }
// void clear (){
        
// }
// void newVar(){

// }

// }
// CircularInt CircularInt :: operator + (const int &b){
       
//         CircularInt ans;
//         ans.current = this.current + b;
//         // if (ans.x > b.end || ans.x < b.start){
//         //         ans.x = x % (b.end - b.start +1);
//         // }
//         //  cout << x << " hours after " << &b << endl;
//         return ans;
// }
// CircularInt& CircularInt :: operator *= (const CircularInt &b){
//         int x = *this;
//         x *= b.x;
//         if (x > b.end || x < b.start){
//                 x = x % (b.end - b.start +1);
//         }
        
//         return *this;
// }
// CircularInt& CircularInt :: operator -= (const CircularInt &b){
//         int x = *this;
//         x -= b.x;
//         if (x > b.end || x < b.start){
//                 ans.x = x % (b.end - b.start +1);
//         }
//         return *this;
// }
// CircularInt CircularInt :: operator - (const CircularInt &b){
//         int x = *this;
//         CircularInt ans;
//         ans.x = this->x - b.x;
//         if (ans.x > b.end || ans.x < b.start){
//                 ans.x = x % (b.end - b.start +1);
//         }
//         return ans;
// }


// CircularInt& operator ++ (){ //++prefix
//         int x = *this;
//         ++x;
//         if (x > b.end || x < b.start){
//                 ans.x = x % (b.end - b.start +1);
//         }
//         return *this;
// }
// CircularInt operator ++ (int){//postfix++
//         CircularInt ans = *this;
        
//         ++x;
//         if (x > b.end || x < b.start){
//                 ans.x = x % (b.end - b.start +1);
//         }
//         return ans;
// }

