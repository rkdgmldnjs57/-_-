#include<stdio.h>
#include<vector>
using namespace std;

int main() {
	int n, a, i, j, temp;
	vector<int> s;
	scanf("%d", &n);
	s.resize(n);
	for(i=0;i<n;i++) scanf("%d", &s[i]); 
	
	for(i=0;i<n;i++) {
		for(j=i;j>0;j--) {
			if(s[j] < s[j-1]) {
				temp=s[j];
				s[j]=s[j-1];
				s[j-1]=temp;
			}
		}
	}

	for(i=0;i<n;i++) printf("%d ", s[i]); 
}
