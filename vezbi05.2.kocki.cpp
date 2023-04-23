#include <iostream>  //Evgenija Talevska INKI968
#include <time.h>
#include <cstdlib>
//#include <windows.h>
using namespace std;
void one();
void two();
void three();
void four();
void five();
void six();

int main()
{              //Deklariranje varijabili
short unsigned int score = 0;
short unsigned int compScore = 0;
short unsigned int num = 0;
short unsigned int num2 = 0;
short unsigned int compNum = 0;
short unsigned int compNum2 = 0;
short unsigned int sum = 0;
short unsigned int compSum = 0;
char letter;

srand(time(NULL));
while (letter != 'q')
{
cout << "Your Score: " << score << endl;
cout << "computer's Score: " << compScore << endl << endl;
cout << "Press r to roll or q to quit: ";
cin >> letter;
num = 1 + rand()%6;   
num2 = 1 + rand() %6;
compNum = 1 + rand() %6;
compNum2 = 1 + rand() %6;
//  1 + rand()%6; generira random broj od 1 do 6 , taka sto vrednostite na promenlive se random broj od 1 ?? 6
//racunanje na zbirot
sum = num + num2;
compSum = compNum + compNum2;



if (letter == 'q')
break;
if (letter != 'r')
{
system("cls");
continue;
}
//switch-case kade se povikuvaat funkcii za prikazuvanje na kockite
switch (num) 
{
case 1:
one();
break;
case 2:
two();
break;
case 3:
three();
break;
case 4:
four();
break;
case 5:
five();
break;
case 6:
six();
break;
default: // Nema potreba od red 71 i 72  zaradi funkcijata rand()
cout << "Error...";
break;
} 

switch (num2)
{
case 1:
one();
break;
case 2:
two();
break;
case 3:
three();
break;
case 4:
four();
break;
case 5:
five();
break;
case 6:
six();
break;
default://  Nema potreba od red 96 i 97  zaradi funkcijata rand()
cout << "Error...";
break;
} 
//Prikazuvanje na brojkite od frlenite kocki
cout << endl << "Yours: " << num << ", " << num2 << endl;
cout << "Computer's: " << compNum << ", " << compNum2 << "\n\n";



if (sum > compSum)
{
cout << "You won!!" << endl << endl;
score++;
}
else
{
compScore++;
cout << "you lost..." << endl << endl;
}



system("pause");  //mu kazuva na operativniot sistem da ja izvrsi programata pause, glavnata programa ceka prvo da zavrsi pause, pa posle prodolzuva 
system("cls");    //kursorot odi gore levo, odnosno system("cls") go cisti ekranot od predhodnata igra


}
return 0;
}
//prikazuvanje na kockite
void one()
{
cout << "-----" << endl;
cout << "|   |" << endl;
cout << "| O |" << endl;
cout << "|   |" << endl;
cout << "-----" << endl;
}
void two()
{
cout << "-----" << endl;
cout << "| O |" << endl;
cout << "|   |" << endl;
cout << "| O |" << endl;
cout << "-----" << endl;
}
void three()
{
cout << "-----" << endl;
cout << "| O |" << endl;
cout << "| O |" << endl;
cout << "| O |" << endl;
cout << "-----" << endl;
}
void four()
{
cout << "-----" << endl;
cout << "|O O|" << endl;
cout << "|   |" << endl;
cout << "|O O|" << endl;
cout << "-----" << endl;
}
void five()
{
cout << "-----" << endl;
cout << "|O O|" << endl;
cout << "| O |" << endl;
cout << "|O O|" << endl;
cout << "-----" << endl;
}
void six()
{
cout << "-----" << endl;
cout << "|O O|" << endl;
cout << "|O O|" << endl;
cout << "|O O|" << endl;
cout << "-----" << endl;
}