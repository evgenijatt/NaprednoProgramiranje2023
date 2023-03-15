//INKI968 Евгенија Талевска
#include <stdio.h>      
#include <time.h>        //Библиотека на временски функции : clock_t i clock 
#include <math.h>   

int frequency_of_primes (int n) //функција koja гo рачуна бројот на простите броеви под 100 000
{
  int i,j;
  int freq=n-1;
  for (i=2; i<=n; ++i) for (j=sqrt(i);j>1;--j) if (i%j==0) {--freq; break;}
  return freq;
}

int main ()
{
  clock_t t; 
  int f;
  t = clock();        //clock() го враќа времето koj процесорот го потрошил на програмата.
  printf ("Calculating...\n");
  f = frequency_of_primes (99999);  //повикување на функцијата 
  printf ("The number of primes lower than 100,000 is: %d\n",f);  
  t = clock() - t;    //времето кое процесорот го потрошил на функцијата frequency_of_primes
  printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);  // CLOCKS_PER_SEC се користи за да го претвориме бројот на циклуси на процесорот во секунди
  return 0;
}