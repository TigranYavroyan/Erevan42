# import random

# def generate_unique_random_numbers(n, min_val=0, max_val=100):
#     """
#     Generates a list of n unique random numbers within the given range.

#     Args:
#     - n (int): Number of unique random numbers to generate.
#     - min_val (int): Minimum value of the random numbers (default: 0).
#     - max_val (int): Maximum value of the random numbers (default: 100).

#     Returns:
#     - list: List of unique random numbers.
#     """
#     return random.sample(range(min_val, max_val + 1), n)

# if __name__ == "__main__":
#     num_count = 500  # Number of unique random numbers to generate
#     min_val = 1     # Minimum value for random numbers
#     max_val = 500   # Maximum value for random numbers

#     unique_random_numbers = generate_unique_random_numbers(num_count, min_val, max_val)
#     for num in unique_random_numbers:
#         print(num, end = " ")
#     print()

import random

# Get the desired range from the user
lower_bound = -500
upper_bound = 1  # Include upper bound

# lower_bound = int(input("Enter the lower bound of the range: "))
# upper_bound = int(input("Enter the upper bound of the range: ")) + 1  # Include upper bound

# Generate all unique random numbers in the range
total_numbers = upper_bound - lower_bound  # Calculate total numbers in range

# Use set to ensure unique elements (avoid duplicates)
random_numbers = set()
while len(random_numbers) < total_numbers:
  random_numbers.add(random.randint(lower_bound, upper_bound - 1))

# Convert set back to list for printing (optional)
# random_numbers_list = list(random_numbers)  # Uncomment if you prefer a list

# Print the numbers on a single line separated by spaces
print(*random_numbers)  # Unpack the set using * operator
