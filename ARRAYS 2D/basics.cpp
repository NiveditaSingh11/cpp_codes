#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "enter the rows:";
    cin >> row;
    int column;
    cout << "enter the column:";
    cin >> column;

    int arr[row][column];
for(int i=0; i<row ;i++){
    for(int j=0; j<column;j++){
        cout<<"enter the elements of array:";
        cin >>arr[i][j];
    }
}
for(int i=0; i<row ;i++){
    for(int j=0; j<column;j++){
        
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}


    return 0;
}

#include <stdio.h>
int main()
{
    int n;
    printf("enter n :");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            printf("#");
        }
        int first = 1;

        for (int j = 0; j <= i; j++)
        {
            printf("%d ", first);
            first = first * (i - j) / (j + 1);//iCj+1
        }

        printf("\n");
    }
    return 0;
}
//damn good!!!
