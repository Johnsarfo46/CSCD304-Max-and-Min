#include <iostream>

using namespace std;

int main()
{
    int ARR_MAX = 100;
    int arr[ARR_MAX];
    int i, max, min, size;

    cout<<"Enter the size of the array"<<endl;
    cin>>size;

    cout<<"Enter the array element"<< endl;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    max = arr[0];
    min = arr[0];

    for(i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i-1] < min){
            min = arr[i-1];
        }
    }

    cout<<"This the maximum value: "<< max << endl;
    cout<<"This the minimum value: "<< min << endl;

    return 0;
}
