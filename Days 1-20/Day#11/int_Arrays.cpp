#include <iostream>

int main()
{
    int num1 = 10, Num2 = 2, Num3 = 4, Num5 = 9; // Instead of doing this we can do 

    int nums[4] = {10,2,4,9};

    /*for(int i = 0; i <= sizeof(nums); i++) 
    {
        std::cout << nums[i] << std::endl;
    }
    */  
   
    // Going to keep this code and explain what went wrong here
    /*
    
    Ok so the sizeof(nums) is getting the total size in bytes so 4 bytes per intiger and size we have 4 elements it means we are looping
    16 times instead of the intended 4 [0-3]

    So how do we fix this? easy

    sizeof(nums) / sizeof(nums[0])  So this is esencially saying 16/4 which will give us our 4

    But for this we will also make it just < so we dont loop to nums[4] which doesnt exist so lets try it again with these changes

    */

    for(int i = 0; i < (sizeof(nums) / sizeof(nums[0])); i++) 
    {
        std::cout << nums[i] << std::endl;
    }

    // This works perfectly

}