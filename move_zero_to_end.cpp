#include<iostream>
using namespace std;

void moveZeroEnd(int arr[] , int n){
    int pos = 0;
    for(int i = 0 ; i<n ; i++){
        if (arr[i] != 0){
            arr[pos] = arr[i];
            pos += 1;
        }
    }
    for(int i = pos ; i<n ; i++){
        arr[i] = 0;
    }
}

void input(int arr[] , int n){
    cout << "Enter array elements: ";
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
}

void printArray(int arr[] , int n){
    cout << "Array elements are: ";
    for(int i = 0; i<n ; i++){
        cout << arr[i] << " ";
    }
    
}


int main(){
    int n;
    cout << "Enter number of element: ";
    cin >> n;
    int arr[n];
    input(arr,n);
    printArray(arr,n);
    cout << endl;
    moveZeroEnd(arr,n);
    printArray(arr,n);

}