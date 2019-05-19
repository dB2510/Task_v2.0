// c++ prog to implement modular expiation
    #include <iostream>
    #define ll long long
    using namespace std;


    ll modular_pow(ll base, ll exp ,ll mod){
        
        ll result = 1;
        while (exp > 0)
        {
            if (exp % 2 == 1)
                result = (result * base) % mod;
            exp = exp/2;
            base = (base * base) % mod;
        }
        return result;

    }

    int main()
    {
        ll x, y,mod;
        cout<<"Enter Base Value: ";
        cin>>x;
        cout<<"Enter exponent: ";
        cin>>y;
        cout<<"Enter Modular Value: ";
        cin>>mod;
        cout<<modular_pow(x, y , mod);
        return 0;

    }
