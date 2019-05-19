//Code for modular exponentiation

#include<bits/stdc++.h>

using namespace std;

long modExp(long x, long  y, long z)
{
    long a;
    if (x == 0)
        return 0;
    if (y == 0)
        return 1;



    if (y % 2 == 0) {
        a = modExp(x, y / 2, z);
        a = (a * a) % z;
    }


    else {
        a = x % z;
        a = (a * modExp(x, y - 1, z) % z) % z;
    }

    return ((a + z) % z);
}


int main()
{
   long int x,y,z;

   cout<<"\nEnter three numbers\n";
   cin>>x>>y>>z;
   cout<<"The required result is:"<<modExp(x,y,z);
   return 0;
}