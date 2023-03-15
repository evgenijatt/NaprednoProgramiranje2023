//Odd-Even/Brick Sort

//Евгенија Талевска INKI968

/* Odd-Even/Brick Sort е варијација на Bubble Sort. Овој алгоритам е поделен на два дела: парен и непарен дел. Во непарниот дел, секој елемент со непарен индекс се споредува со следниот елемент,
а во парниот дел секој елемент со парен индекс се споредува со следниот елемент. Ако два соседни елементи не се на точните позиции се прави промена. Кога во низата нема да има потреба од повеќе промени, таа е веќе сортирана.
*/

#include<bits/stdc++.h>
using namespace std;
 
// Функција за алгоритмот
void oddEvenSort(int arr[], int n)
{
    bool Sorted = false; 
    while (!Sorted)
    {
        Sorted = true;
 
        //Сортирање на елементите со непарен индекс
        for (int i=1; i<=n-2; i=i+2)
        {
            if (arr[i] > arr[i+1])
             {
                swap(arr[i], arr[i+1]);
                Sorted = false;
              }
        }
 
        // Сортирање на елементите со парен индекс
        for (int i=0; i<=n-2; i=i+2)
        {
            if (arr[i] > arr[i+1])
            {
                swap(arr[i], arr[i+1]);
                Sorted = false;
            }
        }
    }
 
    return;
}
 
 
//Функција за печатење на сортираната низа
void printArray(int arr[], int n)
{
   for (int i=0; i < n; i++)
       cout <<arr[i] << " ";
   cout << "\n";
}
 

int main()
{
    int arr[] = {(int)'E',(int)'v',(int)'g',(int)'e',(int)'n',(int)'i',(int)'j',(int)'a',(int)'T',(int)'a',(int)'l',(int)'e',(int)'v',(int)'s',(int)'k',(int)'a',(int)'I',(int)'N',(int)'K',(int)'I',(int)'9',(int)'6',(int)'8'};
    int n = sizeof(arr)/sizeof(arr[0]);  
    
    cout<<"Низата е : ";
    //Печатење на низата
    for(int i=0; i<n; i++)
        cout<<(char)arr[i]<<" ";
        
    //Повикување на функцијата за сортирање
    oddEvenSort(arr, n);
    
    //Повикување на функцијата за печатење на сортираната низа
    cout<<"\nСортирана низа во ASCII код : ";
    printArray(arr, n);
    
    //Печатење на низата во карактери
    cout<<"Сортирана низа : ";
    for(int i=0; i<n; i++)
        cout<<(char)arr[i]<<" ";
 
    return (0);
}