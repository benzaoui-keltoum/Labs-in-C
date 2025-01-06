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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 7. Array Search
Write a program to search for an element in an array and return its index.
*/
#include <stdio.h>
#include <stdbool.h>
int main()
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
         bool found=false;
    printf("give the integer looking for  it :") ;
    scanf("%d",&num);
        int indice=0;
         
         //search
    for(int j=0;j<taille;j++)
    {   if(tab[j]==num) {indice=j;found=true;break;}
        }
           if(found==true)  printf("the number %d  found in %d indice: ",num,indice);
       
    return 0;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*10. Merge Two Arrays
Write a program to merge two arrays into a third array.
*/
#include <stdio.h>
#include <stdbool.h>
int main()
{
 int taille1;
    printf("give the lenght of the first array :");
    scanf("%d",&taille1);
    int tab1[taille1];
    for(int i=0;i<taille1;i++)
    {
     printf("give an integer elemnt for adding it the first array1 :") ;
     scanf("%d",&tab1[i]);
     
         }
         
   int taille2;
    printf("give the lenght of the second array :");
    scanf("%d",&taille2);
    int tab2[taille2];
    for(int i=0;i<taille2;i++)
    {
     printf("give an integer elemnt for adding it to the the second array1 :") ;
     scanf("%d",&tab2[i]);
     
         }
     int newtaille=taille2+taille1;     
     int mergetab[newtaille];
         
    for (int i=0;i<taille1;i++)
    {   
           mergetab[i]=tab1[i];
        }
    int t=0;
    for(int j=taille1;j<newtaille;j++)
        {mergetab[j]=tab2[t];
        t++;
         }
     
     for(int i=0;i<newtaille;i++)
     {
         printf("%d",mergetab[i]);
         
     }
         return 0;
         }
    
