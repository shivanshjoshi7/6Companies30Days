// Find max 10 numbers in a list having 10M entries
#include<iostream>
#include<queue>
#include<vector>

using namespace std;

vector<int> findMax10(vector<int> &vec)
{
	vector<int> v;
	priority_queue<int> q;

	for(int i=0; i<10000000; i++)
	{
		q.push(vec[i]);
	}

	for(int i=0; i<10; i++)
	{
		v.push_back(q.top());
		q.pop();

	}
	return v;
}

int main()
{
	vector<int> vec;
	for(int i=0; i<10000000; i++)
	{
		int t=rand();
		vec.push_back(t);
	}

	vector<int> v;

	v=findMax10(vec);

	for(int i=0; i<10; i++)
		cout<<v[i]<<" ";

}