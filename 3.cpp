#include<iostream>

using namespace std;

int main(){
    string n; 
    cout<<"enter th rows";
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j < i){
                cout<<" \t";
            }else{
                cout<<"*\t";
            }
        }
        cout<<"\n";
    }
    return 0;
}

/*
OUTPUT:
5
*       *       *       *       *
        *       *       *       *
                *       *       *
                        *       *
                                *
*/