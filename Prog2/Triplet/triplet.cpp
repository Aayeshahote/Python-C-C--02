#include<iostream>
using namespace std;
//Bubble sort algorithm for sorting array
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }
}
int main()
{
int n;
cin>>n;
int arr[n];
int sorted_arr[n];
for (int i =0;i<n;i++)
{
    cin>>arr[i];
}
 bubbleSort(arr,n);
int flag =0;
for(int i =0;i<n-2;i++)
{
    int l = i+1;
    int r = n-1;
    while(l<r)
    {
        if(arr[i]+arr[l]+arr[r] == 0)
        {
            cout<<arr[i]<<" "<<arr[l]<<" "<<arr[r]<<"\n";

            break;
        }
        else if(arr[i]+arr[l]+arr[r]< 0)
            l = l+1;
        else
            r = r-1;
    }
}
}



