#include <stdio.h>
#include<stdbool.h>
bool trueorfalse(int arr[], int size) {
    int t = 0;
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[i] == arr[j]){
                t = 1;
            }
        }
    }
    if(t == 0){
        return false;
    }
    else{
        return true;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 1};
    int size  = sizeof(arr) / sizeof(arr[0]);
    bool result = trueorfalse(arr, size);
    if (result) {
        printf("true");
    } else {
        printf("false");
    }
    return 0;
}
