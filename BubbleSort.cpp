//Bubble Sort Algorithm Implementation in C++

#include <iostream>
using namespace std;
void swap(int *a,int *b){


    int temp=*a;
    *a=*b;
    *b=temp;


}

int main() {
    int n,arr[10],i,j;
    cout<<"Enter the array size: ";
    cin>>n;
    //User input an array
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter index of "<<i<<" :";
        cin>>arr[i];
    }
    //Parrent loop
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=n-i;j++)//child loop
        {
            //arr[j]>arr[j+1] that means if condition becomes true and if body is executed
            //otherwise j increment  and condition check and previous step is check.
            if(arr[j]>arr[j+1])//Swapping logic
                swap(arr[j],arr[j+1]);
        }
    }

    //After sorted array print
    for(i=1;i<=n;i++)
        cout<<"Array elements index of "<<i<<" :"<<arr[i]<<endl;


    return 0;
}
