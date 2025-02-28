func containsDuplicate(nums []int) bool {
    seen := make(map[int]bool)

    for _, value := range nums {
        if seen[value]{
            return true
        }
        seen[value]=true

    }
    return false
    
}