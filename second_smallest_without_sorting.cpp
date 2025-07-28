#include<iostream>
using namespace std;
int sec_largest(int arr[] , int n){
    int smallest = arr[0];
    int sec_smallest = INT16_MAX;
    for(int i = 1 ; i < n ; i++){
        if (arr[i] < smallest){
            sec_smallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > smallest && arr[i] < sec_smallest){
            sec_smallest = arr[i];
        }
    }
    return sec_smallest;
}

void input(int arr[] , int n){
    cout << "Enter array elements: ";
    for(int i = 0 ; i<n ; i++){
        cin >> arr[i];
    }
}

void printArray(int arr[] , int n){
    cout << "Given array is : ";
    for(int i = 0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    input(arr,n);
    printArray(arr,n);
    cout << endl;
    cout << "Second largest element is: ";
    cout << sec_largest(arr,n);
}