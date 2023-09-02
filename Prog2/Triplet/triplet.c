#include<stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    int flag = 0;
    for (int i = 0; i < n - 2; i++) {
        int l = i + 1;
        int r = n - 1;

        while (l < r) {
            if (arr[i] + arr[l] + arr[r] == 0) {
                printf("%d %d %d\n", arr[i], arr[l], arr[r]);
                flag = 1;
                break;
            }
            else if (arr[i] + arr[l] + arr[r] < 0) {
                l++;
            }
            else {
                r--;
            }
        }
    }

    return 0;
}

