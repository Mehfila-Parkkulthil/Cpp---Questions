/*Question 7
Print factorial of n
*/

#include <iostream>
using namespace std;
int main(){
 int n =5;
 int prod =1;  
 for(int i=1;i<=n;i++){
  prod*=i;
 }
cout <<"factorial of n : "<<prod <<endl;
  return 0;
}