func twoSum(nums []int, target int) []int {
    prevMap := make(map[int]int)

    for i,n := range nums {
        diff := target - n
        if j,found := prevMap[diff];found {
            return []int{j,i}
        }
        prevMap[n]=i
    }
    return []int{}
    
}