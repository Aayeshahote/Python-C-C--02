#include <stdio.h>
#include <math.h>
int main()
{
    while (1)
    {
        int n;
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        else
        {
            float k = 0;
            float expense[n];
            float total = 0;
            float amount = 0;
            for (int i = 0; i < n; i++)
            {
                scanf("%f", &expense[i]);
            }
            for (int j = 0; j < n; j++)
            {
                total = total + expense[j];
            }
            float round_total = round(total * 100.0) / 100.0;
            float avg = round_total / n;

            for (int p = 0; p < n; p++)
            {
                if (expense[p] > avg)
                {
                    k = expense[p] - avg;
                    k = round(k * 100.0) / 100.0;
                    amount = amount + k;
                }
            }
            printf("$ %.2f\n", amount);
            }
            }
            return 0;
            }
