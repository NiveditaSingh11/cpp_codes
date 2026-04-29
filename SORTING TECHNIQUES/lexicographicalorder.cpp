#include <iostream>
#include <cstring>
using namespace std;
void selectionSort (char fruit[][20] , int n){
    for(int i=0;i<n-1;i++){
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(strcmp(fruit[min_idx] , fruit[j])>0){
                min_idx=j;
            }
        }

        if(i!= min_idx){
           
            char temp[20];
            strcpy(temp , fruit[i]);
            strcpy(fruit[i], fruit[min_idx]);
            strcpy (fruit[min_idx], temp);
        }
    }
    

}
int main(){

    int r;
    cout<<"enter the row: number of fruit names: ";
    cin >>r;
    
    char fruit[r][20];
    int n= sizeof(fruit)/ sizeof(fruit[0]);

    for(int i=0; i<r;i++){
        cout<<"enter the fruit name:";
        cin >> fruit[i];
    }
    

    selectionSort (fruit , r);
    for(int i=0 ;i<r;i++){
        cout<<fruit[i]<<"  ";
    }
    return 0;
}

