int onesAndZeros3(std::vector<int> arr)
{
    if(arr.size() < 3) return arr.size(); 
    int n = 20;
    while (n--){
        int i = 0;
        while (i < arr.size() - 2){
            if (i + 2 > arr.size() - 1) break;
            if (arr[i] == arr[i + 1] && arr[i + 1] == arr[i + 2]) 
                arr.erase(arr.begin() + i, arr.begin() + i + 3); 
            else i++;
            if(arr.size() == 0) return 0;
        }
    }
    return arr.size();
}
