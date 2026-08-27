// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   int arr[6]={10,5,20,8,20,15};

//   int largest = INT_MIN;
//   int secondLargest = INT_MIN;

//   for(int i =0; i<6 ; i++){
//     if(arr[i]>largest){
//       secondLargest = largest;
//       largest = arr[i];

//     }else if(arr[i]>secondLargest && arr[i]!=largest){
//       secondLargest = arr[i];
//     }
//   }
//   cout<<secondLargest<<" ";
//   cout<<largest<<" ";
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[10]={0,10,0,15,8,0,20,25,0,30};
  int k=5;

  int count=0;

  for(int i =0; i<10; i++){
    if(arr[i]==0) continue;
    int j=i+1;

    while(j<10 && arr[j]==0){
      j++;
    }

    if(j<10 && arr[j]-arr[i]>=k) count++;
  }
  cout<<count<<" ";
}