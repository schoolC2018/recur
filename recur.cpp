#include <iostream>
//string::substr
#include <string>

using namespace std;

bool isPalindrome(string s)
{
	   string s;
	
	if (s.length() <= 1)
	{ 
		return true ;
	}
	
	
	
}



int main ()
{
        string s ="noon";
	
	if (isPalindrome(s))
	{
		cout << " It is a palindrome!" <<endl;
	}
	  else 
	  {
		  cout << " It is not a palindrome!" <<endl;
	  }
	  
    return 0;
 }
	
