#include<iostream>
using namespace std;

int largest_ele(int arr[] , int n){
    int max = -1;
    for(int i = 0 ; i<n ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
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
    cout << "Largest element is : ";
    cout << largest_ele(arr,n);

}