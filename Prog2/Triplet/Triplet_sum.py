class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        n = len(nums)
        result = []
        nums.sort()

        for i in range(n):
            if i > 0 and nums[i] == nums[i-1]:
                continue

            l, r = i+1, n-1

            while l < r:
                s = nums[i] + nums[l] + nums[r]

                if s < 0:
                    l += 1
                elif s > 0:
                    r -= 1
                else:
                    result.append([nums[i], nums[l], nums[r]])
                    while l < r and nums[l] == nums[l+1]:
                        l += 1
                    while l < r and nums[r] == nums[r-1]:
                        r -= 1
                    l += 1
                    r -= 1

        return result
    
nums = [-1, 0, 1, 2, -1, -4]
sol = Solution()
print(sol.threeSum(nums))