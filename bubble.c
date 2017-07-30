#include <stdio.h>
#define cnt 10

int main()
{
	int Data[cnt]={7,2,5,9,1,4,8,3,6,10};
	int temp = 0;
	printf("\n");
	printf("Before sorting : ");
	for(int i = 0; i < cnt; i++)
	{
		printf("%d ", Data[i]);
		if(i==9)
			printf("\n");
	}
	for(int sort = 0; sort < cnt -1; sort++)
	{
		for(int asc = 0; asc < cnt -1 -sort; asc++)
		{
			if(Data[asc] > Data[asc+1])
			{
				temp = Data[asc];
				Data[asc] = Data[asc+1];
				Data[asc+1] = temp;
			}
		}
	}
	printf("After sorting : ");
	for(int i = 0; i < cnt; i++)
	{
		printf("%d ",Data[i]);
		if(i==9)
			printf("\n");
	}
	printf("-----------------------------------------\n");
	printf("Improved alignment : ");
	  	
	int Length = sizeof(Data) / sizeof(Data[0]);
  	int i = 0;
 
  	bubblesort(Data, Length);
  	for (i = 0; i < Length; i++){
    		printf("%d ", Data[i]);
		if(i==9)
			printf("\n\n");
	}
}	
/* Improving */
void bubblesort(int data[], int len)
{
  int i, j, temp;
  int flag = 0;
  for (i = 1; i < len; i++)
  {
    for (j = 0; j < len - i; j++)
    {
      if (data[j] > data[j+1])
      {
        flag = 1;
        temp = data[j+1];
        data[j+1] = data[j];
        data[j] = temp;
      }
    }
    if (flag == 0) 
      return;
  }
}
