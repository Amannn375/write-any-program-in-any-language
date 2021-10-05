#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int linear_search(int arr[], int n, int x) {
    int i;
    for (i=0; i<n; i++)
        if (arr[i] == x)    // Check each element of the array.
            return i;        // if found return the position
    return -1;    // otherwise return -1
}

int main() {
    int array[]={10,11,12,13,14,25,26,37,48,29};
    int x=25;    // Searched Element.

    int loc=linear_search(array, 10, x);    // Call the search function

    if(loc != -1)
        cout<<"Element found at location : "<<loc;
    else
        cout<<"Element not present in the array.";
    return 0;
}
