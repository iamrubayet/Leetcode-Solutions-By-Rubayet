func getConcatenation(nums []int) []int {
    var ans []int

    for _, num := range nums {
        ans = append(ans,num)
    }
    for _,num := range nums {
        ans = append(ans,num)
    }
    return ans
    
}