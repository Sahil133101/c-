// // #include<iostream>
// // using namespace std;
// // int main(){

// //     int a;
// //     int b;
// //      cin>>a;
// //      cin>>b;

// //      if (a==b){
// //         cout<<"square";

// //      }
// //      else {
// //         cout<<"recatngle";
// //      }
// //     return 0;


// // }

// #include<iostream>
// using namespace std;

// int main(){

//     int a ;
//     int b;
      
//     cin>>a;
//     cin>>b;

//     if (a>b){
//         cout<<"a is greater than b";
//     }

//     else {
//         cout<<"b is greater"
//     }
//     return 0;

// }

// #include <iostream>
// int main()
// {
// 	using namespace std;
// 	int quantity,price;
// 	cout << "Enter quantity" << endl;
// 	cin >> quantity;
// 	price = quantity*100;
// 	if (price>1000){
// 		cout << "Total cost is " << price-(price*.1) << endl;
// 	}
// 	else{
// 		cout << "Total cost is " << price << endl;
// 	}
// 	return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int =  service;
//     int = year;
    

//     cout<<"your year of service";
//     cin>> service;
//     cout<<"your salary";
//     cin>> year;

//     if (year>5){
//         int bonus = cout<< salary* 5%<<;

        
//     }
//     else {
//         cout<<"not elegible for";
//     }

//     return 0;

// }

#include <iostream>
using namespace std;

int main() {
    char ch;
    
    // Ask user for a character
    cout << "Enter a character: ";
    cin >> ch;
    
    // Check if the character is lowercase
    if (ch >= 'a' && ch <= 'z') {
        cout << "The entered character is lowercase." << endl;
    }
    // Check if the character is uppercase
    else if (ch >= 'A' && ch <= 'Z') {
        cout << "The entered character is uppercase." << endl;
    }
    // If the character is neither lowercase nor uppercase
    else {
        cout << "The entered character is not a lowercase or uppercase letter." << endl;
    }
    
    return 0;
}






