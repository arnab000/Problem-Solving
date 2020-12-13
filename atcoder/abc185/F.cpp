// C++ program to show segment tree operations 
// like construction, query and update 
#include <bits/stdc++.h> 

using namespace std; 
#define ll long long
// A utility function to get the middle 
// index from corner indexes. 
ll getMid(ll s, ll e) { 
	return s + (e - s)/2; 
} 

/* A recursive function to get the Xor of 
values in given range of the array. The 
following are parameters for this function. 
	st --> Pointer to segment tree 
	si --> Index of current node in the segment tree. 
		Initially 0 is passed as root is always 
		at index 0. 
	ss & se --> Starting and ending indexes of 
				the segment represented by current 
				node, i.e., st[si] 
	qs & qe --> Starting and ending indexes of 
				query range */
ll getXorUtil(int *st, int ss, int se, int qs, 
			int qe, int si) 
{ 
	// If segment of this node is a part of given 
	// range, then return the Xor of the segment 
	if (qs <= ss && qe >= se) 
		return st[si]; 

	// If segment of this node is outside 
	// the given range 
	if (se < qs || ss > qe) 
		return 0; 

	// If a part of this segment overlaps 
	// with the given range 
	int mid = getMid(ss, se); 
	return getXorUtil(st, ss, mid, qs, qe, 2*si+1) ^ 
		getXorUtil(st, mid+1, se, qs, qe, 2*si+2); 
} 

/* A recursive function to update the nodes 
which have the given index in their range. 
The following are parameters 
	st, si, ss and se are same as getXorUtil() 
	i --> index of the element to be updated. 
		This index is in input array.*/
void updateValueUtil(int *st, int ss, int se, int i, 
					int prev_val, int new_val, int si) 
{ 
	// Base Case: If the input index lies outside 
	// the range of this segment 
	if (i < ss || i > se) 
		return; 

	// If the input index is in range of this node, 
	// then update the value of the node and its children 
	st[si] = (st[si]^prev_val)^new_val; 
	if (se != ss) 
	{ 
		int mid = getMid(ss, se); 
		updateValueUtil(st, ss, mid, i, prev_val, 
						new_val, 2*si + 1); 
		updateValueUtil(st, mid+1, se, i, prev_val, 
						new_val, 2*si + 2); 
	} 
} 

// The function to update a value in input 
// array and segment tree. It uses updateValueUtil() 
// to update the value in segment tree 
void updateValue(int arr[], int *st, int n, 
				int i, int new_val) 
{ 
	// Check for erroneous input index 
	if (i < 0 || i > n-1) 
	{ 
		printf("Invalid Input"); 
		return; 
	} 
	int temp = arr[i]; 
	// Update the value in array 
	arr[i] = new_val; 

	// Update the values of nodes in segment tree 
	updateValueUtil(st, 0, n-1, i, temp, new_val, 0); 
} 

// Return Xor of elements in range from index qs (quey start) 
// to qe (query end). It mainly uses getXorUtil() 
int getXor(int *st, int n, int qs, int qe) 
{ 
	// Check for erroneous input values 
	if (qs < 0 || qe > n-1 || qs > qe) 
	{ 
		printf("Invalid Input"); 
		return 0; 
	} 

	return getXorUtil(st, 0, n-1, qs, qe, 0); 
} 

// A recursive function that constructs 
// Segment Tree for array[ss..se]. si is 
// index of current node in segment tree st 
int constructSTUtil(int arr[], int ss, int se, 
					int *st, int si) 
{ 
	// If there is one element in array, 
	// store it in current node of segment 
	// tree and return 
	if (ss == se) 
	{ 
		st[si] = arr[ss]; 
		return arr[ss]; 
	} 

	// If there are more than one elements, 
	// then recur for left and right subtrees 
	// and store the Xor of values in this node 
	int mid = getMid(ss, se); 
	st[si] = constructSTUtil(arr, ss, mid, st, si*2+1) ^ 
			constructSTUtil(arr, mid+1, se, st, si*2+2); 
	return st[si]; 
} 

/* Function to construct segment tree from given array. 
This function allocates memory for segment tree and 
calls constructSTUtil() to fill the allocated memory */
int *constructST(int arr[], int n) 
{ 
	// Allocate memory for segment tree 

	// Height of segment tree 
	int x = (int)(ceil(log2(n))); 

	// Maximum size of segment tree 
	int max_size = 2*(int)pow(2, x) - 1; 

	// Allocate memory 
	int *st = new int[max_size]; 

	// Fill the allocated memory st 
	constructSTUtil(arr, 0, n-1, st, 0); 

	// Return the constructed segment tree 
	return st; 
} 

// Driver program to test above functions 
int main() 
{ 
	ll n,m;
    cin>>n>>m;
    int arr[n+5];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];

    }

	// Build segment tree from given array 

	int *st = constructST(arr, n); 

	// Print Xor of values in array from index 1 to 3 
    while (m--)
    {
        /* code */
        ll type;
        cin>>type;
        if(type==1)
        {
            ll u,v;
            cin>>u>>v;
            u--;
            ll p=arr[u];
            updateValue(arr, st, n, u, p^v); 

        }
        else
        {
            ll u,v;
            cin>>u>>v;
            u--;
            v--;
           cout<< getXor(st, n, u, v)<<endl;;
        }
    }
    
	
} 
