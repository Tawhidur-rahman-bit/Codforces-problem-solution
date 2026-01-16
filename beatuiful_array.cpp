#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    sort(v.begin(),v.end());
	    //int mn=*min_element(v.begin(),v.end());
	    int mn=v[0];
	    
	    if(mn%2==0){
	        //int flag=0;
	        int y=0;
	        for(int i=0;i<n;i++){
	            int flag=0;
	            int cnt=0;
	            
	            if(v[i]%2==1){
	                cnt++;
	                for(int j=0;j<i;j++){
	                     
	                    if(v[j]%2==1&&v[i]>v[j]){
	                        flag++;
	                        break;
	                    }
	                }
	            }
	            if(cnt>0&&flag==0){
	                y++;
	                break;
	            }
	        }
	        if(y>0)
	        cout<<"NO"<<endl;
	        else
	        cout<<"YES"<<endl;
	    }
	    else{
	        int y=0;
	        for(int i=0;i<n;i++){
	            int flag=0;
	            int cnt=0;
	            
	            
	            if(v[i]%2==0){
	                cnt++;
	                
	                for(int j=0;j<i;j++){
	                     
	                    if(v[j]%2==1&&v[i]>v[j]){
	                        flag++;
	                        break;
	                    }
	                }
	            }
	            if(cnt>0&&flag==0){
	                y++;
	                break;
	            }
	        }
	        if(y>0)
	        cout<<"NO"<<endl;
	        else
	        cout<<"YES"<<endl;
	        
	    }
	}

}
  