int searchInsert(int* nums, int numsSize, int target)
{
    int found=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==target){
            found=1;
            return i;
        }
    }
    if(found==0)
    {
        for(int i=0;i<numsSize;i++)
        {
            if(nums[i]>target)
            {
                return i;
            }
        }
    }
    return numsSize;
}