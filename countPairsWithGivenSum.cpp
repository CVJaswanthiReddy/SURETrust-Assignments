
class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        unordered_map<int, int> map;
        int count =0;
        for(int i=0; i<n; i++){
           count = count + map[k-arr[i]];  // Finding value which added to                                                      //current array value arr[i] to sum equal to K
           map[arr[i]]++;
        }
        
        return count;
    }
};
