
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int val;
    cin >> val;
    int l=0;
    int r=n-1;
    while(l<=r){
        int mid =(l+r)/2;
        if(arr[mid]==val){
            cout << mid+1;
            break;
        }
        else if (val<arr[mid]) r = mid-1;
        else if( val> arr[mid]) l = mid+1;
    }
    return 0;
}
