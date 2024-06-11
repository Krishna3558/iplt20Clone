#include<iostream>
#include<climits>

using namespace std;

void merge( int arr[] , int i , int j){

    int mid = ( i + j )/2;

    int const n1 = mid - i + 1;

    int const n2 = j - mid;

    auto * arr1 = new int[n1];

    auto * arr2 = new int[n2];

    for ( int  a=0 ; a<n1 ; a++){
        arr1[a] = arr[ a + i ];
    }

    for ( int a =0 ; a < n2 ; a++){
        arr2[a] = arr[ mid + a + 1 ];
    }

    int l = 0;

    int r = 0;

    int m = i;

    while ( l < n1 && r < n2 ){
        if ( arr1[l] < arr2[r] ){
            arr[m] = arr1[l];
            m++;
            l++;
        }

        else{
            arr[m] = arr2[r];
            m++;
            r++;
        }
    }

    while ( l < n1 ){
        arr[m] = arr1[l];
        m++;
        l++;
    }

    while( r < n2 ){
        arr[m] = arr2[r];
        m++;
        r++;
    }

}

void mergesort(int arr[] , int i, int j){

    if ( i >= j ){
        return ;
    }

    int mid = ( i + j )/2;

    mergesort( arr , i , mid);

    mergesort( arr , mid +1 , j);

    merge( arr , i , j);

}

int main(){

    int arr[8] = {2 , 4 , 1 , 7 , 5 , 6 , 3 , 8};

    mergesort(arr , 0 , 7);

    for ( int i=0 ; i<8; i++){
        cout<<arr[i]<<endl;
    }
}