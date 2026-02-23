# HashTableProject

### Why did I choose the chaining collison strategy?
  I chose the chaining collision strategy for 3 main reasons
  1. The chaining collision strategy uses simple data structures, such as vectors like I used, which makes it significantly easier to implement than open-addressing. As someone who is completely new to hash tables, I wanted something easier to understand that had familiar data structures in it.
  2. The second reason I chose this strategy is because it technically has infinite capacity which allows it to have more items than how many slots in the bucket vector. This is very helpful for large inputs and records.
  3. The third reason is that chaining is less suseptible to bad hashing due to collisions being isolated in specific buckets.

### Hash Function Explanation
My hashKey function converts a string key into an index number for the table. It works by looping through each character and multiplying the total by 31. Then it adds the character's ASCII value and uses modulo to fit it inside the table. I chose 31 because it's a prime number and those are important in good hash tables :p. To add on, I multipled instead of adding the traditional way because just adding means values like "xyz" and "yzx" hash to the exact same index (bad).

### Time Complexity
  - Best Case O(1): When each key hashes to their own index with no collisions, and there is not complications with functions.
  - Average Case O(1): Most chains stay pretty short due to the load factor Dr. Stephany set as 0.75. So, the average case is the same as the best case because you will only have to look through a few chains at most.
  - Worst Case O(n): The only way this would happen is if everything goes into one chain and the program has to scan the whole thing.

### Known Limitations or Bugs
  1. My program can't store any spaces in the keys because I didn't set it up to do so.
  2. If I had more time, I would have made isPrime() and nextPrime() private because the user really doesn't need to access them.

### Any AI Use?
Yes. I did utilize Claude to help teach me about what a hash table is, for simple debugging, and to explain small concepts. Other than that, I mainly used the following websites for basic research and to get an idea of hash table structure: https://www.digitalocean.com/community/tutorials/hash-table-in-c-plus-plus     and     https://www.geeksforgeeks.org/dsa/hash-table-data-structure/

### User Manual
The following steps will briefly explain how to use this program
  1. Once you run the program, you will need to select a mode by entering 1 or 2 (either Regular (1) or Debug(2)). Regular mode will just print the information you need, wheras debug mode will print all the steps involved that the program is executing in the functions.
  2. You will then need to select the operation you would like to do, again by entering a number. (Insert/Update(1), Search(2), Remove(3), Print(4), Quit(5))
  3. Depending on what you chose, you will need to enter your data. For example, if I chose 1 (insert/update) I would need to enter a key and value. Here's what it looks like: "Enter Key: apple" "Enter value: 1".
  4. Essentially, you continue this proccess until you are finished, where you would select 5 (Quit).
