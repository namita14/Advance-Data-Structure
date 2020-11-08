# include<stdio.h>
# include<conio.h>

void knapsack1(int n, float weight[], float profit[], float capacity)
{
 float x[20], tp= 0;
 int i, j, u;
 float ratio[20], temp;
 u=capacity;
 

for (i=0; i<n; i++)
 {
 ratio[i]=profit[i]/weight[i];
 }

 for(i=0; i<n; i++)
 {
    for(j=i+1;j< n; j++)
    {
      if(ratio[i]<ratio[j])
      {
      temp= ratio[j];
      ratio[j]= ratio[i];
      ratio[i]= temp;

     temp= weight[j];
     weight[j]= weight[i];
     weight[i]= temp;

     temp= profit[j];
     profit[j]= profit[i];
     profit[i]= temp;
     }
   }
 }

 for (i=0;i<n;i++)
     x[i]=0.0;

 for (i=0;i<n;i++)
 {
 if(weight[i]>u)
      break;
 else
     {
     x[i]=1.0;
     tp= tp+profit[i];
     u=u-weight[i];
     }
 }

 if(i<n)
       x[i]=u/weight[i];

 tp= tp + (x[i]*profit[i]);

 printf("\n The result vector is:-   \n ");
 for(i=0;i<n;i++)
        printf("%f ",x[i]);

 printf("\n Maximum profit is:- %f \n ", tp);

}

void knapsack2(int n, float weight[], float profit[], float capacity)
{
 float x[20], tp1 = 0;
 int i, j, u;
 float ratio[20], temp;
 u=capacity;
 

for (i=0; i<n; i++)
 {
 ratio[i]=profit[i]/weight[i];
 }

 for (i = 0; i < n; i++)
       {
              for (j = i + 1; j < n; j++)
              {
                 if (weight[j] < weight[i])
                 {
                    temp = ratio[i];
                    ratio[i] = ratio[j];
                    ratio[j] = temp;
                    temp = weight[i];
                    weight[i] = weight[j];
                    weight[j] = temp;
                    temp = profit[i];
                    profit[i] = profit[j];
                    profit[j] = temp;
                 }
              }
        }
 for (i=0;i<n;i++)
     x[i]=0.0;

 for (i=0;i<n;i++)
 {
 if(weight[i]>u)
      break;
 else
     {
     x[i]=1.0;
     tp1 = tp1+profit[i];
     u=u-weight[i];
     }
 }

 if(i<n)
       x[i]=u/weight[i];

 tp1 = tp1 + (x[i]*profit[i]);

 printf("\n The result vector is:-   \n ");
 for(i=0;i<n;i++)
        printf("%f ",x[i]);

 printf("\n Maximum profit(weight) is:- %f \n ", tp1);

}

void knapsack3(int n, float weight[], float profit[], float capacity)
{
 float x[20], tp2 = 0;
 int i, j, u;
 float ratio[20], temp;
 u=capacity;
 

for (i=0; i<n; i++)
 {
 ratio[i]=profit[i]/weight[i];
 }

 for(i=0; i<n; i++)
 {
    for(j=i+1;j< n; j++)
    {
      if(profit[i]<profit[j])
      {
      temp= ratio[j];
      ratio[j]= ratio[i];
      ratio[i]= temp;

     temp= weight[j];
     weight[j]= weight[i];
     weight[i]= temp;

     temp= profit[j];
     profit[j]= profit[i];
     profit[i]= temp;
     }
   }
 }

 for (i=0;i<n;i++)
     x[i]=0.0;

 for (i=0;i<n;i++)
 {
 if(weight[i]>u)
      break;
 else
     {
     x[i]=1.0;
     tp2= tp2+profit[i];
     u=u-weight[i];
     }
 }

 if(i<n)
       x[i]=u/weight[i];

 tp2 = tp2 + (x[i]*profit[i]);

 printf("\n The result vector is:-   \n ");
 for(i=0;i<n;i++)
        printf("%f ",x[i]);

 printf("\n Maximum profit(profit) is:- %f \n ", tp2);

}


int main()
{
 float weight[20], profit[20], capacity;
 int n, i ,j,choice;
 printf (" Enter the number of objects:- \n ");
 scanf ("%d", &n);

 printf ("\n Enter the wts and profits of each object:- \n");
 for (i=0; i<n; i++)
 {
 scanf("%f %f", &weight[i], &profit[i]);
 }

 printf ("\n enter the capacity of knapsack:- \n ");
 scanf ("%f", &capacity);
 
 
 printf("choice \n");
 do{
	printf("0. exit\n");
	printf("1. ratio\n");
	printf("2. weight\n");
	printf("3. profit\n");
	scanf("%d",&choice);
	switch(choice){
	case 0:
		break;
	case 1:
	{
		knapsack1(n, weight, profit, capacity);
	}
	break;
	case 2:
	{
		knapsack2(n, weight, profit, capacity);
	}
	break;
	case 3:
	{
		knapsack3(n, weight, profit, capacity);
	}
	break;
	default:
		  printf("Invalid selection\n");
	}
	}while(choice != 0);
	getch();
    return 0;
 
}
