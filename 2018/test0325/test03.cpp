//6.3.2节练习 6.33
//使用递归输出vector中的元素
#include<iostream>
#include<vector>
using namespace std;

void digui_vector(const vector<int> &vi, vector<int>::iterator it)
{
	static int count=0;
	cout<<"Count = "<<count<<endl;
	count++;
	
	if(it==vi.end())
	{
		cout<<"END!!!"<<endl;
		return ;
	}
	else
	{
		cout<<*it<<" * ";
		it++;
		digui_vector(vi, it);
	}
}

//特别注意，以下的代码行不通
//原因，每次vi都是一个新的拷贝，it对新的vi失效
//把vi声明成const的引用&，保证it永远对应这个vi才行，或者传值的时候直接传end
/*
void digui_vector(vector<int> vi, vector<int>::iterator it)
{
	static int count=0;
	cout<<"Count = "<<count<<endl;
	count++;
	
	if(it==vi.end())
	{
		cout<<"END!!!"<<endl;
		return ;
	}
	else
	{
		cout<<*it<<" * ";
		it++;
		digui_vector(vi, it);
	}
}
*/

int main()
{
	vector<int> vi;
	int temp;

	while(cin>>temp)
		vi.push_back(temp);

	cout<<"Cout1"<<endl;
	for(auto temp : vi)
		cout<<temp<<"  ";

	cout<<endl<<"Cout2"<<endl;
	
	for(auto beg=vi.begin(); beg!=vi.end(); beg++)
		cout<<*beg<<"  ";
	cout<<endl<<endl;

	auto beg=vi.begin();
	digui_vector(vi, beg);

}
