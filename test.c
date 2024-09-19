#include <stdio.h>

int main()
{
    int arr[] = { 0 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
  /*  while (i <sz-1)
    {
        scanf("%d %d", &arr[i], &arr[i + 1]);
		int num1 = arr[i];
		int num2 = arr[i + 1];
		i++;
		printf("%d\n", num1 + num2);
	}
	*/
    while (i < sz - 1)
    {
        if (scanf("%d %d", &arr[i], &arr[i + 1]) != 2)
        {
      
            while (getchar() != '\n'); 
            continue; 
        }

        int num1 = arr[i];
        int num2 = arr[i + 1];
        i++;
        printf("%d\n", num1 + num2);
    }

    return 0;
}
