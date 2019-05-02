#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, tempsum;
		cin >> n;
		vector <int> a(n);
		vector <int> temp;
		vector <int> maxarray;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		int maxsum = 0;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				tempsum = a[i];
				tempsum.push_back(i);
				if((j != (i-1)) && (j != i) && (j != (i+1))){
					tempsum += a[j];
					temp.push_back(j);
				}
			}
			if(tempsum > maxsum){
				maxsum = tempsum;
				int length = temp.size();
				for(int m=0; m<length; m++){
					maxarray.push_back(temp[m]);
				}
			}
		}
		reverse(maxarray.begin(), maxarray.end());
		int length1 = maxarray.size();		
		for(n=0; n<length1; n++){
			cout << maxarray[n];
		}
		cout << endl;
	}
	return 0;
}
