int maxSubarraySum(int arr[], int n){
    
    int tillnow = arr[0];
    int curr = arr[0];

    for (int i = 1; i < n; i++)
    {
        curr = max(arr[i], curr+arr[i]);
        tillnow = max(tillnow, curr);
    }
    return tillnow;
    
}
