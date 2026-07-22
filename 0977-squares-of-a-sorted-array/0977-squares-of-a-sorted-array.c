/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int left = 0;
    int right = numsSize - 1;
    int pos = numsSize - 1;

    int *res = (int *)malloc(numsSize * sizeof(int));
    while(left<=right)
    {
        int leftsq = nums[left]*nums[left];
        int rightsq = nums[right]*nums[right];
        if(leftsq>rightsq){
            res[pos--]=leftsq;
            left++;
        }
        else{
            res[pos--] = rightsq;
            right--;
        }
    }
    *returnSize = numsSize;
    return res;
}