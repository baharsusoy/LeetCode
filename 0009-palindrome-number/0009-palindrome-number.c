bool isPalindrome(int x) 
{
    int num = x;
    int n=0;

    if(x < 0) {
        return false;
    } else {
        while (num >= 1) {
            num /= 10;
            n++;
        }
        
        if(n==1 || x==0) {
            return true;
        } else {
            int temp = x;
            int arr[n];
            
            for (int i=n-1; i>0; i--) {
                int digit = temp % 10;
                arr[i] = digit;
                temp /= 10;
            }
            arr[0] = temp;

            for (int i=0; i<n/2; i++) {
                if(arr[i] != arr[n-1-i]) {
                    return false;
                }
            }
            return true;
        }
    }
}