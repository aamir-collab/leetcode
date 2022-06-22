// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    void fun(int arr[], int l, int n){
        int r = n;
        while(l<r){
            int temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
            l++;r--;
        }
    }
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        d=d%n;
        fun(arr,0,d-1);
        fun(arr,d,n-1);
        fun(arr,0,n-1);
        
        // while(d>0){
        //     int temp = arr[0];
        //     for(int i =1; i<n; i++){
        //         arr[i-1] = arr[i];
        //     }
        //     arr[n-1] = temp;
        //     d--;
        // }
    }
};

// { Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}  // } Driver Code Ends