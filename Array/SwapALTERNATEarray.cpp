#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // Swapping alternate elements
    for(int i=0; i<n-1; i+=2){ //n-1 hum is liye likhe hai ki agar n odd hai to last element ko swap karne ki zarurat nahi hai, aur agar n even hai to last element ko swap karne ki zarurat hai
        swap(arr[i], arr[i+1]);
    }   
    cout<<"The array after swapping alternate elements is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}