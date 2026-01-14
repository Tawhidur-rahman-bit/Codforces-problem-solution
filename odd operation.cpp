#include <bits/stdc++.h>
using namespace std;
bool hasOddDigit(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 1) {
            return true;   // found an odd digit
        }
        n /= 10;
    }
    return false;  // no odd digit found
}


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int y=n;
	    vector<int>v;
	    while(n>0){
	    int x=n%10;
	    v.push_back(x);
	    n=n/10;
	    }
	    int x=v.size();
	    if(x==1&&v[0]%2==0)
	    cout<<-1<<endl;
	    else if(x==1&&v[0]%2==1)
	    cout<<0<<endl;
	    else{
	    int odd=0;
	    int even=0;
	    int zero=0;
	    for(int i=0;i<v.size();i++){
	        if(v[i]==0)
	        zero++;
	        else{
	            if(v[i]%2==0)
	            even++;
	            else
	            odd++;
	        }
	        
	    }
	    //if(odd+even==1&&zero==x-1){
	       //cout<<1<<endl;
	        
	   // }
	    
	    
	        if(even>0&&odd==0){
	            int m=0;
	            int mx = *max_element(v.begin(), v.end());
	            while(!hasOddDigit(y)){
	                m++;
	                y=y-mx;
	                if (y <= 0) {          
         
        break;
    }
	            }
	            cout<<m+1<<endl;
	            
	        }
	        if(odd>0){
	            if(v[0]%2==1)
	            cout<<0<<endl;
	            else
	            cout<<1<<endl;
	        }
	        
	    }
	}
}
 