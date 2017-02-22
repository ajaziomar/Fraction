#include <iostream>
#include "Fraction.h"
using namespace std;
using namespace sict;

int main(){
    
    fraction fraction;
   
    
    int num;
    int den;
    
    cout << "Fraction App";
    cout << "============" << endl;
    
    cout << "Numerator :";
    cin >> num;
    
    cout << "Denominator :";
    cin >> den;
    
    fraction.set(num,den);
    fraction.simplify();
    fraction.display();
    cout << endl;
    
    
}


void fraction::set(int n, int d){
    int numer = n;
    int denomer = d;
}

void fraction::simplify(){
    
    int numer;
    int denomer;
    
    for (int i = denomer; i>1; i--){
        if ((numer % i == 0)&&(denomer % i == 0)){
            
            numer = numer/i;
            denomer = denomer/i;
        }
        
        
    }
    
    
}

void fraction::display() const{
    
    int numm;
    int denn;
    cout << numm<< "/" <<denn;
}