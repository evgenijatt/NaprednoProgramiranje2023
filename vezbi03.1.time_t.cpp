//INKI968 Евгенија Талевска

#include <stdio.h>     
#include <time.h>      //Библиотека на временски функции : time_t и time
int main ()
{
  time_t now;           
  struct tm newyear;    // tm структура во која се содржат tm_hour,tm_min...
  double seconds;

  time(&now);   // го враќа тековното време на системот во секунди од the Unix Epoch (January 1, 1970, 00:00:00 GMT) во now 

  newyear = *localtime(&now);  // newyear ќе гo содржи локалното време и тековниот датум и време

  newyear.tm_hour = 0;  
  newyear.tm_min = 0;  
  newyear.tm_sec = 0;   
  newyear.tm_mon = 0;   
  newyear.tm_mday = 1; 

  seconds = difftime(now,mktime(&newyear));  //пресметување на разликата помеѓу now и newyear. mktime времето од newyear го претвора во секунди

  printf ("%.f seconds since new year in the current timezone.\n", seconds);

  return 0;
}