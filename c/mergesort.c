#include<stdio.h>
void merge( int arr[],int left ,int right ,int mid){
int i,j,k;
int n1= mid-left+1;
int n2= right-mid;

int leftarr[n1],righta   arr[n2];

//copying elements in both the array 
for(i=0;i<n1;i++)
leftarr[i]=arr[left+1];
for(j=0;j<n2;j++)
rightarr[j]=arr[mid+1+j];

//merging the temp arr back to the main array 

i=0;
j=0;
k=left;

while(i < n1 && j < n2){
    if(leftarr[i] <= rightarr[j]){
    arr[k]=leftarr[i];
    i++;
    }
    else{
        arr[k]=rightarr[j];
        j++;
    }
    k++;
}
// copying the  remaining elements of left arraay if any
while (i<n1){
    arr[k]=leftarr[i];
    i++;
    k++;
}
//coying the remaining element of  right array if any 
while(j<n2){
    arr[k]=rightarr[j];
    j++;
    k++;
}

}       