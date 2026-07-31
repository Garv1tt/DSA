#include<bits/stdc++.h>
using namespace std;
// int main(){
    // datatypes
    // int(range: -10**9 to 10**9),long(range:-10**12 to 10**12),long long (range: -10**18 to 10**18) 
    // int x = 10;
    // for very large values we use long and long long
    // long x = 15;
    // long long x = 150000;


    // float & double
    // float x = 5.6;
    // double y = 9;
    // cout << "Value of x is: "<< x << " and y is: "<< y;

    // string and getline
    // string s1,s2;
    // cin >> s1 >> s2;
    // cout << s1 << " " << s2;
    // string str;
    // getline(cin, str);
    // cout << str;


    // character
    // char ch = 'g';
    // cout << ch;

    // return 0;
// }  

// int main(){
//     if else statement
//     int age;
//     cin >> age;
//     if (age<18)
//     {
//         cout << "You are not eligible for the job";
//     }
//     else if (age<=57) 
//     {
//         cout << "You are eligible for the job"; 
//         if (age>=55)
//         {
//             cout << ", but retirement soon!";
//         }
        
//     }
//     else
//     {
//         cout << "Retirement time";
//     }
//     return 0;
// }

// int main(){
//     switch cases(rarely used)
//     int day;
//     cin >> day;
//     switch(day){
//         case 1:
//             cout << "Monday";
//             break;
//         case 2:
//             cout << "Tuesday";
//             break;
//         case 3:
//             cout << "Wednesday";
//             break;
//         case 4:
//             cout << "Thursday";
//             break;
//         case 5:
//             cout << "Friday";
//             break;
//         case 6:
//             cout << "Saturday";
//             break;
//         case 7:
//             cout << "Sunday";
//             break;
//         default: 
//         cout << "Enter a Valid Number";
//         break;
//     }
//     return 0;

// }

// int main(){
//     basic arrays and strings
//     1D array
//     int arr[5];
//     cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
//     arr[4] +=10;
//     cout << arr[4];
   
//     2D array
//     int arr[3][5];
//     arr[1][3] = 65;
//     cout << arr[1][3 ];
// }
// int main(){
//     For Loop
//     string s = "Garvit";
//     for (int  i = 1; i <= 10; i++)
//     {
//         cout << s << endl;
//     }
    
//     return 0;

// }
// int main(){
//     While Loop 
//    int i =1;
//    while(i<=5){
//     cout << "Hello Garvit " << i << endl;
//     i = i+1;
//    }
//     return 0;
//  "do" method ke andr even if the condtition is false it will run the loop atleast one time
// int i = 2;
// do
// {
//    cout << "Hello, World!" << endl;
//    i=i+1;
// } while(i<=1);
// cout << i << endl;
// return 0;

// } 
//  void PrintName(string name) {
//         cout << "Hello, " << name << endl;
//     }

// int main(){
//     Functions(void,return,parameterized,non-parameterized)
//     VOID --> which does not return any value
    
//    string name;
//    cin >> name;
//    PrintName(name);

//     return 0;
// }

// int sum(int num1, int num2){
//     int num3 = num1 + num2;
//     return num3;
// }
// int main(){
//     return --> which does return the value
//     int num1,num2;
//     cin >> num1 >> num2;
//     int res = sum(num1,num2);
//     cout << res;
//     return 0;
// }
// pass by value lets you change the copy and keep the original to itself
// pass by reference lets you change the original as it does not make any copies(only place an "&" just before the variable in the function)(array is built in with pass by reference)
// void doSomething(int arr[], int n){
//     arr[0]+=100;
//     cout << "Value inside function is: " << arr[0] << endl;
// }
// int main(){
//     proof that array are by default pass by reference 
//     int n = 5;
//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//         cin >> arr[i];
//     }
//     doSomething(arr, n);
//     cout << "Value inside int main: " << arr[0] << endl;
//     return 0;
// }