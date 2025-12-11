/*Question 6
Sum of all numbers from 1 to n , which are divisible by 3
*/

#include <iostream>
using namespace std;
int main(){
  cout<<"Hi everyone"<<endl;
  int n,sum;
  sum=0;
  cout<<"Enter n: ";
  cin >> n;
  for(int i=1;i<=n;i++){
    if(i%3==0){
      sum+=i;
    }
  }

  cout<<"Sum of all numbers divisible by 3 till 7 is "<< sum<<endl;
  return 0;
}