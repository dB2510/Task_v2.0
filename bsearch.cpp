
#include <algorithm> 
#include <iostream> 
  
using namespace std; 
  
int main() 
{ 
//receiving number of elements and the array
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    { cin>>a[i];
    }
//receiving the number to be searched
    int x;
    cin>>x; 
//using STL to sort the array 
    sort(a, a + n); 
//built in binary search algorithm to search for the element
    if (binary_search(a, a + 10, x)) 
        cout << "\nElement found in the array"; 
    else
        cout << "\nElement not found in the array"; 
  
    return 0; 
} 
