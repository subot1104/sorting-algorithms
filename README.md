This project contains implementations for 3 different sorting algorithms (insertion sort, counting sort, and bubble sort)

Use make to compile the program.

How to use:
1: Generates a data.txt file with 10000 random data points from 1 to 1000.
2: Sorts using the insertion sort algorithm.
3: Sorts using the counting sort algorithm.
4: Sorts using the bubble sort algorithm.
q: quits the program.

Overall, the count sort was the quickest sorting algorithm by a long shot with a time of about 200 microseconds on average. This caught me off guard, especially with how much data allocation I was doing with the implementation. Both insertion sort and bubble sort were very slow in comparison, taking around 50,000 microseconds and 200,000 microseconds respectively.
