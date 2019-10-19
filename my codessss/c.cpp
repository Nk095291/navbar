#include<bits/stdc++.h>
using namespace std;
int search(int arr[], int strt, int end, int value) 
{ 
	for (int i = strt; i <= end; i++) 
		if (arr[i] == value) 
			return i; 
	return -1; 
} 

int *extrackKeys(int in[], int level[], int m, int n) 
{ 
	int *newlevel = new int[m], j = 0; 
	for (int i = 0; i < n; i++) 
		if (search(in, 0, m-1, level[i]) != -1) 
			newlevel[j] = level[i], j++; 
	return newlevel; 
} 


int buildTree(int in[], int level[], int inStrt, int inEnd, int n) 
{ 

	if (inStrt > inEnd) 
		return 0; 


	if (inStrt == inEnd) 
		return 1; 

	int inIndex = search(in, inStrt, inEnd, root->key); 


	int *llevel = extrackKeys(in, level, inIndex, n); 

	int *rlevel = extrackKeys(in + inIndex + 1, level, n-inIndex-1, n); 


	int countl  = buildTree(in, llevel, inStrt, inIndex-1, n); 
	int countr = buildTree(in, rlevel, inIndex+1, inEnd, n); 

	delete [] llevel; 
	delete [] rlevel; 

	return max(countl,countr) + 1; 
}
int main(){
    vector<int> in {4,2,5,1,6,3,7};
    vector<int> level {1,2,3,4,5,6,7};


}