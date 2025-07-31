#include<iostream>
using namespace std;

void leftRotateByone(int arr[] , int n){
    int temp = arr[0];
    int i = 1;
    while(i<n){
        arr[i-1] = arr[i];
        i++;
    }
    arr[n-1] = temp;
       
        
}


void input(int arr[] , int n){
    cout << "Enter array elements: ";
    for(int  i = 0 ; i<n ; i++){
        cin >> arr[i];
    }
}

void printArray(int arr[] , int n){
    cout << "Array elements are: ";
    for(int i = 0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
}


int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    int arr[n];
    cout << endl;
    input(arr,n);
    printArray(arr,n);
    cout << endl;
    leftRotateByone(arr,n);
    cout << "After rotating by one place: " << endl;
    printArray(arr,n);

}