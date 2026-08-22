double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int tempSize=nums1Size+nums2Size;
    int tempArray[tempSize];
    int a=0,b=0;
    for(int i=0;i<tempSize;i++){
         if (a >= nums1Size)
        {
            tempArray[i] = nums2[b];
            b++;
        }
        else if (b >= nums2Size)
        {
            tempArray[i] = nums1[a];
            a++;
        }
        else if(nums1[a]<nums2[b]){
            tempArray[i]=nums1[a];
            a++;
        }
        else{
            tempArray[i]=nums2[b];
            b++;
        }
    }
    int center=0;
    double result=0.0;
    printf("%d",tempSize);
    if(tempSize%2==0){
        
        center=tempSize/2;
        
        return (double)(tempArray[center]+tempArray[center-1])/2;
    }
    else{
        center=tempSize/2;
        return tempArray[center];
    }
}