// 4яфв.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
#include <stdlib.h>
//int l1(int x[]);
const int n = 10, p = 23;
using namespace std;

//int l2(int x[]);
//int l3(int x[]);
//int l4(int x[]);
int l5(int x[]);
int main()

{  int k; 
     cin >> k;
     srand(3);
    int x[n];
    for (int i = 0; i < n; i++)
        x[i] = rand() % 10;
    int y[p];
   
    for (int i = 0; i < p; i++)
        y[i] = rand() % 20;
    //l1(x);
   // l2(x);
    //l3(x);
   // l4(y);
    l5(y);
    
    
}
/*int l1(int x[])
    {
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i] < x[i + 1]) {
            a++;
        }
        else 
        {
            a = 0;
        }
        cout << "\n" << x[i];
    }
    cout <<"\n Yes of Not : " << a;
    return 0;
    }*/
/*/int l2(int x[])
{
    int o;
    cin >> o;
    for (int i = 1; i < n; i++)
    {
        if (x[i] == o)
        {
            cout << "\n index  " << i;
        }
            
        cout <<"\n" << x[i];
    }
    return 0;
}*/
/*int l3(int x[])
{
    
    int sum=0;
    int k = n - 2; 
    for (int i = 0; i < n; i++) {
        if (x[i] < 0) {
            k = i;
            break;
        }
    }
        for (int i = 0; i < k; i++) 
        {
            long int p = 1;
            for (int j = 0; j <= i; j++)
                p *= x[i];
            sum += p;
        }
        cout << sum;
    return 0;
}*/
/*int l4(int x[])
{

    int sum = 0;
    int h = 0;
    for (int i = 1; i <= p-1; i++)
    {
        sum = x[i] + x[p - i];
        cout << "\n" << i << " " << sum;
        if (h < sum)
            h = sum;
        
    }
    cout <<"\nITOG:" << h;
    return 0;
}*/
int l5(int x[])
{

    int sum = 0;
    int h = 1000;
    for (int i = 0; i < p-2; i++)
    {
        sum = x[i] + x[i+1];
        cout << "\n" << i << " " << sum;
        if (h > sum)
            h = sum;

    }
    cout << "\nITOG:" << h;
    return 0;
}

