#include<iostream>
#include<limits.h>
using namespace std;

void printarr(int arr[],int size)
{
    for (int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }

}
void ssearch(int arr[],int size,int target){
    for(int i;i<size;i++)
    {
        if(arr[i]==target)
        {
            cout<<"target at "<<i<<" index";
        }
    }
}

int main(){
    // int arr[101];
    // char ch[102];
    // cout<<"array created";

    // int a=5;
    // cout<<"address is"<<&a<<endl;
    // cout<<"size of "<<sizeof(a)<<endl;

    // int arr[5]={2,3,4,5,5};
    // for (int i=0;i<5;i++)
    // {
    //     cout<<arr[i]<<endl;
    // }

    // int arr[5];
    // for(int i=0;i<5;i++)
    // {
    //     cin>>arr[i];
    // }
    // for(int i=0;i<5;i++)
    // {
    //     cout<<arr[i];
    // }

    // int arr[5];
    // for(int i=0;i<5;i++)
    // {
    //     cin>>arr[i];

    // }
    // for(int i=0;i<5;i++)
    // {
    //     cout<<arr[i]*2<<endl;
    // }
    // int arr[5];
    // for(int i=0;i<5;i++){
    //     cin>>arr[i];
    // }
    // int sum=0;
    // for(int i=0;i<5;i++)
    // {
        
    //     sum=sum+arr[i];
        
    // }
    // cout<<sum;

    // int arr[5]={2,3,4,5,6};
    // for (int i=0;i<5;i++)
    // {
    //     if(arr[i]==5)
    //     {
    //         cout<<"found at "<<i<<"index";
    //     }
    // }
    // int arr[5]={2,35,56,4,4};
    // int size=5;

    //     // printarr(arr,size);
    //     ssearch(arr,size,56);

   //----- count 0 and 1 in array
//    int arr[6]={1,1,0,1,0,1};
//    int found0=0;
//    int found1=0;
//    for (int i=0;i<6;i++)
//     {
//         if(arr[i]==0){
//             found0++;
//         }
//         else{
//             found1++;
//         }
//     }
//     cout<<"zero count "<<found0;
//     cout<<"one count "<<found1;

//---------- min number in array

// int arr[5]={4,5,3,77,8};

// int minarr=INT_MAX;
// for (int i=0;i<5;i++)
// {
//     if(minarr>arr[i])
//     {
//         minarr=arr[i];
//     }

// }
// cout<<"min arr is "<<minarr;

//------------- revarse array
// int arr[5]={1,2,3,4,5};
// int i=0,j=4;
// while (i<=j)
// {
//     swap(arr[i],arr[j]);
//     i++;
//     j--;
// }

// for(int i=0;i<5;i++)
// {
//     cout<<arr[i]<<endl;
// }

//---------- extrean array
int arr[5]={1,2,3,4,5};
int i=0;
int j=4;
while(i<=j)
{
    if(i==j){
        cout<<arr[i];
    }
    else{
         cout<<arr[i];
    
    cout<<arr[j];
    }
   
    i++;
    j--;

}

}
