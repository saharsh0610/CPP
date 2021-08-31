#include <bits/stdc++.h>
using namespace std;
int main(){
	// *****QUESTION 1******
	// set<int> s;
	// int n, i, input;
	// cin>>n;
	// while((n--)!=0 && cin>>input){
	// 	s.insert(input);
	// }
	// cout<<s.size();
// 	********QUESTION 2******
// 	int n, m, k;
// 	cin>>n>>m>>k;
// 	int count = 0;
// 	int a[n];
// 	int b[m];
// 	for (int i = 0; i < n; ++i)
// 	{
// 		/* code */
// 		cin>>a[i];
// 	}
// 	for (int j = 0; j < m; ++j)
// 	{
// 		/* code */
// 		cin>>b[j];
// 	}
// 	sort(a, a+n);
// 	a[1]= a[1] - k;
// 	a[n-1] = a[n-1] + k;
// 	for (int l = 0; l < m; ++l)
// 	{
// 		 		if (a[1]<b[l] && a[n-1]>b[l])
// 		{
// 			/* code */
// 			count ++;
// 		}

// 	}
// 	cout<<count;
// 	return 0;
	int n, x, l, r, y, z;
	int count;
	cin>>n>>x;
	vector<int> v;
	int input;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		v.push_back(input);
	}
	sort(v.begin() , v.end());
	l = *v.begin();
	r = *v.end();
	while(l < r){
		if (l + r >= x)
		{
			/* code */
			r--;
		    break;
		}
		else if (l + r == x)
		{
			/* code */
			
			r --;
			l ++;
			count ++;
			y = v.find(v.begin(), v.end(), l);
            z = v.find(v.begin(), v.end(), r);
            v.erase(y);
            v.erase(z);
			break;
		}
		else if(l <= 10 || r<= 10){
			l ++;
			r--;
			count++;


		}
		
		
	}
	cout<<count;
	return 0;







 }