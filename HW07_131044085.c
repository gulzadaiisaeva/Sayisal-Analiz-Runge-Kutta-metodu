
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double F1 (double z)
{
  return z;
}

double F2 (double z, double y)
{
  return ((-0.6*z)-8*y);
}


void main()
{
  double x=5;
  double y=0.55;
  double z=0.45;
  double h=0.5;
  double res_f1, res_f2;
  double ym1, zm1,
  		 ym2,zm2,
  		ys,zs;
  double k21,k22,
  		 k31,k32,
  		 k41,k42;
  double fi1,fi2;
  double ynew,znew;
  res_f1=F1(z);
  res_f2=F2(z,y);
  
  printf("k11 = %.2lf \n", res_f1);
  printf("k12 = %.2lf  \n", res_f2);
  
  printf("\n\n");
  ym1=y+((res_f1*h)/2);
  zm1=z+((res_f2*h)/2);
 
 printf("y mid = %.2lf \n", ym1);
 printf("z mid = %.2lf \n", zm1);
   printf("\n\n");
 k21=F1(zm1);
 k22=F2(zm1,ym1);
 
  
 printf("k21 = %.2lf \n", k21);
 printf("k22 = %.2lf \n", k22);
   printf("\n\n");
 
  ym2=y+((k21*h)/2);
  zm2=z+((k22*h)/2);
  
  printf("y mid2 = %.2lf \n", ym2);
 printf("z mid2 = %.2lf \n", zm2);
   printf("\n\n");
 
 	 k31=F1(zm2);
 	k32=F2(zm2,ym2);
 
  printf("k31 = %.2lf \n", k31);
 printf("k32 = %.2lf \n", k32);
   printf("\n\n");
 
 ys=y+(k31*h);
 zs=z+(k32*h);
 
  printf("y son = %.2lf \n", ys);
 printf("z son =%.2lf \n", zs);
   printf("\n\n");
 
 	 k41=F1(zs);
 	k42=F2(zs,ys);
  
  printf("k41 = %.2lf \n", k41);
 printf("k42 = %.2lf \n", k42);
   printf("\n\n");
   
   fi1=(res_f1+(2*k21)+(2*k31)+k41)/6;
      fi2=(res_f2+(2*k22)+(2*k32)+k42)/6;
      
        printf("fi1 = %.2lf \n", fi1);
 		printf("fi2 = %.2lf \n", fi2);
  		 printf("\n\n");
   
   ynew=y+(fi1*h);
   znew=z+(fi2*h);
   
        printf("y new = %.2lf \n", ynew);
 		printf("z new = %.2lf \n", znew);
  		printf("\n\n");
   
}








