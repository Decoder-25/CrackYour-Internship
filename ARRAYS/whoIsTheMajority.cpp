int majorityWins(int arr[], int n, int x, int y) {
 
    // code here
    int i = 0, j = n - 1, countX = 0, countY = 0;
    while(i <= j){
    if(arr[i] == x || arr[j] == x)
        countX++;
        else if(arr[i] == y || arr[j] == y)
           countY++;
        i++, j--;
    }
        
    if(countX > countY)
        return x;
    else if(countY > countX)
        return y;
    else
        return x < y ? x : y;
    
}