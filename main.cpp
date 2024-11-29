//
//  main.cpp
//  factorial2
//
//  Created by Zyoud on 29/11/2024.
//
#include "iostream"
#include <chrono>
using namespace std;

long long itirative_factorial(int n)
{
    long long factorial = 1;

    for (long long i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
long long recursion_factorial(int n){
        if(n==0 || n==1)
            return 1;
        else
        return n*recursion_factorial(n-1);
    }
int main()
{

    int n;
    cin >> n;
    chrono::time_point<chrono::system_clock> start, end;
    //auto start = chrono::high_resolution_clock::now();
    start = chrono::system_clock::now();
    
        cout << itirative_factorial(n) << endl;                 // for itirative function
    //auto end = chrono::high_resolution_clock::now();
    end = chrono::system_clock::now();
    chrono::duration<double> execution_time = end - start;
    cout << "execution time: " << execution_time.count() << "s\n";
        
     

    /* chrono::time_point<chrono::system_clock> start, end;
     start = chrono::system_clock::now();
     cout<< recursion_factorial(n)<<endl;                      // for recursion function
     end = chrono::system_clock::now();
    chrono::duration<double> execution_time = end - start;
     cout  << "execution time: " << execution_time.count() << "s\n";*/
        return 0;
    
}
