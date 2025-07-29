#include<iostream>
using namespace std;
// bool ifsorted(int arr[] , int n){
//     int a = arr[0];
//     for(int i = 1; i<n ; i++){
//         if(arr[i] > a){
//             a = arr[i];
//         }
//         else{
//             return false;
//         }
//     }
//     return true;
// }

bool ifsorted(int arr[] , int n){
    for(int i = 1; i<n ; i++){
        if(arr[i] < arr[i-1]){
            return false;
        }
    }
    return true;
}

void input(int arr[] , int n){
    cout << "Enter array elements: " << endl;
    for(int i = 0; i<n ; i++){
        cin >> arr[i];
    }
}

void printArray(int arr[] , int n){
    cout << "Given array is : " << endl;
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
    if (ifsorted(arr,n)){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
    


}