#include<iostream>

using namespace std;

void p11(){
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i;j++)
            cout<<"* ";
        cout<<endl;
    }
}

void p12(){ 
// *****
// ****
// ***
// **
// * 
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=5; j>=i;j--)
            cout<<"*";
        cout<<endl;
    }
}

void p13(){
// *
// **
// ***
// ****
// *****
// *****
// ****
// ***
// **
// *
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i;j++)
            cout<<"*";
        cout<<endl;
    }
    n-1;
    for(int i=1;i<=n;i++){
        for(int j=5; j>=i;j--)
            cout<<"*";
        cout<<endl;
    }
}

void p14()
{
//     *
//    **
//   ***
//  ****
// *****
    int n=5;
    int l=n;
    for(int i=1;i<=n;i++){
        for(int k=l-1; k>=1;k--)
                cout<<" ";
        l--;
        for(int j=1; j<=i;j++)
        {
            
            cout<<"*";
        }
        
        cout<<endl;
    }
}

void p15(){
// 1 2 3 
// 1 2 3 
// 1 2 3 
    int n=3;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=3;j++)
            cout<<j<<" ";
        cout<<endl;
    }
}

void p6(int n){
// 3 3 3 
// 2 2 2 
// 1 1 1  
    for(int i=3;i>=1;i--){
        for(int j=1; j<=3;j++)
            cout<<i<<" ";
        cout<<endl;
    }
}

void p7(int n){
// A A A 
// B B B 
// C C C 
    char A='A';
    for(int i=1;i<=3;i++){
        for(int j=1; j<=3;j++)
            cout<<A<<" ";
        A=A+1;
        cout<<endl;
    }
}

void p8(){
// A B C 
// A B C 
// A B C 
    char A='A';
    for(int i=1;i<=3;i++){
        for(int j=1; j<=3;j++)
        {
            cout<<A<<" ";
            A=A+1;
        }
        A='A';
        
        cout<<endl;
    }
}

void p9(){
// A B C 
// D E F 
// G H I
    char A='A';
    for(int i=1;i<=3;i++){
        for(int j=1; j<=3;j++)
        {
            cout<<A<<" ";
            A=A+1;
        }
        
        cout<<endl;
    }
}

void p10(){
// C C C 
// B B B 
// A A A
    char A='C';
    for(int i=3;i>=1;i--){
        for(int j=1; j<=3;j++)
        {
            cout<<A<<" ";
        }
        A=A-1;
        cout<<endl;
    }
}

int main(){
    int i,n=3;
    cout<<endl;
    p15();
    return 0;
}