#include<iostream>

using namespace std;

int factorial(int n){

    //base case
    // if(n==0){
    //     return 1;
    // }

    // int smallerProblem = factorial(n-1);prac

    // int biggerProblem = n*(smallerProblem);

    return n*factorial(n-1);
}
int main(){

    int n;

    cin>>n;

    int ans = factorial(n);

    cout<<ans;




    return 0;
}