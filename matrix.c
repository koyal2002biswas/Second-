#include<stdio.h>
int main(){
    int i,j;
    
    int a[2][2];
    printf("Enter array elements: ");
    for(i=0; i<2;i++){
        for(j=0; j<2; j++){
            scanf("%d",&a[i][j]);
        }
    }
    int l =a[0][0];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(a[i][j]>l){
                l =a[i][j];
            }
        }
    }
    printf("The largest element is %d ",l);
}
