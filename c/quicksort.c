#include<stdio.h>
   //printing an array
    void printArray(int* A, int n){
        for (int i=0;i<n;i++){
            printf("%d",A[i]);
        }
        printf("\n");
    }


    
    int partition( int A[],int low ,int high){
        int pivot=A[low];
        int  i = low+1;
        int j=high;
        int temp;
        do{
        while(A[i]<=pivot){
            i++;
        }
        while(A[j]>pivot){
            j--;
        }
        if(i<j){
             temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
        }while(i<j);
        //swap a low and aj 
        temp=A[low];
        A[low]=A[j];
        A[j]=temp;
        return j;

    }
    void quicksort(int A[],int low , int high )//runnning the quick sort    
    {
        int partitionindex;//index of piviot element after partition 
    if(low<high){
        partitionindex=partition(A,low,high);
        quicksort(A,low,partitionindex - 1);//sort the left subarray 
        quicksort(A, partitionindex+1,high);//sort the right subarray
    } 
    }
int main (){

    //taking a sample arrray 


    int A[]={5,98,3,87,56};
    int n=5;//length of array 
    printArray(A,n);//print the arrray  
    quicksort(A ,0,n-1);//runs the quick sort 
    printArray(A,n);//print the sorted array 
    return 0;
}