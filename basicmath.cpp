#include <iostream>;
#include <cmath>
#include <vector>
using namespace std;
 
// int main(int n) {
//     Digit Counter
//     cin >> n;
//     int count=0;
//     while(n>0){
//         count=count+1;
//         n=n/10;
//     }
//     cout << count;
//     return 0;
// }
// int main(int n){
//     Reverse a Number
//     cin >> n;
//     int RevNumber=0;
//         while(n>0){
//             int lastdigit=n%10;
//             n=n/10;
//             RevNumber=(10*RevNumber)+lastdigit;
//         }
//         cout << RevNumber;
//     return 0;
// }
// int main(int n){
//     Palindrome Number
//     cin >> n;
//     if(n<0) return false;
//         long long original = n;
//         long long reverse = 0;
//         int x=n;
//         while(x>0){
//             int lastdigit = x%10;
//             reverse = (10*reverse)+lastdigit;
//             x=x/10;  
//         };
//         if(reverse == original){
//             cout << "Yes,They are a palindrome: " << original;
//         } else {
//             cout << "No,They are not a palindrome :" << original;
//         }
//     return 0;
// }
// int main(){
//     int n;
//     cin >> n;
 // Armstrong Number
//     if(n<0){
//         cout << "Invalid Input";
//         return 0; 
//     }
//     int x= n; // x = 371
//     int sum=0;
//     int count=0;
//     int countfinder = n;
//     while(countfinder>0){
//         count = count + 1;
//         countfinder = countfinder/10;
//     }

//     while(n>0){
//         int lastdigit=n%10;
//         n=n/10;
//         sum=sum+pow(lastdigit,count);
//     }   
//     if(sum == x){
//         cout << "It is an Armstrong Number: " << x;
//     } else {
//         cout << "It is not an Armstrong Number";
//     }
//     return 0;
// }
// int main(){
//     Print all Divisors
//     int n;
//     vector<int> arr= {};
//     cin >> n;
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             arr.push_back(i);
//         }
//     }
//     cout << "[";

// for(int i = 0; i < arr.size(); i++){
//     cout << arr[i];

//     if(i != arr.size() - 1){
//         cout << ",";
//     }
// }

// cout << "]";
// }
int main(){
    
}