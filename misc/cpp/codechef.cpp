#include<bits/stdc++.h>
using namespace std;

int closest(int *arr, int i, int j, int target){
	if(target - arr[i] >= arr[j] - target)
		return j;
	else
		return i;
}

int findClosest(int *arr, int n, int target){
	if(target <= arr[0])
		return 0;
	if(target >= arr[n - 1])
		return n - 1;
	int i = 0, j = n, mid = 0;
	while(i < j){
		mid = (i + j) / 2;
		if(arr[mid] == target)
			return mid;
		if(target < arr[mid]){
			if(mid > 0 && target > arr[mid - 1])
				return closest(arr, mid - 1, mid, target);
			j = mid;
		}
		else{
			if(mid < n - 1 && target < arr[mid + 1])
				return closest(arr, mid, mid + 1, target);
			i = mid - 1;
		}
	}
	return mid;
}

int main(){
	int n, k;
	cin >> n >> k;
	int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	int sum = 0;
	for(int i = 0; i < n - 1; i++)
		sum += n - 1 - findClosest(arr, n, arr[i] + k);
	cout << sum << endl;
	return 0;
}
