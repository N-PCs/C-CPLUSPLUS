// Returns the index if found, otherwise returns -1
// Prerequisite: Array MUST be sorted
int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2; // Prevents potential overflow
        
        if (arr[mid] == target)
            return mid;
        
        if (arr[mid] < target)
            low = mid + 1; // Target is in the right half
        else
            high = mid - 1; // Target is in the left half
    }
    return -1;
}
