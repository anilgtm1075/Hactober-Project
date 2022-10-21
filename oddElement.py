# importing counter from collections
from collections import Counter

# Python3 implementation to find
# odd frequency element
def oddElement(arr, n):

	# Calculating frequencies using Counter
	count_map = Counter(arr)

	for i in range(0, n):

		# If count of element is odd we return
		if (count_map[arr[i]] % 2 != 0):
			return arr[i]


# Driver Code
if __name__ == "__main__":

	arr = [1, 1, 3, 3, 5, 6, 6]
	n = len(arr)
	print(oddElement(arr, n))

# This code is contributed by vikkycirus
