#include<stdio.h>
#include<math.h>
main()
{
double T,i,D,C,S,L;

scanf("%lf",&T);
for(i=1;i<=T;i++)
{
     scanf("%lf%lf%lf%lf",&L,&D,&S,&C);
     S=S*pow(C+1,D-1);
     if(S>=L)
     printf("ALIVE AND KICKING\n");
     else
     printf("DEAD AND ROTTING\n");
}
}
