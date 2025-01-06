/*1. Basic Array Initialization	*/
#include<stdio.h>
int main()
{  int tab[10]={1,2,3,4,5,6,7,8,9,0};
for(int i=0;i<10;i++)
{  printf("tab[ %d ]= %d \n",i,tab[i]);} 
 return 0; }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
 /*2. Array Sum
Write a program to calculate the sum of all elements in an array.
*/
#include<stdio.h>

int main ()
{
    int tab[5]={1,5,7,6,8};
    int somme=0;
    for(int i=0;i<5;i++)
    somme=somme+tab[i];
    printf("%d",somme);
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*3. Array Average
Write a program to calculate the average of all elements in an array.
*/
#include<stdio.h>

int main ()
{
    int taille;
         //length for the array
    printf("give the lenght of the array :");
    scanf("%d",&taille);
        //create an array
    int tab[taille];
    for(int i=0;i<taille;i++)
    {
     printf("give an integer elemnt for adding it :") ;
     scanf("%d",&tab[i]);
     
         }
         //the average
    int somme=0;
    for(int j=0;j<taille;j++)
    {somme=somme+tab[j];}
        printf("the somme is : %d ",somme);
            printf("the taille is : %d ",taille);


    float average=somme/(taille);
    printf("the average is : %f ",average);
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*4. Find Maximum and Minimum in an Array
Write a program to find the largest and smallest numbers in an array.
*/
#include<stdio.h>

int main ()
{
    int taille;
    printf("give the lenght of the array :");
    scanf("%d",&taille);
    int tab[taille];
    for(int i=0;i<taille;i++)
    {
     printf("give an integer elemnt for adding it :") ;
     scanf("%d",&tab[i]);
     
         }
    int max=tab[0];
    int min=tab[0];
    for(int j=0;j<taille;j++)
    { if(tab[j]>max){max=tab[j];}
      if(tab[j]<min){min=tab[j];}
    }
        
        printf("the maximum is : %d ",max);
            printf("the Minimum is : %d ",min);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
5. Reverse an Array
Write a program to reverse the elements of an array.

*/
#include<stdio.h>

int main ()
{
    int taille;
    printf("give the lenght of the array :");
    scanf("%d",&taille);
    int tab[taille];
    for(int i=0;i<taille;i++)
    {
     printf("give an integer elemnt for adding it :") ;
     scanf("%d",&tab[i]);
     
         }
         int p=0;
         //reverse
    for(int j=0;j<(taille/2);j++)
    {   p=tab[j];
    tab[j]=tab[taille-j-1];
    tab[taille-1-j]=p;


    }
             printf("the array reversed is : ");
             for(int i=0;i<taille;i++)
             printf(" %d ",tab[i]);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*6. Array Element Count
Write a program to count how many times a specific element appears in an array.
*/
{
    int taille;
    printf("give the lenght of the array :");
    scanf("%d",&taille);
    int tab[taille];
    for(int i=0;i<taille;i++)
    {
     printf("give an integer elemnt for adding it :") ;
     scanf("%d",&tab[i]);
     
         }
         int num=0;
         int count=0;
    printf("give the integer looking for  it :") ;
    scanf("%d",&num);

         
         //search
    for(int j=0;j<taille;j++)
    {   if(tab[j]==num) count ++;
        }
             printf("the number %d  found %d times: ",num,count);
       
    return 0;
}