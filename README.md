# C codes written for BLM2512-Data Structures and Algorithms Course

## Topics
1. ### Prime Numbers
   
2. ### Linked List 
   1. Create
   2. Append
   3. Print
   4. Reverse
   5. Search
   6. Sort
   7. Destroy
   8. Insert
   
3. ### Stack
   1. Create
   2. Push
   3. Pop
   4. Print
   5. Get length
   
4. ### Queue
   1. Create
   2. Enqueue
   3. Dequeue
   4. Print
   5. Get length
   
5. ### Sorts
   1. Bubble Sort
   2. Selection Sort
   3. Insertion Sort
   4. Heap Sort
   5. Merge Sort
   6. Quick Sort

6. ### Binary Search Tree
   1. Insert
   2. Delete
   3. Find Maximum
   4. Find Minimum
   5. Print
      1. In-Order
      2. Pre-Order
      3. Post-Order
   6. Search
   7. Get height

7. ### The Word Ladder Game 
    It is the project of the course. We have a database of words called "input.txt". Our inputs are two words given by user. We show the path between first word to second word if possible, otherwise "No similarity" message. 
    For example,
    #### Inputs (prove, guess) 
    #### Output : prove → prose → prese → prest → wrest → weest → geest → guest → guess

    I use adjacency matrix representation for the graph and Breadth First Search(BFS) for checking whether these words are connected or not. Queue data structrue is used for BFS and stack is used for printing the path between the words.

8. ### Basic Calculator
    It is the first assignment of the course for implementing stack operations. User gives a string and the program reads it character by character. Then, it returns the result of the operation. 
    For example,
    #### Input : 12 * (4 + 3 - 16 / 8) – 5
    #### Process :
        1. Number Stack : 12 
        2. Sign Stack : Free
        3. Number Stack : 12
        4. Sign Stack : *
        5. Number Stack : 12
        6. Sign Stack : * (
        7. Number Stack : 12 4
        8. Sign Stack : * (
        9. Number Stack : 12 4
        10. Sign Stack : * ( +
        11. Number Stack : 12 4 3
        12. Sign Stack : * ( +
        13. Number Stack : 12 7
        14. Sign Stack : * ( -
        15. Number Stack : 12 7 16
        16. Sign Stack : * ( -
        17. Number Stack : 12 7 16
        18. Sign Stack : * ( - /
        19. Number Stack : 12 7 2
        20. Sign Stack : * ( -
        21. Number Stack : 12 5
        22. Sign Stack : * 
        23. Number Stack : 60
        24. Sign Stack : -
        25. Number Stack : 55
        26. Sign Stack : 
9.  ### Key&Lock
    It is the assignment for implementing divide and conqeuer algorithms. There are locks and keys in scenario. Our task is to pick a random key each time and open each lock with O(N*logN) complexity. I implement quick sort for this task.

10. ### Social Network
    It is the assignment for implementing binary search trees(BST). A social network is expected in scenario. 
    Our task :
    1. Insert new user to network
    2. Delete a user given with id
    3. Check if a user is on the network
    4. Show friends of a user given with id
    5. Show size of tree
    6. Show below users from a user given with id
    7. Show users whose id is greater than another user's id
    8. Show users in-order

    Structure of the node that keeps information of the user:
    ```c
    struct node{
        int id;             //user id
        char *name;         //user name and surname
        int *friends;       //ids of the user's friends
        int numOfFriends;   //user's number of friends
        struct node *left;  //left node
        struct node *right; //right node
    };
    ```