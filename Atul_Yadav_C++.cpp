#include<iostream>
long int mdex(int,int,int);
 int main()
 {
     int x,y,p;
     long int rs;
     std::cout<<"enter threee no for modulus exponentiation";
//input
     std::cin>>x>>y>>p;
//calling function
     rs=mdex(x,y,p);
//result
     std::cout<<x<<"^"<<y<<"%"<<p<<"="<<rs;
    
 }
// function for modulus exponentiation 
long int mdex(int x,int y,int p)
{
    long int k=1;
    while(y)
    {
        k=k*x;
        --y;
    }
    return k%p;
}
