#include<iostream>
#include<set>
using namespace std;

int removeDuplicates(int arr[] , int n){
    set<int>st;
    for(int i = 0 ; i<n ; i++){
        st.insert(arr[i]);
    }

    int index = 0;
    for(auto it:st){
        arr[index] = it;
        index ++;
    }

    return index;


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