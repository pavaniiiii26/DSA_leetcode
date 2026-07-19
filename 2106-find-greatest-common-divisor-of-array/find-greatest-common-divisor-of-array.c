int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int findGCD(int* nums, int numsSize) {
int smallest=1000;
int largest=0;
for(int i=0;i<numsSize;i++){
    if(nums[i]>largest){
        largest=nums[i];
    }
    if(nums[i]<smallest){
        smallest=nums[i];
    }
}
return gcd(smallest, largest);
}