
////////////         LINEAR SEARCH          ///////////////////

#include <iostream>
using  namespace std;
int linearSearch(const int arr[],int siz,int target){
    for(int i=0;i<siz;i++){
        if(arr[i]==target) return i+1;
    }
    return -1;

}
int main(){
    int arr[]={1,77,3,4,5,6,7,88};
    int siz= sizeof(arr)/ sizeof(arr[0]);
    int res=linearSearch(arr,siz,9);
    if(res!=-1)
        cout<<res;
    else
        cout<<"not found";
    return 0;
}


