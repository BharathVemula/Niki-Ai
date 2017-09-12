
#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

#define MOD 1000000007;

using namespace std;

long long int UtilPalin(long long int n) {
	
	long long int n1,n0;
	long long int x0p = 0, x1p = 1;
	
	while(n>1){
		n1 = (x1p + x0p)%MOD;
		n0 = (x1p)%MOD;
		x1p=n1;
		x0p=n0;
		n--;
	}
	return (n1+n0)%MOD;
}

long long int calc(long long int n){
	if(n==1) return 2; 
	return UtilPalin(n+1)%MOD; //Caluclating the n+2th palindrome number will return our answer.
}

int main(){
	int t;
	scanf("%d",&t);
	long long int n,ans;
	while(t--){		
		cin>>n;
		cout<<calc(n)<<endl;
	}
	return 0;
}