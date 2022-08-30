#include <iostream>
using namespace std;

int main ()
{
    int arr[]={5,12,45,78,9};
    int len = sizeof(arr)/sizeof(arr[0]);

    int i,j,temp;

    for ( i=0; i<len; i++)
    {
        for ( j=i+1 ; j<len ; j++)
        {
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    //printing array after sorting
    for (i=0; i<len;i++)
    {
        cout << arr[i] << endl;
    }
}