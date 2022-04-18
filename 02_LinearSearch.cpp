#include<iostream>
using namespace std;

int linearSearch(int * arr, int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {


    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cin>>key;

    int index = linearSearch(arr, size, key);
    
    if(index != -1) {
        cout<< key << "is present at index "<< index << endl;
    } else {
        cout<< key << "is Not Found !! "<< endl;
    }
    

    return 0;
}