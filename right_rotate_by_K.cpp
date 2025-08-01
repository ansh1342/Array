#include<iostream>
using namespace std;

void rotateByK(int arr[] , int n , int k){
    int i = 1;
    while(i<=k){
        int temp = arr[n-1];
        int j = n-2;
        while(j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[0] = temp;
        i++;
    }
}

void input(int arr[] , int n){
    cout << "Enter array elements: ";
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }
}

void printArray(int arr[] , int n){
    cout << endl;
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
    int k;
    cout << "Enter steps: ";
    cin >> k;
    rotateByK(arr,n,k);
    cout << endl;
    printArray(arr,n);

}