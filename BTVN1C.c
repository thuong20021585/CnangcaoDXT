#include<stdio.h>
void mangChan(int arr[]){
    printf("Phan tu cua mang chan la: \n");
    for(int i=0;i<10;i++){
        
        if(arr[i]%2==0){
            printf(" %d\n",arr[i]);
        }
    }
}

void mangLe(int arr[]){
    printf("Phan tu cua mang le la: \n");
    for(int i=0;i<10;i++){
        if(arr[i]%2==1){
            printf("%d\n",arr[i]);
        }
    }
}
int main(){
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    mangChan(arr);
    mangLe(arr);
    return 0;
}
