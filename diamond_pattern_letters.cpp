#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=1; i<=(n-1)*2 + 1; i++) {
        for(int j=1; j<=(n-1)*2 + 1; j++) {
            if(n-i-j>=0 || j>n && j-i>n-1 || i>n && n-(i-(i-n)*2)-j>=0 || i>n && j>n && j-(i-(i-n)*2)>=n) {
                cout<<" ";
            }
            else 
            if(j>n && abs(j)-i<=n-1) {
                cout<<char('Z'-abs(n-j));
            }
            else 
            cout<<char('Z'-(n-j));
        }
        cout<<endl;
    }

    return 0;
}