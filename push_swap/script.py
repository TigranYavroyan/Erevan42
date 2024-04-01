import random

def generate_unique_random_numbers(n, min_val=0, max_val=100):
    """
    Generates a list of n unique random numbers within the given range.

    Args:
    - n (int): Number of unique random numbers to generate.
    - min_val (int): Minimum value of the random numbers (default: 0).
    - max_val (int): Maximum value of the random numbers (default: 100).

    Returns:
    - list: List of unique random numbers.
    """
    return random.sample(range(min_val, max_val + 1), n)

if __name__ == "__main__":
    num_count = 10  # Number of unique random numbers to generate
    min_val = 1     # Minimum value for random numbers
    max_val = 10   # Maximum value for random numbers

    unique_random_numbers = generate_unique_random_numbers(num_count, min_val, max_val)
    for num in unique_random_numbers:
        print(num, end = " ")
    print()
