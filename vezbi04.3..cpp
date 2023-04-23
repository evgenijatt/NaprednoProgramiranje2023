#include <iostream>
#include <cmath>
using namespace std;


int add(int* a, int* b) 
{
    return *a + *b;
}

int subtract(int* a, int* b)
{
    return *a - *b;
}

float divide(int* a, int* b)
{
    return (float)(*a) / (float)(*b);
}

double power(int* a, int* b)
{
    return pow((double)(*a), (double)(*b));
}



void calculate1(void* a, void* b, int (*operation)(int*, int*))
{
    int result = (*operation)((int*)a, (int*)b);
    cout << "The sum of "<< *(int*)a << " and " << *(int*)b << " is " << result << endl;
}

void calculate2(void* a, void* b, int (*operation)(int*, int*))
{
    int result = (*operation)((int*)a, (int*)b);
    cout << "The difference between "<< *(int*)a << " and " << *(int*)b << " is " << result << endl;
}

void calculate3(void* a, void* b, float (*operation)(int*, int*))
{
    float result = (*operation)((int*)a, (int*)b);
    cout <<"The quotient of "<< *(int*)a << " and " << *(int*)b << " is " << result << endl;
}

void calculate4(void* a, void* b, double (*operation)(int*, int*))
{
    double result = (*operation)((int*)a, (int*)b);
    cout << *(int*)a << " to the power of " << *(int*)b << " is " << result << endl;
}



int main()
{
    int a = (int) 'E', b = (int) 'T';
    cout << "ASCII kod : E=" << a << "  " << "T=" << b << endl;

    int (*operation1)(int*, int*);
    
    operation1 = &add;
    calculate1(&a, &b, operation1);

    int (*operation2)(int*, int*);
    
    operation2 = &subtract;
    calculate2(&a, &b, operation2);
    
    float (*operation3)(int*, int*);
    
    operation3 = &divide;
    calculate3(&a, &b, operation3);
    
    double (*operation4)(int*, int*);
    
    operation4 = &power;
    calculate4(&a, &b, operation4);

    return 0;
}




