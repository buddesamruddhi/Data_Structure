#include<iostream>
using namespace std;

int main()
{
    int n,no;
    int arr[50];

    cout<<"enter the elements \n";
    cin>>n;
    cout << "enter the list of element\n";
    for (int i=0 ; i<n ;i++){
        cin>>arr[i];
    }
    cout<<"enter the element to search \n";
    cin>>no;

    for ( int i =0 ; i<n ; i++)
    {
        if (arr[i] == no)
        {
            cout<<"element found at this position "<< i+1;
            return 0;
        }
    }

cout<<"element is not found";
return 0;





}
