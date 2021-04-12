#include <cstdlib>
#include <ctime>
#include <bits/stdc++.h>

#include <iostream>

using namespace std;
int sorter(int arr[],int n){
    bool swapped=true;
    while (swapped){
        swapped=false;
        for(int i=1;i<n;i++){
            if (arr[i-1]>arr[i]){
                arr[i-1]+=arr[i];
                arr[i]=arr[i-1]-arr[i];
                arr[i-1]-=arr[i];
                swapped=true;
}
  }
  
 }
 return 0;
}
int how_many_in(int arr[],int element,int n){
    int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == element) {
			count += 1;
		}
	}
    cout<<count<<endl;
    return 0;
}

int main() {
  clock_t start,end;
  start=clock();
  
  srand((unsigned) time(0));
    int n=100000;
    int arr[n];
    for(int i=0;i<n;i++){                        //APPEND
        arr[i]=rand()%101;
      }
       
    /*for (int i=0;i<n;i++){
        cout<<"arr["<<i<<"]="<<arr[i]<<endl;   //PRINT BEFORE SORT
    }*/
    cout<<"First Task Done (APPEND) :"<<endl;
    
    sorter(arr,n);
    cout<<"Second Task Done (SORT) :"<<endl;     //SORT
                                                
    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;          //PRINT
    }
    cout<<"Third Task Done (PRINT) :"<<endl;
    how_many_in(arr,66,n);
    cout<<"Fourth Task Done (SEARCH) :"<<endl;              //SEARCH
    end=clock();
  double duration=double(end-start)/double(CLOCKS_PER_SEC);
  cout<<duration<<"s"<<endl;


  }
  