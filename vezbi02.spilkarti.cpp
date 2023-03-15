//INKI968 Евгенија Талевска
//Задача која печати шпил на карти по ред и мешан.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

const int DECK_SIZE = 54;
const int SUIT_SIZE = 13;
const int JOKER_SIZE = 2;

string suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
string ranks[SUIT_SIZE] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
string jokers[JOKER_SIZE] = {"Coloured Joker", "Black & white Joker"};

void shuffleDeck(string deck[], int size)//Функција за мешање на шпилот
{
    for (int i = 0; i < size; i++) 
    {
        int j = rand() % size;
        string temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}

int main() 
{
    string deck[DECK_SIZE];
    int index = 0;
    int k=0;
    for (int i = 0; i < 4; i++)  
    {
        for (int j = 0; j < SUIT_SIZE; j++)
        {
            deck[index] = ranks[j] + " of " + suits[i];
            index++;
        }
    }    
    //Додавање на џокери
    deck[index] = jokers[k];
    index++; k++;
    deck[index]=jokers[k];
    
    //Печатење на оригиналниот шпил
    cout<<"Original Deck:\n";
    for (int i = 0; i < DECK_SIZE; i++) 
    {
        cout << deck[i] << endl;
    }
    
    srand(time(NULL)); //Функција за рандом број

    cout<< "\nShuffled Deck:\n";
    // Повикување на функција која го меша шпилот
    shuffleDeck(deck, DECK_SIZE);
    //Печатење на измешаниот шпил
    for (int i = 0; i < DECK_SIZE; i++) 
    {
    cout << deck[i] << endl;
    }

    return 0;
}