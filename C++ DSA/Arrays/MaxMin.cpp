#include <iostream>
#include<climits>
using namespace std;
int minValue(int n, int arr[])
{
    int min = INT_MAX;
    for(int i = 0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int maxValue(int n, int arr[])
{
    int max = INT_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[100];
    // Taking input from User
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Display all entered elements
    cout << "Elements of array are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout<<"Minimum Value is: "<<minValue(n, arr); //Display Minimum Value
    cout<<"Maximum Value is: "<<maxValue(n, arr); //Display Maximum Value
    return 0;
}