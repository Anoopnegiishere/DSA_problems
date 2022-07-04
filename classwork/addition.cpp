#include <bits/stdc++.h>
using namespace std;

string add(string a, string b){
    if (a.length() > b.length())
    swap(a, b);
	string sum = "";
	//complete the funcution;
    int i;
   int l1 = a.length();
   int l2 = b.length();
   int dif = l2 - l1;
   int carry = 0;
    int s;
   
     for (int i=l1-1; i>=0; i--) {
      s = ((a[i]-'0') + (b[i+dif]- '0') + carry);
      sum.push_back(s%10 + '0');
      carry = s/10;
  
    }
    for (int i=dif-1; i>=0; i--) {
      s = ((b[i]-'0')+carry);
      sum.push_back(s%10 + '0');
      carry = s/10;
   }
      if (carry)
    sum.push_back(carry+'0');
   reverse(sum.begin(), sum.end());
   return sum;
}
int main() {
    string number1 = "45376862462";
    string number2 =  "1257898";
    cout<<add(number1,number2)<< " \n";
    std::cout << "Hello World!\n";
    return 0;
}
