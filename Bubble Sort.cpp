#include<stdio.h>
#include<vector>
using namespace std;
int main() {
	int n, a, i, j, temp, min;
	vector<int> s;
	scanf("%d", &n);
	s.resize(n);
	for(i=0;i<n;i++) scanf("%d", &s[i]); 
	
	for(i=n-1;i>0;i--) {
		for(j=0;j<i;j++) {
			if(s[j]>s[j+1]) {
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}

	for(i=0;i<n;i++) printf("%d ", s[i]); 
}
