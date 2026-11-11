#include<iostream>
using namespace std;
int a[100];
int main(){
	 int so[] = {8,7,2,5,3,1};
	 int n= sizeof(so)/sizeof(so[0]);
	 int flag=10;
	 for(int i=0;i<n;i++){
	 	a[so[i]]=1;
	 }
	 for(int i=0;i<n;i++){
	 	if(a[flag-so[i]]==1){
	 		cout<<"Pair found: "<<so[i]<<" "<<flag-so[i];
	 		return 0;
		 }
	 }
	 cout<<"Pair not found";
}