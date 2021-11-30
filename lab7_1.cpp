#include<iostream>
#include<string>

using namespace std;

string func1(string x)
{
	int i = 0, L = x.size();
	string y;
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y ;
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y ;
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string x , z;
	
    cout << "Input text: ";
	cin >> x ;
    cout << "Reversed text: "<< func1(x) << endl;
	if(x == func1(x) or func2(x) == func2(func1(x)) or func3(x) == func3(func1(x)))
		{
			z = "YES";
		}else
			{
				z = "NO" ;
			}
    cout << "Palindrome: "<< z ;
    return 0;
}
