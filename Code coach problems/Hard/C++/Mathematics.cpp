#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
	string op = "+-*/";
	int n;
	cin >> n;
	string a;
	cin.ignore(32767, '\n');
	getline(cin, a);
	int index = 0;
	for(int i = 0; i < a.size(); i++)
	{
		if(a[i] == '(')
		{
			vector <int> nums;
			vector <char> ops;
			while(a[i] != ')')
			{
				i++;
				int s = i;
				while(isdigit(a[i]))
					i++;
					
				ops.push_back(a[i]);
					
				nums.push_back(stoi(a.substr(s, i)));
			}
			int t = nums[0];
			
			for(int i = 0; i < ops.size(); i++)
			{
				switch(ops[i])
				{
					case '+':
						t += nums[i+1];
						break;
					case '-':
						t -= nums[i+1];
						break;
					case '*':
						t *= nums[i+1];
						break;
					case '/':
						t /= nums[i+1];
						break;
				}
			}
			
			if(t == n)
			{
				cout << "index " << index;
				return 0;
			}
			else
				index++;
	
		}
	}
	cout << "none";
	return 0;
}
