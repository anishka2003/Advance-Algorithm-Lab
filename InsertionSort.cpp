#include<iostream>
using namespace std;

int main()
{   

    int n;
    cin>>n;

    int arr[n];
    for (int i =0;i<n;i++){
        cin>>arr[i];
    }

    //The array should be iterated over from arr[1] to arr[N]. 

    for(int i=1;i<=n;i++){
        int current_number=arr[i];
        int j=i-1;

    //Comparing the current number to the previous one.
    //Compare the current number to the previous elements to see if it is smaller. 
    //In order to make room for the substituted element, move the larger elements up one position.
        while(j>=0 && arr[j]>current_number){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current_number;
    }
    //to print an array of size n
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}