#include<iostream>
#include<vector>
using namespace std;
void inputArray(vector<int>&arr){           //input the array elements using for loop
    int n = arr.size(); // find the lenth of the array by using SIZE function
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
}
void swapArray(vector<int>&arr){           // swapping the array
    int n = arr.size();
    for(int j = 0;j<n/2;j++){
        swap(arr[j],arr[n-j-1]);           // swapping the array by using SWAP function
    }
}
void printArray(const vector<int>&arr){     // print the swapped array
    cout<<"Swapping Array: ";
    for(int val: arr){
        cout<<val<<" ";
    }
cout<<"\n";
}
int main(){
    cout<<"enter the size of an array: ";
    int n;
    cin>>n;
    vector<int>arr(n);
    inputArray(arr);            // call the inputArray function
    swapArray(arr);             // call the swapArray function
    printArray(arr);            // call the printArray function
    return 0;
}
