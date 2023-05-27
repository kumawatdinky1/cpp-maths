#include<iostream>
using namespace std;
int count(int n){
    //write your code here
    int count = 0;
    while (n > 0) {
      
      int lastdigit = n % 10;
      count++;
      n = n / 10;
    }
    return count;
}

int main()
{
  int n;
  cin>>n;
  count(n);
}
