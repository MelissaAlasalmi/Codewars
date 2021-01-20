# Take an array of numbers and return the sum of all of the positives ones.
# Example [1,-4,7,12] => 1 + 7 + 12 = 20
def positive_sum(arr):
    sum = 0
    for i in range(0, len(arr)) :
        if arr[i] > 0 :
            sum += arr[i]
    return sum