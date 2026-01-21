#include<iostream>
using namespace std;
int main()
{
    int n ,no;
    int arr[50];

    cout<<"enter the elements \n";
    cin>>n;

    cout<<"enter the list elements \n";
    for(int i = 0; i<n ; i++){
        cin>>arr[i];

    }

    cout<<"enter the element to search ";
    cin>>no;

    int low = 0, high = n-1, mid;
    bool found = false;
    while (low <= high) 
    {
        mid = (low+high)/2;

        if (arr [mid]== no)
        {
            cout<<"element found at this position \n"<< mid+1;
            found = true;
            break;

        }
        else if (no <arr[mid])
        {
            high = mid -1;

        }
        else{
            low=mid+1;

        }
    }
if(!found)
{
    cout<<"element not found";
}
return 0;

}