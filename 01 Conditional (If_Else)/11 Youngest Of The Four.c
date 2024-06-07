#include <stdio.h>
void main()
{
int Ram;

 printf ("Enter Age Ram : ");
 scanf ("%d",&Ram);

int Shyam;

 printf ("Enter Age Shyam : ");
 scanf ("%d",&Shyam);

int Kartik;

 printf ("Enter Age Kartik : ");
 scanf ("%d",&Kartik);
 
int Ganesh;

 printf ("Enter Age Ganesh : ");
 scanf ("%d",&Ganesh);
    
    if (Ram<Shyam && Ram<Kartik && Ram<Ganesh)
    {
         printf ("%d Ram Is Youngest",Ram);
    }

    if (Shyam<Ram && Shyam<Kartik && Shyam<Ganesh)
    {
        printf ("%d Shyam Is Youngest",Shyam);
    }
   
    if (Kartik<Shyam && Kartik<Ram && Kartik<Ganesh)
    {
        printf ("%d Kartik Is Youngest",Kartik);
    }
    
    if (Ganesh<Ram && Ganesh<Shyam && Ganesh<Kartik)
    {
         printf ("%d Ganesh Is Youngest",Ganesh);
    }

}