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
         if (this->current > this->end){
                 this->current = this->current % (this->end - this->start +1);
         }
        // cout << &b << " hours after " << *this << endl;
        return *this;
 }

 CircularInt& CircularInt::operator-=(const int& other) {}
CircularInt& CircularInt::operator*=(const int& mult) {
    this->current=this->current*mult;
   if (this->current > this->end){
                 this->current = this->current % (this->end - this->start +1);
   }
    return *this;
}



const CircularInt operator / (const CircularInt& a,const int& div){ //לא עשיתי
       CircularInt ans(a.start,a.end);
    return ans;
}



const CircularInt operator - (const int a, const CircularInt& other){
    CircularInt ans(other.start,other.end);
    int temp= a-other.current;
    if(temp<0)
        temp= ans.end-(-temp%((ans.end - ans.start +1)));
    ans.current=temp;
     if (ans.current > ans.end){
                 ans.current = ans.current % (ans.end - ans.start +1);
         }
    return ans;
}
//12-(-ans%12)

const CircularInt operator + (const CircularInt& a, const CircularInt& b){
    CircularInt ans(a.start,a.end);
    ans.current=a.current+b.current;
    return ans;
}


int CircularInt::operator++(int){
    this->current=this->current+1;
     if (this->current > this->end){
                 this->current = this->current % (this->end - this->start +1);
         }
    return this->current;
}
CircularInt& CircularInt::operator++(){
    this->current=this->current+1;
     if (this->current > this->end){
                 this->current = this->current % (this->end - this->start +1);
         }
    return *this;
}
// int CircularInt::operator--(int){}
// CircularInt& CircularInt::operator--(){}
 int CircularInt::operator-() {
     int ans= (this->end -this->current);
     if (ans > this->end){
                 ans = ans % (this->end - this->start +1);
         }
     return ans;
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

