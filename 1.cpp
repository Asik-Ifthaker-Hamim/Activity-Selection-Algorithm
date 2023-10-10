#include <bits/stdc++.h>
using namespace std;
struct Act
{
    int s, f;
    string ss;
};
bool cmp(Act a, Act b)
{
    return (a.f < b.f);
}
void act_sel(Act arr[], int n)
{
	sort(arr, arr+n, cmp);

	cout<< "Activities Are"<<endl;
    int i = 0;
	cout<< arr[i].ss<<"={" <<arr[i].s<< "," <<arr[i].f << "}"<<endl;
    for (int m = 1; m < n; m++)
    {
      	if (arr[m].s>= arr[i].f)
      	{
			cout<<arr[m].ss<<"={" <<arr[m].s<< ","<<arr[m].f << "}"<<endl;
			i = m;
      	}
    }
}
int main()
{
    int k=0;
    int n;
    cin>>n;
    Act arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i].s>>arr[i].f;
		arr[i].ss="a";
		arr[i].ss+=(to_string(++k));
    }
	act_sel(arr, n);

}
/*
11
1 4
3 5
0 6
5 7
3 8
5 9
6 10
8 11
8 12
2 13
12 14
*/

