#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{

    char pesna[100]= "Super Tuna - Jin";
   
    char *ps=&pesna[0];
    
    cout<< "Pesna: " << pesna <<endl; 
    cout<< "Cela sodrzina - ps : " << ps <<endl;
    cout<< "Pocetna pozicija - *ps : "<< *ps <<endl; 
    cout<<"Adresa na pocetok :"<< (int*)ps<<endl; 
    
    ps+=13;
    
    cout<<"Ime na izveduvacot:- ps+13 "<< ps <<endl; 
    cout<<"Pocetok na segashnata sodrzina: "<<*ps<<endl;
    cout<< "Adresa od koja pocnuva segasnata sodrzina :"<<(int*)ps<<endl;
    
    return 0;
}