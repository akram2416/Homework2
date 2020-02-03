#include<bits/stdc++.h>
using namespace std;


string add(string a, string b)
{
   
   if (a.length() > b.length()) // In the case of a is larger than b then it swaps the big integers
       swap(a, b);

   string str = "";// to store the calculation
   
   int n1 = a.length(), n2 = b.length();// calculates the length of the string
   reverse(a.begin(), a.end());
   reverse(b.begin(), b.end());

   int carry = 0;
   for (int i=0; i<n1; i++)
   {
       int sum = ((a[i]-'0')+(b[i]-'0')+carry);
       str.push_back(sum%10 + '0');
       carry = sum/10;
   }
   for (int i=n1; i<n2; i++)// for adding rest of the digits
   {
       int sum = ((b[i]-'0')+carry);
       str.push_back(sum%10 + '0');
       carry = sum/10;
   }
   if (carry)
       str.push_back(carry+'0');// to add the rest of the carry
   reverse(str.begin(), str.end());// tp reverse the string
  return str;
}
  int main()
{
   string a;
   string b;
   string c = "done";
  do{
  cout << "Please enter integers a : ";
  cin>>a;
  if((a.compare(c)) == 0){
  break;
}
  cout << "Please enter integers b : ";
  cin>>b;
  cout << endl << "The result is  : " << add(a, b) << endl << endl;
} while((a.compare(c)) != 0 );
  return 0;
}


