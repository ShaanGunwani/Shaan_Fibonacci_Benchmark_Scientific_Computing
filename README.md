# Shaan_Fibonacci_Benchmark_Scientific_Computing

I will be comparing the time complexity as well as the space complexity gleaned from the algorithm's results by utilizing the iterative approach and the recursive approach to the Fibonacci sequence for this assignment.

=> Test 

We have to do a test to see whether the inputs will give out correct outputs. 
We can do/run this by entering the below command in the terminal :- 
make; ./main_test.out

Then, you should see the below image as the output :- 
![image](https://user-images.githubusercontent.com/114371881/205249572-8f3f6ba7-0c2f-40e7-8547-f81091b4172a.png)

So, now we can see that the correct output is being generated.

=> BENCHMARK

We are doing the benchmarking to compare the time complexity and the space complexity of the iterative approach and the recursive approach.

-> TIME COMPLEXITY

We can start with the time complexity.

I made N=10 for both the approaches. The purpose is to check the time execution. 

We can input the command below in the terminal to run it :- 
make time 

Then, the output will be displayed :- 


![image](https://user-images.githubusercontent.com/114371881/205250621-7676a13c-2d77-4538-86c2-a796858e1a10.png)

-> SPACE COMPLEXITY

You can input the commands below to run the space complexity :- 
make space
./main_b_space_iterative.out

make space
./main_b_space_recursive.out

After that, you will see that the memory utilized for the iterative will be lesser and the memory used for recursive will be more than that of iterative. So from this data, we can conclude that the recursive approach has higher space complexity but it has lower time complexity and the iterative approach has lower space complexity but it has higher time complexity, which is the opposite of the recursive. So, the iterative approach takes up less space than the recursive but the drawback is that it runs slower than the recursive approach. 
