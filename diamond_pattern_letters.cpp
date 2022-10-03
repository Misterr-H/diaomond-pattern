#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    int ch;
    cout<<"Enter your choice to print diamond shape\n";
    cout<<"1. *\n2. +\n3. $\n4. Your own choice\n";
    cin>>ch;
    char h;
    switch(ch)
    {
        case 1:
                h='*';
                
                break;
        case 2:
                h='+';
                
                break;
        case 3:
                h='$';
                
                break;
        case 4:
                cout<<"Enter your symbol/alphabet\n";
                cin>>h;
                
                break;
    }
    int space;
    
    int c, i,j;
    space = n - 1;
    for(i = 1; i<=n; i++)
    {
        for (j = 1; j<=space; j++)
            cout<<" ";
        space--;
        for (j = 1; j<= 2*i-1; j++)
            cout<<h;
            cout<<"\n";
    }
    space = 1;
    for(i = 1; i<= n - 1; i++)
    {
        for (j = 1; j<= space; j++)
            cout<<" ";
        space++;
        for (j = 1 ; j<= 2*(n-i)-1; j++)
            cout<<h;
        cout<<"\n";
    }
    return 0;
}
