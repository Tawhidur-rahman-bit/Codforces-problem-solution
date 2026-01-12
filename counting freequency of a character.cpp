#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; // number of test cases
    cin >> t;

    while (t--) {
        int n; // number of strings in this test case
        cin >> n;
        int flag=0;

        int freq[26] = {0}; // reset frequency array for this test case

        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            for (char c : s) {
                freq[c - 'a']++;
 
            }
        }
        for(int i=0;i<26;i++){
            if(freq[i]>0){
                if(freq[i]%n!=0){
                    flag++;
                    break;
                }
            }
        }
        if(flag==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

         
    }

    return 0;
}
