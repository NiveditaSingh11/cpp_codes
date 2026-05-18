#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter size of array :";
    cin>>n;
    int arr[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"enter the element :";
            cin>>arr[i][j];
        }
    }
    int maxSum=0;
    int row=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum = sum +arr[i][j];
        }

        if(sum>maxSum){
            maxSum = sum;
             row = i;
        }

        cout<<" row sum  for i= "<<i<<"and sum ="<<maxSum<<endl;
    }
    cout<<endl;
 cout<<"maximum sum occurs for i= "<<row<<"and sum ="<<maxSum<<endl;
    return 0;
}