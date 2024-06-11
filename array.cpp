#include<iostream>

using namespace std;

int main(){

    int s;
    cin>>s;

    int a[s];

    for (int i=0; i<s; i++){
        cin>>a[i];
    }

    for(int i=0; i<s; i++){
        int c=0;
        for(int j=i; j<s; j++){
            c+=a[j];
            cout<<"The count of the subarray: ";
            cin>>c;
            cout<<endl;
        }
    }
}