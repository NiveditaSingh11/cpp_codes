#include <iostream>
using namespace std;
int main()
{

    int r;
    cout<<"enter the rows:";
    cin>>r;
    int c;
    cout<<"enter the column:";
    cin>>c;

    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "enter the element :";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        int countZero = 0;
        for (int j = 0; j < c; j++)
        {

            if (arr[i][j] == 0)
            {
                countZero = countZero + 1;
            }

         
        }
         for(int j=0 ;j<countZero;j++){
                arr[i][j]=0;

            }

            for(int j=countZero ; j<c ;j++){
                arr[i][j]=1;
            }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}