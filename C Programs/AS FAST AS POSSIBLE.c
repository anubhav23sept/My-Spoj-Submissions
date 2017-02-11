#include<stdio.h>
main()
{double n,l,v1,v2,k;
double i,t;
scanf("%llf%llf%llf%llf%llf",&n,&l,&v1,&v2,&k);
t=((n/k)+((n/k)-1)*((v2-v1)/(v2+v1)))*(l/(((n/k)*v2)-(((n/k)-1)*((v2-v1)/(v2+v1))*v2)));
printf("%llf",t);

                                                             }
