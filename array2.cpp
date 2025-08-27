#include<iostream>
#include<vector>
using namespace std;

// int finduni(vector<int> arr)
// {
//     int ans=0;
//     for(int i=0;i<arr.size();i++)
//     {
//         ans=ans^arr[i];
//     }
//     return ans;

// }
int main()
{
    // vector<int> arr;
    // // cout<<arr.size()<<endl;
    // //diff between size and capicity

    // arr.push_back(6);
    //     arr.push_back(5);
    //     arr.pop_back();// the last element will get deleted

    // for(int i=0;i<arr.size();i++)
    // {
    //     cout<<arr[i]<<endl;
        
    // }

    // vector<int> brr(10,-1);

    // //here we explicitly give size and capicity 10 bith will be same
    // //int every cell it be 0
    // //if i write -1  it will be -1 inn every cell
    // for(int i=0;i<brr.size();i++)
    // {
    //     cout<<brr[i]<<endl;
        
    // }


    //dynamic
    // int n;
    // cout<<"enter the value "<<endl;
    // cin>>n;
    // vector<int> brr(n,-1);

    
    // for(int i=0;i<brr.size();i++)
    // {
    //     cout<<brr[i]<<endl;
        
    // }
    

    // vector<int> crr{10,20,30,40};//direct value
    //  for(int i=0;i<crr.size();i++)
    // {
    //     cout<<crr[i]<<endl;
        
    // }

    //find uniqe element

    // int n;
    // cout<<"enter size ";
    // cin>>n;

    // vector<int> arr(n);
    // cout<<"enter the element "<<endl;
    // for(int i=0;i<arr.size();i++)
    // {
    //     cin>>arr[i];
    
    // }

    // int unique=finduni(arr);
    // cout<<"unique elemnt is:"<<unique;
    // return 0;

    // //union of array
    // vector<int> a{1,2,3,4};
    // vector<int> b{5,6,7};

    // for(int i=0;i<b.size();i++)
    // {
    //     a.push_back(b[i]);
    // }

    // for(int i=0;i<a.size();i++)
    // {
    //     cout<<a[i]<<endl;
    // }


    //intersection of array
    //  vector<int> a{1,2,3,4};
    // vector<int> b{2,6,7};
    // vector<int>ans;

    // for(int i=0;i<a.size();i++)
    // {
    //   for(int j=0;j<b.size();j++)
    // {
    //     if( a[i]==b[j])
    //     {
    //         // marking
    //         b[j]=-1;
    //         ans.push_back(a[i]);
    //     }
    // }  
    // }

    // for(int i=0;i<ans.size();i++)
    // {
    //     cout<<"intersection is"<<ans[i]<<endl;
    // }

    //union of array without duplicate number
    // vector<int> a{1,2,3,4};
    // vector<int> b{5,2,4,6,7};
    
    // for(int i=0;i<b.size();i++)
    // {
    //     int found=0;
    //     for(int j=0;j<a.size();j++)
    //     {
    //         if(a[j]==b[i])
    //         {
    //             found=1;
    //              break;
    //         }
            
           
    //     }
    //     if(found==0)
    //         {
    //          a.push_back(b[i]);

    //         }
        
    // }

    // for(int i=0;i<a.size();i++)
    // {
    //     cout<<a[i]<<endl;
    // }

    //pair sum
    // vector<int> b{2,6,7};
    // vector<int>a{3,4,6};
    // int sum=9;
    // for(int i=0;i<a.size();i++)
    // {
    //   for(int j=0;j<b.size();j++)
    // {
    //     if( a[i]+b[j]==sum)
    //     {
    //         cout<<"pair is"<<a[i]<<"and "<<b[j];
    //     }
    // }  
    // }
    // return 0;

    // there is other good approch
    //outer loop will be same but inner loop start from outerloop +1 element
    //so that itreation does not repeat


    //  vector<int> b{2,6,5,7};
    // vector<int>a{3,4,6};
    // int sum=9;
    // for(int i=0;i<a.size();i++)
    // {
    //   for(int j=i+1;j<b.size();j++)
    // {
    //     if( a[i]+b[j]==sum)
    //     {
    //         cout<<"pair is"<<a[i]<<"and "<<b[j]<<endl;
    //     }
    // }  
    // }

    //sort zeros

    vector <int> arr{0,1,0,1,1,0,1,0,1};
    int s=0,e=arr.size()-1,i=0;
    while(s<=e)
    {
       if(arr[i]==0)
       {
        swap(arr[i],arr[s]);
        i++;
        s++;
        
       } 
       if(arr[i]==1){
        swap(arr[e],arr[i]);
        e--;
       }

    };
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i];
    }
    return 0;

}