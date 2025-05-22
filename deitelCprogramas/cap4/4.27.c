#include<stdio.h>
#include<math.h>


int main()
{
    for (int i = 1; i <= 500; i++)
    {
        for (int j = 1; j < i; j++)
        {
            for (int k = j; k < i; k++)
            {
                float a = i;
                float b = j;
                float c = k;

                if (a*a == b*b + c*c)
                {
                    printf("%.2f, %.2f, %.2f\n", a, b, c);
                }
                
            }
            
        }
        
    }
    

    return 0;
}