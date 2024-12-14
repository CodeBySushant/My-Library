// Take Gifts From the Richest Pile 
// Not correct approach need to solve it using maxHeap for better efficiency
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    cout<<"Enter size of array: ";
    cin>>num;
    int* gifts = new int[num];

    // Take array elements as input
    cout<<"Enter the values in array: ";
    for(int i=0; i<num; i++){
        cin>>gifts[i];
    }

    for (int i = 0; i < num - 1; i++) {
        for (int j = 0; j < num - i - 1; j++) {
            if (gifts[j] < gifts[j + 1]) {
                // Swap numbers[j] and numbers[j+1]
                int temp = gifts[j];
                gifts[j] = gifts[j + 1];
                gifts[j + 1] = temp;
            }
        }
    }

    // Gives square root of elements and at last sums it
    int key;
    cout<<"Enter key value: ";
    cin>>key;
    int sum = 0;
    for (int i = 0; i<key; i++){ 
        sum += sqrt(gifts[i]);
    }
    cout<<endl;
    cout<<sum;

    delete[] gifts;
return 0;
}
