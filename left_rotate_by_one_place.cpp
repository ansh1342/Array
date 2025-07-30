#include<iostream>
using namespace std;

void rotateByOnePlace(int arr[] , int n){
    for(int i = 0 ; i<n-1 ; i++){
        swap(arr[i] , arr[i+1]);

    }
    
}

void input(int arr[] , int n){
    cout << "Enter array elements: " << endl;
    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }
}

void printArray(int arr[] , int n){
    cout << "Array elements are: " << endl;
    for(int i = 0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    input(arr,n);
    printArray(arr,n);
    cout << endl;
    cout << "After rotating by one place ";
    rotateByOnePlace(arr,n);
    printArray(arr,n);

}