#include <bits/stdc++.h>
 
using namespace std;


 
 
int main(){
	int n,t;
	cin>>n>>t;
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		int a;
		cin>>a;
		v.push_back(a);

	}
	sort(v.begin(),v.end());
	int first=0;
	int last=n-1;


for (;first<last;)
{
	int sum=v[first]+v[last];

	if (sum>t)
	{
		last--;
	}else if (sum<t)
	{
		first++;
	}else{
		cout<<"yes";
		return 0;
	}

	}
	cout<<"no";



	


}

#include <bits/stdc++.h>
 
using namespace std;


 
 
int main(){
	int n,t;
	cin>>n>>t;
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		int a;
		cin>>a;
		v.push_back(a);

	}

unordered_map<int, int> map;

	for (int i = 0; i < n; ++i)
{    int first=v[i];
	int remain=t-v[i];

	if (map.find(remain)!=map.end())
	{
		cout<<map[remain]<<":"<<i<<endl;
		return 0;
	}
	map[first]=i;

    }


				cout<<-1<<endl;
				return 0;
	



	


}
#include <bits/stdc++.h>
 
using namespace std;


 
 
int main(){
	int n,t;
	cin>>n>>t;
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		int a;
		cin>>a;
		v.push_back(a);

	}


	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1;j < n; ++j)
			{
				if(v[i]+v[j]==t){cout<<i<<" : "<<j<<endl;return 0;}			}	}

				cout<<-1<<endl;
				return 0;
	



	


}

