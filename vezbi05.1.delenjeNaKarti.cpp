//Evgenija Talevsa INKI968
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//definiranje na broj i lica na karti
#define CARDS 52
#define FACES 13

struct card {
   const char *face; //definiranje pokazuvac face
   const char *suit; //definiranje pokazuvac suit
}; 

typedef struct card Card; 


void fillDeck( Card * const wDeck, const char * wFace[],
   const char * wSuit[] );             
void shuffle( Card * const wDeck );    
void deal( const Card * const wDeck ); 

int main( void )
{
   Card deck[ CARDS ]; 

   //definiranje na niza pokazhuvachi so licata na kartite
   const char *face[] = { "Ace", "Deuce", "Three", "Four", "Five",
      "Six", "Seven", "Eight", "Nine", "Ten",
      "Jack", "Queen", "King"};

   //definiranje na niza pokazuvaci so bojata na kartite
   const char *suit[] = { "Hearts", "Diamonds", "Clubs", "Spades"};

   srand( time( NULL ) ); //go koristi vnatresniot casovnik na kompjuterot za da gi kontrolira vrednostite taka sekogas ke bidat razlicni pri kompajliranjeto
   //povikuvanje na funkciite
   fillDeck( deck, face, suit ); 
   shuffle( deck ); 
   deal( deck ); 
} 

// funkcija za sostavuvanje na kartite
void fillDeck( Card * const wDeck, const char * wFace[],
   const char * wSuit[] )
{
   size_t i; 

   
   for ( i = 0; i < CARDS; ++i ) {
      wDeck[ i ].face = wFace[ i % FACES ];
      wDeck[ i ].suit = wSuit[ i / FACES ];
   } 
} 

// funkcija za meshanje na spilot karti 
void shuffle( Card * const wDeck )
{
   size_t i;   //size_t ja pretstavuva goleminata vo bajti. Deklariranje na i , i e potreben vo for ciklusot 
   size_t j; // deklariranje na j so size_t, preku rand() vo red 63 i se dodeluva random broj od 0 do 51 
   Card temp; 

   
   for ( i = 0; i < CARDS; ++i ) {
      j = rand() % CARDS; 
      temp = wDeck[ i ];
      wDeck[ i ] = wDeck[ j ];
      wDeck[ j ] = temp;
   } 
} 

//funkcija za dodeluvanje na kartite 
void deal( const Card * const wDeck )
{
   size_t i; 

  
   for ( i = 0; i < CARDS; ++i ) {
      printf( "%5s of %-8s%s", wDeck[ i ].face, wDeck[ i ].suit,
         ( i + 1 ) % 4 ? "  " : "\n" );
   } 
} 