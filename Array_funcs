#include <stdio.h>
#include <stdlib.h>

int
main ()
{


 int*a;

int n = 0, i, j = 0, pos,swap;


  printf("enter the elements you want to enter");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("Enter the elements");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);

	}
for (i = 0; i <= n - 1; i++)



    {



printf ("The entered values are %d \n", a[i], "\n");



}


//insertion

printf ("Enter the location where you wish to insert an element\n");

scanf ("%d", &pos);


printf ("Enter the value to insert\n");
scanf ("%d", &j);


for (i = n - 1; i >= pos - 1; i--)

a[i + 1] = a[i];

a[pos - 1] = j;

printf ("Resultant array is\n");


for (i = 0; i <= n; i++)

printf ("%d\n", a[i]);



//search
    printf ("enter value which you want to serach at which position ");



scanf ("%d", &j);
for (i = 0; i <= n; i++)



    {



if (a[i] == j)



	{


printf ("the user given  %d at position is %d \n", j, i + 1);





}



}

 //bubble sort

for (i = 0 ; i < n - 1; i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (a[j] > a[j+1]) /* For decreasing order use < */
      {
        swap       = a[j];
        a[j]   = a[j+1];
        a[j+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (i = 0; i < n; i++)
     printf("%d\n", a[i]);





//delete
    printf ("Enter the location whwre YOU want wish delete the element \n ");



scanf ("%d", &pos);



for (i = pos - 1; i <= n - 1; i++)




a[i] = a[i + 1];



printf ("resultant array \n");



for (i = 0; i <= n - 1; i++)



printf ("%d \n", a[i]);


    //traversing
  printf ("Traversing of array");

for (i = 0; i < n; i++)

    {

printf ("\n a[%d] = %d", i, a[i]);

}

return 0;



}

