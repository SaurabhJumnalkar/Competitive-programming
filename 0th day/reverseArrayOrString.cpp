/*
Given an array (or string), the task is to reverse the array/string.
Examples : 
 

Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}
*/
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3};
    int array[3];
    int k = 2;
    for (int i = 0; i < 3; i++)
    {

        array[k] = arr[i];
        k--;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << " "<<array[i];
    }
}
