#include <iostream>
#include <string>
using namespace std;

/*1 CHECK_CHAR_IN_SENTENCE 
int main(){
    string a, b;
    cout<<"Input a sentence: ";
    getline(cin, a);
    cout <<"Search character: ";
    getline(cin, b);
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i]==b[0])
        {
            cout<<"Character exist";
            i=a.length();   
        }
    }
}
*/

/*2 SEARCH_INDEX_CHAR_IN_SENTENCE 
int main(){
    string a,b;
    cout<<"Input a sentence: ";
    getline(cin, a);
    cout <<"Search character: ";
    getline(cin, b);
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i]==b[0])
        {
            cout<<"Index number: "<<i<<endl;   
        }
    }
}
*/

/*3 SEARCH_TOTAL_CHAR_IN_SENTENCE 
int main(){
    int c=0;
    string a,b;
    cout<<"Input a sentence: ";
    getline(cin, a);
    cout <<"Input a character search: ";
    getline(cin, b);
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i]==b[0])
        {
            c++;
        }
    }
    cout<<"Total character: "<<c;
}
*/

/*4 SEARCH_ODD/EVEN_IN_ARRAY 
int main(){
    int a[100],c;
    string b;

    cout<<"How many number?: ";
    cin>>c;
    cout<<"Input a number: "<<endl;
    for (int i = 0; i < c; i++)
    {
        cin>>a[i];
    }
    cout <<"Search odd/even number?: ";
    cin>>b;
    for (int j = 0; j < c; j++)
    {
        if (b=="even"){
            if (a[j]%2==0)
            {
                cout<<a[j];
			}
        } else if(b=="odd"){    
            if (a[j]%2==1)
            {
                cout<<a[j];
            }
        }
    }
}
*/

/*5 SEARCH_TOTAL_ODD/EVEN_IN_ARRAY
int main(){
    int a[100],c,d=0;
    string b;

    cout<<"How many number?: ";
    cin>>c;
    cout<<"Input a number: "<<endl;
    for (int i = 0; i < c; i++)
    {
        cin>>a[i];
    }
    cout <<"Search odd/even number?: ";
    cin>>b;
    for (int j = 0; j < c; j++)
    {
        if (b=="even"){
            if (a[j]%2==0)
            {
                d++;
            }
        }else if(b=="odd"){    
            if (a[j]%2==1)
            {
                d++;
            }
        }
    }
    cout<<"Total: "<<d;
}
*/

/*6 CHECK_ODD/EVEN_IN_ARRAY
int main(){
    int a[100],c;
    string b;

    cout<<"How many number?: ";
    cin>>c;
    cout<<"Input a number: "<<endl;
    for (int i = 0; i < c; i++)
    {
        cin>>a[i];
    }
    cout <<"Search odd/even number?: ";
    cin>>b;
    for (int j = 0; j < c; j++)
    {
        if (b=="even"){
            if (a[j]%2==0)
            {
                cout<<"Exist";
                j=c;
			}
        }else if(b=="odd"){    
            if (a[j]%2==1)
            {
                cout<<"Exist";
                j=c;
            } 
        }
    }
}
*/

/*7 SEARCH_INDEX_NUMBER_IN_ARRAY 
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
*/

/*8 SEARCH_TOTAL_WORD_IN_SENTENCE 
int main()
{
    int s=0;
    string a, b;
    cout<<"Input a sentence: ";
    getline(cin, a);
    cout<<"Input a word to search: ";
    getline(cin, b);
    for (int i = 0; i < a.length(); i++)
    {
        int k=0;
        if (a[i]==b[k])
        {
            if(k+1==b.length()){
                s++;
            }
            else
            {
                for (int j = 0; j < b.length(); j++)
                {
                    if(a[i+j]==b[k+j]){
                        if (j==b.length()-1)
                        {
                            s++;
                        }
                    }
                    else{
                        j=b.length();
                    }
                }
            }
            k++;
        }
    }
    cout<<"Total word in a sentence: "<<s;
}
*/

/*9 CHECK_WORD_IN_SENTENCE 
int main()
{
    int s=0;
    string a, b;
    cout<<"Input a sentence: ";
    getline(cin, a);
    cout<<"Input a word to search: ";
    getline(cin, b);
    for (int i = 0; i < a.length(); i++)
    {
        int k=0;
        if (a[i]==b[k])
        {
            if(k+1==b.length()){
                cout<<"index: "<<i;
                i=a.length();
            }
            else
            {
                for (int j = 0; j < b.length(); j++)
                {
                    if(a[i+j]==b[k+j]){
                        if (j==b.length()-1)
                        {
                            cout<<"Exist";
                            j=b.length();
                            i=a.length();
                        }               
                    }
                    else{
                        j=b.length();
                    }
                }
            }
            k++;
        }
    }
}*/

//10 SEARCH_INDEX_WORD_IN_SENTENCE 

int main()
{
    int s=0;
    string a, b;
    cout<<"Input a sentence: ";
    getline(cin, a);
    cout<<"Input a word to search: ";
    getline(cin, b);
    for (int i = 0; i < a.length(); i++)
    {
        int k=0;
        if (a[i]==b[k])
        {
            if(k+1==b.length()){
                cout<<"index: "<<i;
            }
            else
            {
                for (int j = 0; j < b.length(); j++)
                {
                    if(a[i+j]==b[k+j]){
                        if (j==b.length()-1)
                        {
                            cout<<"\nIndex: "<<i<<endl;
                        }
                    }
                    else{
                        j=b.length();
                    }
                }
            }
            k++;
        }   
    }
}

