#include<iostream>
using namespace std; 
int main(){
    int n ;
    cin>>n;
    int ans=0;
 while(n!=0) {
    int reverse = n%10;
    ans = (ans*10)+reverse ;

    n =n/10;

 }
 cout<<ans;
    

    return 0;

}