//arr[ ]=[ 1 1 2 2 3 3 4 5 5 6 6] here the plan is to check both left and right side of the elemnet so the space need to be trimed from first and last element , also the idea is to check the even/odd of mid element as to elimina=te one side as initially if the element is not passed the series is going like even->odd after passing odd=even 
#include<bits/stdc++.h>
using namespace std;

int functionn(vector<int>& arr){
    int n = arr.size();

    if(n == 1) return arr[0];
    if(arr[0] != arr[1]) return arr[0];
    if(arr[n-1] != arr[n-2]) return arr[n-1];

    int low = 1;
    int high = n - 2;

    while(low <= high){
        int mid = (low + high) / 2;

        if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1])
            return arr[mid];

        if((mid % 2 == 0 && arr[mid] == arr[mid+1]) ||
           (mid % 2 == 1 && arr[mid] == arr[mid-1])){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {1,1,2,2,3,3,4,5,5,6,6};

    int ans = functionn(arr);

    cout << "Single element is: " << ans << endl;

    return 0;
}