#include <bits/stdc++.h>
using namespace std;

int printNnumber(int n){
    if(n==0) return 0;
   cout<<printNnumber(n-1)<<" ";
   return n; 
}

void printReveseNNumber(int n){
    if(n==0) return ;
    cout<<n<<" ";
     printReveseNNumber(n-1);
}

int sumOfNumber(int n){
    if(n==0) return 0;
    int sum = n + sumOfNumber(n-1);
   return sum;
}
int i=0;
int reverseArray(int arr[],int n,int ans[]){
    if(n==0) return 0;
    
    ans[i]=arr[n-1];
   i++;
    return reverseArray(arr,n-1,ans);
}

void reverseArrayMethod2(int arr[],int i,int n){
    if(i==n/2) return ;

    swap(arr[i],arr[n-1-i]);
    reverseArrayMethod2(arr,i+1,n);
    
    return;

}

int main(){
    // int returnValue=printNnumber(100);
    // cout<<returnValue;

    // printReveseNNumber(100);

    // int sum =sumOfNumber(10);
    // cout<<sum;

    int array1[5]={1,2,3,4,5};
    // int answerArray[5]={0};
    // reverseArray(array1,5,answerArray);

    reverseArrayMethod2(array1,0,5);
    for(int i=0;i<5;i++){
        cout<<array1[i];
    }





    
return 0;
}