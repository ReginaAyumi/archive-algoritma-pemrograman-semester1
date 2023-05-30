#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a[100],b, c;

    cout<<"How many number?: ";
    cin>>c;
    cout<<"Input number: "<<endl;
    for (int i = 0; i < c; i++)
    {
        cin>>a[i];
    }
    cout<<"\nSearch number: ";
    cin>> b;
    
    for (int i = 0; i < c; i++)
    {
        if (a[i]==b)
        {
            cout<<"\nIndex number: "<<i;
        }
    }
}
