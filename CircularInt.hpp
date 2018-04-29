using namespace std;
#pragma once
#include <iostream>

class CircularInt{
public:
    int start;
    int end;
    int current;

     CircularInt (int s, int e){
        start = s;
        end = e;
        current = s;
    }
    // CircularInt operator () (int x, int y);
     CircularInt&  operator += (const int &b);
     CircularInt& operator-=(const int& other);
    CircularInt& operator*=(const int& mult);

    int operator-();
    int operator++(int);     
     CircularInt& operator ++ ();
     CircularInt&  operator + (const CircularInt &b);


    
    // CircularInt operator - (const CircularInt &b);
    
    // CircularInt& operator ++ ();
    // CircularInt operator ++ (int);
   // };
   // ~CircularInt();


};
 ostream& operator <<(ostream& os, const CircularInt& b);
 const CircularInt operator+(const int a,const CircularInt& b);
  const CircularInt operator / (const CircularInt& a,const int& div);
  const CircularInt operator - (const int a,const CircularInt& other);
const CircularInt operator + (const CircularInt& a,const CircularInt& b);