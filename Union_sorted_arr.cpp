#include<iostream>
#include<set>
using namespace std;

void union_array(int arr1[] , int arr2[] , int n1 , int n2){
    set<int>st;
    for(int i = 0 ; i<n1 ; i++){
        st.insert(arr1[i]);
    }
    for(int j = 0 ; j<n2 ; j++){
        st.insert(arr2[j]);
    }

    cout << "Union of two array is: ";
    for(auto it:st){
       cout << it << " ";
    }
    cout << endl;

}



int main(){
    int arr1[5] = {1,2,3,4,5};
    int arr2[4] = {1,2,7,7};
    union_array(arr1,arr2,5,4);
}