#include<iostream>
#include<climits>

using namespace std;

int main(){

    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int c=0;

    for(int i=0; i<n; i++){
        if(a[i]==1){
            c++;
        }
    }

    const int N = 1e6 + 2;

    int sam[N];

    for(int i=0; i<N; i++){
        sam[i]=0;
    }

    for(int i=n-c; i<n; i++){
        sam[i]=1;
    }

    for(int i=0; i<n; i++){
        cout<<sam[i]<<" ";
    }
    
    return 0;

}