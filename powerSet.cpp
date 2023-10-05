#include <bits/stdc++.h> 
using namespace std;

int sumOfPower(vector<int>& nums) {
        const int mod=10e9+7;
        int n=nums.size();
        int ps=pow(2,n);
        int sum=0;
        for(int i=0;i<ps;i++){
            int maxi=0;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    maxi=max(maxi,nums[j]);
                }
            }
            cout<<maxi<<endl;
            sum=sum+(maxi%mod)*(maxi%mod);
        }
        return sum;
    }
void printPowerSet(char* set, int set_size)
{

    unsigned int pow_set_size = pow(2, set_size);
    int counter, j;
 
    for (counter = 0; counter < pow_set_size; counter++) {
        for (j = 0; j < set_size; j++) {
            int a=0;
            vector<int> v(a);
            // int x=counter & (1 << j);
            // cout<<x<<endl;

            if (counter & (1 << j))
                int x=counter & (1 << j);
                
                v[a]=set[j];
                // cout << set[j];
        }
        cout << endl;
    }
}
 
/*Driver code*/
int main()
{
    // char set[] = { 'a', 'b', 'c' };
    // printPowerSet(set, 3);
    // return 0;
    vector<int> nums={2,1,4};
    cout<<sumOfPower(nums);
}