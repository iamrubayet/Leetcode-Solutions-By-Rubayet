func containsDuplicate(nums []int) bool {
    seen := make(map[int]bool)

    for _ , v := range nums {
        if seen[v] {
            return true
        }
        seen[v]= true

    }

    return false    
    
}