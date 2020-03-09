
////////////         BINARY SEARCH          ///////////////////

#include <iostream>
using  namespace std;
int binarySearch(const int arr[],int siz,int target){
    int low=0;
    int high=siz-1;
    while (low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<target){
            low=mid+1;
        } else if (arr[mid]>target){
            high=mid-1;
        } else{
            return mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,88};
    int siz= sizeof(arr)/ sizeof(arr[0]);
    int res=binarySearch(arr,siz,1);
    if(res!=-1)
        cout<<res;
    else
        cout<<"not found";
    return 0;
}


