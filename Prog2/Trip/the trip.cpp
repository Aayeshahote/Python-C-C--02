#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    while(1)
    {
        int n;
        cin>>n;
        if (n==0)
        {
            break;
        }
        else
        {
            float k;
    float expense[n];
    float total =0;
    float amount =0;
    for (int i =0;i<n;i++)
    {
        cin>>expense[i];
    }

    for (int j =0;j<n;j++)
    {
        total = total + expense[j];
    }
    float round_total = round(total *100.0)/100.0;
    float avg = round_total/n;

    for (int p=0 ;p<n;p++)
    {
        if (expense[p] > avg)
        {
            k = expense[p]-avg;
            k = round(k *100.0)/100.0;
            amount = amount + k;
        }
    }
    cout<<"$"<<amount;

        }
    }
}
