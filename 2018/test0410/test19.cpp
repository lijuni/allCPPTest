//P331 stack 适配器
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void show(stack<char> vc)
{
	//for(auto temp : vc)
	//	cout<<temp<<" ";
	while(!vc.empty())
	{
		cout<< vc.top()<<" ";
		vc.pop();
	}
	
	cout<<endl;
}

int main()
{
	vector<char> vc{'(', '5', '*', '(', '3', '+', '2', ')', ')'};
	stack<char> sc;
	stack<char> out;

	for(auto temp : vc)
	{
		if(temp!=')')
			sc.push(temp);
		else
		{
			sc.push(temp);
			while(sc.top()!='(')
			{
				char temp2 = sc.top();
				out.push(temp2);
				sc.pop();
			}
			#ifndef DEBUG
			cout<<"top = "<<sc.top()<<endl;
			#endif
			
			out.push(sc.top());
			sc.pop();
			cout<<"弹出一次"<<endl;
			show(out);
			cout<<endl;
		}
	}

}
