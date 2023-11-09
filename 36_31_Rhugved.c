#include<stdio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void qsort(int a[], int l, int h) {

    if (l < h) {
        
        int target = a[l]; 
        int i = l;  

        for (int j = l + 1; j <= h; j++) {
            
            if (target >= a[j]) {
                
                i++;                
                swap(&a[i], &a[j]);
            }
        }

        swap(&a[i], &a[l]);

        qsort(a, l, i - 1);
        qsort(a, i + 1, h);
    }
}

int main(){

    int n;
    printf("\n Enter the numbers to be sorted :");
    scanf("%d",&n);
    int a[n];

    printf("\n Enter Numbers one by one : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\n Before Sorting : \n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    

    qsort(a,0,n-1);

    printf("\n After Sorting : \n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
   return 0; 
}
