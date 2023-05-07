#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int FindingHighestNumber(int n)
{
   int d1, d2, d3, highestn;
   d1 = n / 100;
   d2 = (n / 10) % 10;
   d3 = n % 10;

  if (d1 >= d2 && d1 >= d3)
   {
    highestn = d1;
   }
   else if (d2 >= d1 && d2 >= d3) 
   {
	highestn = d2;
   } else
	{
    highestn= d3;
	}

  cout << "Zgolemuvanje na vrednosta za: " << highestn <<endl<< endl;
  return highestn;
}

int main()
{
	const string mystring="INKI968Evgenija Crowder We are taking back our freedom Our battle has been won Back from the dead we've come";
	int n;
	
	cout << "Vnesete go brojot na vasiot indeks: ";
	cin >> n;
    cout<<endl;
    
    int highestn=FindingHighestNumber(n);

    vector<int> ascii_vector; 
    
    for (int i = 0; i < mystring.size(); i++)
	{
        int asciistring = (int)mystring[i]+highestn;   
        ascii_vector.push_back(asciistring);           
	}

    sort(ascii_vector.begin(), ascii_vector.end()); 
     
    cout<<"Sortirani zgolemenite ascii vrednosti: "<<endl<<endl;
    
    for (int i = 0; i < ascii_vector.size(); i++) 
	{
        cout << ascii_vector[i] << endl;
    }
   
   
   const string filename="INKI968.Proekt3.txt";
   fstream file;
   
   file.open(filename.c_str(),ios::out); 
   file << "Vneseniot broj : " << n <<endl;
   file << "Sortirani zgolemenite ascii vrednosti na stringot za vrednost " << highestn <<endl; 
   for (int i = 0; i < ascii_vector.size(); i++) 
	{
        file << ascii_vector[i] << endl; 
    }
   file.close();
  
    return 0;

}  
