#include<iostream>
 int mdex(int,int,int);
 int main()
 {
     int x,y,p;
      int rs;
     std::cout<<"enter threee no for modulus exponentiation";
//input
     std::cin>>x>>y>>p;
//calling function
     rs=mdex(x,y,p);
//result
     std::cout<<x<<"^"<<y<<"%"<<p<<"="<<rs;
    
 }
// function for modulus exponentiation 
int mdex(int x,int y,int p)
{
    int k=1;
    while(y)
    {
        k=k*x;
        k=k%p;
        --y;
    }
    return k;
}
