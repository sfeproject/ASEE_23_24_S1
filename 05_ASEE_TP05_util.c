#include <stdio.h>
#include <tri.h>
void lire(int t[],int n)
{
    for(int i=0;i<=n-1;i++)
    {
        printf("Donnez t[%d]= \t",i);
        scanf("%d",&t[i]);
    }
}


void afficher(int t[],int n)
{

    for (int i=0;i<=n-1;i++)
    {
       printf("\t tab[%d]= %d \n",i,t[i]) ;
    }
}

void copier(int t_src[],int t_dest[],int n){
    for (int i=0;i<=n-1;i++)
       t_dest[i]= t_src[i];
}
