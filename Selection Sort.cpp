#include<stdio.h>
#include<vector>
using namespace std;
int main() {
	int n, a, i, j, temp, min;
	vector<int> s;
	scanf("%d", &n);
	s.resize(n);
	for(i=0;i<n;i++) scanf("%d", &s[i]);
	
	for(i=0;i<n;i++) {
		min=i;
		for(j=i;j<n;j++) {
			if(s[j]<s[min]) min=j;		
		}
		temp=s[i];
		s[i]=s[min];
		s[min]=temp;
	}

	for(i=0;i<n;i++) printf("%d ", s[i]); 
}
