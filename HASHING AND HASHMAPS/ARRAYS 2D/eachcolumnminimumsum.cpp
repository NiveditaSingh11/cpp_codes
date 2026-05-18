#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array:";
    cin >> n;
    int arr[n][n];

    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {

            cout << "enter element :";
            cin >> arr[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
int column =0;
int minSum = INT_MAX;
    for(j=0;j<n;j++){
        int sum =0;
        for(i=0;i<n;i++){
           sum = sum +arr[i][j];
        }
         if(minSum >sum){
                minSum = sum;
                column = i;
            }

            cout<<"sum of " <<"column :"<<sum<<endl;
    }

    cout<<"column with minimum sum ="<<minSum<<endl;
    return 0;
}