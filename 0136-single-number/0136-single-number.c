int singleNumber(int* nums, int numsSize) {
    int sum=nums[0];
    for(int i=1;i<numsSize;i++){
        sum=sum^nums[i];
    }
    return sum;
}