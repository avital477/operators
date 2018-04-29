#include <iostream>
using namespace std;
#include "CircularInt.hpp"



int CircularInt::nirmul(int x, int start, int end){
    int xNormal=x;
    
    while(xNormal>end){
         xNormal=xNormal-end+start-1;
    }
    
    while(xNormal<start){
        xNormal= xNormal+end-start+1;
    }
    
    return xNormal;
}

CircularInt& CircularInt :: operator = ( const int& b){
 this->current =nirmul( b, this->start, this->end);
        return *this;
}
CircularInt& CircularInt :: operator = ( const CircularInt& b){
 this->current =nirmul( b.current, this->start, this->end);
        return *this;
}


  CircularInt& CircularInt :: operator += (const int& b){
        this->current =nirmul(this->current+ b, this->start, this->end);
        return *this;
 }
 CircularInt& CircularInt :: operator += (const CircularInt& b){
     this->current =nirmul(this->current+ b.current, this->start, this->end);
        return *this;
 }

CircularInt& CircularInt :: operator -= (const CircularInt& b){
     this->current =nirmul(this->current- b.current, this->start, this->end);
        return *this;
 }


 CircularInt& CircularInt::operator-=(const int& other) {
      this->current =nirmul(this->current-other.current, this->start, this->end);
         return *this;
 }


CircularInt& CircularInt::operator*=(const int& mult) {
    this->current=nirmul(this->current*mult,this->start, this->end);
    return *this;
}

CircularInt& CircularInt::operator*=(const CircularInt& other) {
    this->current=nirmul(this->current*other.current,this->start, this->end);
    return *this;
}


int CircularInt::operator++(int){
    this->current =nirmul(this->current+ 1, this->start, this->end);
    return this->current;
}
CircularInt& CircularInt::operator++(){
     this->current =nirmul(this->current+ 1, this->start, this->end);
    return *this;
}

 int CircularInt::operator-() {
     int ans= nirmul(this->end -this->current,this->start, this->end);
     return ans;
 }



const CircularInt operator / (const CircularInt& a,const int& div){ 
    if(div!=0){
       CircularInt ans(a.start,a.end);
       for(int i=ans.start; i<=ans.end; i++){
           if((div*i)==a.current){
                ans.current=i;
                return ans;
           }
       }
    }
    string ans;
    if(div==0)
        ans="div=0";
    else{
        ans="There is no number x in {"+std::to_string(a.start)+","+std::to_string(a.end)+"} such that x*"+std::to_string(div)+"="+std::to_string(a.current); 
    }
    throw ans;
}


const CircularInt operator / (const int& a,const CircularInt& div){ 
    if(div.current!=0){
       CircularInt ans(div.start,div.end);
       for(int i=ans.start; i<=ans.end; i++){
           if((div.current*i)==a){
                ans.current=i;
                return ans;
           }
       }
    }
    string ans;
    if(div.current==0)
        ans="div=0";
    else{
        ans="There is no number x in {"+std::to_string(a)+","+std::to_string(a)+"} such that x*"+std::to_string(div.current)+"="+std::to_string(a); 
    }
    throw ans;
}




const CircularInt operator / (const CircularInt& a,const CircularInt& div){ 
    if(div.current!=0){
       CircularInt ans(a.start,a.end);
       for(int i=ans.start; i<=ans.end; i++){
           if((div.current*i)==a.current){
                ans.current=i;
                return ans;
           }
       }
    }
    string ans;
    if(div.current==0)
        ans="div=0";
    else{
        ans="There is no number x in {"+std::to_string(a.start)+","+std::to_string(a.end)+"} such that x*"+std::to_string(div.current)+"="+std::to_string(a.current); 
    }
    throw ans;
}




 ostream& operator <<(ostream& os, const CircularInt& b){
     os<< b.current;
     return os;
 }

 istream& operator <<(istream& os, const CircularInt& b){
     int temp;
     is>> temp;
     b.current =nirmul( temp, b.start, b.end);
     return is;
 }


const CircularInt operator+(const int a,const CircularInt& b){
CircularInt ans(b.start,b.end);
ans.current=ans.nirmul(a+b.current,ans.start,ans.end);
    return ans;
}

const CircularInt operator + (const CircularInt& a, const CircularInt& b){
    CircularInt ans(a.start,a.end);
    ans.current=ans.nirmul(a.current+b.current,ans.start,ans.end);
    return ans;
}
const CircularInt operator+(const CircularInt& b,const int a){
CircularInt ans(b.start,b.end);
ans.current=ans.nirmul(a+b.current,ans.start,ans.end);
    return ans;
}


const CircularInt operator - (const int a, const CircularInt& other){
    CircularInt ans(other.start,other.end);
   
    ans.current=ans.nirmul(a-other.current,other.start,other.end);
    return ans;
}

const CircularInt operator - (const CircularInt& other, const int a){
    CircularInt ans(other.start,other.end);
    ans.current=ans.nirmul(other.current-a,other.start,other.end);
    return ans;
}

const CircularInt operator - (const CircularInt& a, const CircularInt& b){
    CircularInt ans(a.start,a.end);
    ans.current=ans.nirmul(a.current-b.current,a.start,a.end);
    return ans;
}

const CircularInt operator * (const CircularInt& a, const CircularInt& b){
    CircularInt ans(a.start,a.end);
    ans.current=ans.nirmul(a.current*b.current,a.start,a.end);
    return ans;
}

const CircularInt operator * (const int& a, const CircularInt& b){
    CircularInt ans(b.start,b.end);
    ans.current=ans.nirmul(a*b.current,b.start,b.end);
    return ans;
}

const CircularInt operator * (const CircularInt& a, const int& b){
    CircularInt ans(a.start,a.end);
    ans.current=ans.nirmul(b*a.current,a.start,a.end);
    return ans;
}





