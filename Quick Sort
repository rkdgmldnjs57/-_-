#include<stdio.h>
#include<vector>
using namespace std;
vector <int> s;

void swap(int i, int j) {
	int temp; 
	temp=s[j];
	s[j]=s[i];
	s[i]=temp;
}

void f(int i, int j) {
	int k, s1, e1;
	k=i; s1=i; e1=j;
	if(i>=j) return;
	while(i<j) {
		while(s[k]>=s[i] && i<e1) i++;//i가 k보다 큰 값을 찾음 
		while(s[k]<=s[j] && j>s1) j--;//j가 k보다 작은 값을 찾음 
		if(i<j) swap(i, j);
		else swap(j, k);
	}
	f(s1, j-1);
	f(j+1, e1);
}

int main() {
	int n, a, i, j, temp, min;
	
	scanf("%d", &n);
	s.resize(n);
	for(i=0;i<n;i++) scanf("%d", &s[i]); //입력 
	
	f(0, n-1);
	
	for(i=0;i<n;i++) printf("%d ", s[i]); //출력 
}
