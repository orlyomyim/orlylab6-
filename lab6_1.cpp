#include<iostream>
using namespace std;

int main()
{
    int number = 1 ;
    int x = 0 ;
    int y = 0 ;
    cout << "Enter an integer: " ;
    cin >> number ;
    
    while (number != 0)
    {
        if(number%2 == 0){
        x += 1 ;
        }
        else{
        y +=1 ;    
        }
        
        cout << "Enter an integer: " ;
        cin >> number ; 
    }
    cout << "#Even numbers = " << x <<"\n" ;
    cout << "#Odd numbers = " << y ;
    
    return 0;
}