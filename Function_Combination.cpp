#include <iostream>
using namespace std;
int fact(int n) {
   if (n == 0 || n == 1)
   return 1;
   else
   return n * fact(n - 1);
}
int main() {
   int n, r, result;
   cout<<"Enter n : ";
   cin>>n;
   cout<<"\nEnter r : ";
   cin>>r;
   result = fact(n) / (fact(r) * fact(n-r));
   cout << "\nThe result : " << result;
   return 0;
}
