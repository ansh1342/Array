#include<iostream>
using namespace std;

int removeDuplicates(int arr[] , int n){
    int i = 0;
    for(int j = 1; j<n ; j++){
        if (arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;


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
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    input(arr,n);
    printArray(arr,n);
    cout << endl;
    cout << "Number of unique elements are: " << removeDuplicates(arr,n);
}