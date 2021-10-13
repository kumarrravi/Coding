#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int l,int h){
    int pivot=arr[l],i=l,j=h,temp1,temp2;
    while(i<j){
        while(arr[i]<=pivot && i<=h){i++;}
        while(arr[j]>pivot && j>=l){j--;}
        if(i<j){
            temp1=arr[i];
            arr[i]=arr[j];
            arr[j]=temp1;
        }
    }
    //Putting pivot at its correct place .
    temp2=arr[j];
    arr[j]=pivot;
    arr[l]=temp2;
    return j;
}

void quicksort(int arr[],int l,int h){
    if(l<h){
        int pivot = partition(arr,l,h);
        quicksort(arr,l,pivot-1);
        quicksort(arr,pivot+1,h);
    }
}

int main() {
    int i=0,j,k,l;
    cout << "Enter length of array"<<"\n";
    cin >> l;
    int arr[l];
    cout << "Enter array elements \n";
    while(i<l){
        cin >> arr[i];
        i++;
    }
    quicksort(arr,0,l-1);
    for(j=0;j<l;j++){
        cout << arr[j] << " " ;
    }
    cout << "\n";
}
