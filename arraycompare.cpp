#include <iostream>
using namespace std;
int main(){
int array[] = {1,6,5,7,10,8,9};
int size = sizeof(array)/sizeof(array[0]);
for (int i = 1; i < size; ++i) {
	
    int j = i-1;
    int k = i+1;
    while(array[j] < array[i] && array[k] > array[i]){
        if(j == 0 && k == size-1){
            cout << array[i];
            return 0;
        }
        if(j>0){
            j--;
        }
        if(k<size){
            k++;
        }

    }
}
cout << -1;
return 0;
}
