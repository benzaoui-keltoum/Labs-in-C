////////////////////////////////////////////////////////////
/* 11. Remove Duplicates in Array
Write a program to remove duplicate elements from an array.
*/
#include <stdio.h>
int main()
{
    int taille;
    printf("donner la taille du tableau :");
    scanf("%d",&taille);
    
    int tab[taille];
    for(int i=0;i<taille;i++)
    {
    printf("donner un elt pour l'ajouter au tableau");
    scanf("%d",&tab[i]);
    }
    
    for(int i=0;i<taille;i++)
    {  int j=0;
        while(tab[i]!=tab[j])
         {j++;}
         for(int k=j;k<(taille-j);k++)
         {
            tab[k]=tab[k+1]; 
         }
             
         }
        
    for(int i=0;i<taille;i++)
    {
        printf("%d",tab[i]);
        
    }
    
    return 0;
    
}   

/*12. Find Even and Odd Elements
Write a program to separate even and odd numbers from an array into two different arrays.
*/
#include <stdio.h>
int main()
{
    int taille;
    printf("donner la taille du tableau :");
    scanf("%d",&taille);
    
    int tab[taille];
    for(int i=0;i<taille;i++)
    {
    printf("donner un elt pour l'ajouter au tableau");
    scanf("%d",&tab[i]);
    }
    
    for(int j=0;j<taille;j++)
    {
        ///////the problem is i dont know how oven number i have so how can i know the size of the array for even
        if(tab[j]%2==0) tabeven[x]=tab[j];
        
    }