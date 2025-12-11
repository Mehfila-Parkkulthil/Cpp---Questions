/*Question 5
check whether the given number is prime or not
*/

#include <iostream>
int main(){
  int n=52;
  bool isPrime =true;
  for(int i=2; i*i<=n; i++){
    if(n%i==0){
      //non prime
      isPrime =false;
      break;
    }
  }
  if(isPrime) std::cout << "Prime";
  if(isPrime==false) std:: cout<<"Not Prime";

  return 0;
}