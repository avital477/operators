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
    CircularInt& operator = ( const int& b);
    CircularInt& operator = ( const CircularInt& b);
     CircularInt&  operator += (const int &b);
     CircularInt&  operator += (const CircularInt& b);
     CircularInt& operator-=(const int& other);
     CircularInt&  operator -= (const CircularInt& b);
    CircularInt& operator*=(const int& mult);
    CircularInt& operator*=(const CircularInt& other);

    int operator-();
    int operator++(int);     
    CircularInt& operator ++ ();
    
    int nirmul(int x, int start, int end);
    //global
     friend istream& operator <<(istream& is, const CircularInt& b);
    friend ostream& operator <<(ostream& os, const CircularInt& b);


friend const CircularInt operator / (const int& a,const CircularInt& div);
friend const CircularInt operator / (const CircularInt& a,const int& div);
friend const CircularInt operator / (const CircularInt& a,const CircularInt& div);


friend const CircularInt operator + (const CircularInt& a,const CircularInt& b);
friend const CircularInt operator + (const int a,const CircularInt& b);
friend const CircularInt operator + (const CircularInt& b,const int a);

friend const CircularInt operator - (const int a,const CircularInt& other);
friend const CircularInt operator - (const CircularInt& other, const int a);
friend const CircularInt operator - (const CircularInt& a, const CircularInt& b);


};

istream& operator >>(istream& is, const CircularInt& b);
ostream& operator <<(ostream& os, const CircularInt& b);


const CircularInt operator / (const int& a,const CircularInt& div);
const CircularInt operator / (const CircularInt& a,const int& div);
const CircularInt operator / (const CircularInt& a,const CircularInt& div);


const CircularInt operator + (const CircularInt& a,const CircularInt& b);
const CircularInt operator + (const int a,const CircularInt& b);
const CircularInt operator + (const CircularInt& b,const int a);

const CircularInt operator - (const int a,const CircularInt& other);
const CircularInt operator - (const CircularInt& other, const int a);
const CircularInt operator - (const CircularInt& a, const CircularInt& b);








