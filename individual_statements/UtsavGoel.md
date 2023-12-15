<center> Utsav Goel — CID 02219747  </center>

---

  - [What I Contributed to](#what-i-contributed-to)

  - [Single Cycle CPU](#single-cycle-cpu)

  - [Cache](#cache)

  - [What I Learned](#what-i-learned)

  - [Mistakes I Made](#mistakes-i-made)

  - [What I Would do Differently](#what-i-would-do-differently)

  

---

  

## What I Contributed to

### Single Cycle CPU

- designed the main decoder, wrote and tested it with the testbench.
- made the main decoder output signals in accordance with the ALU decoder logic
- helped Sara with the debugging of the f1 assembly program
- testing of Datapath by driving the inputs to test all use cases for the data path and checking if the expected output is produced
### Cache
(all of cache done together with Neil)
- brainstorming ideas with Sara and Neil for a direct mapped cache
- made direct mapped cache
- made 4 way set associative cache with only one set for testing purposes
- made 16 way fully associative cache
- test successfully with reference program
## What I Learned  

- The use of hardware description language is a complete new concept for me and I believe that through this project of designing a CPU I have not only learned a lot about instruction set architectures and HDLs but also gained valuable experience with using version control systems (git) to keep track of work as well as to collaborate with teammates.
- This was also my first time using the command line extensively and this has provided me a completely new insight to how developers work.
- I have also learned a lot about problem solving and finding solutions to difficult problems. In particular, as a pair, me and Neil spent a lot of time debugging the cache only to realise that we had a problem in our test bench. This was a valuable lesson in making sure that we have a working build system.
## Mistakes I Made

My most common mistakes were syntax errors or losing track of inputs and outputs during testing. I think I should have also managed my time better since the cache memory was left very last minute. I also made a lot of mistakes while managing our git repository. Since I am still new to git, I often found myself having to deal with merge conflict or forgetting to pull before starting to work.
## What I Would do Differently

I think that we worked well as team however I believe our communication had room for improvement. With better communication, we would have ended up with a cleaner and more organised git repository. I would also make sure that we didn't make unnecessary branches which is a recipe for merge and rebase conflicts. 
Another thing I would be interested in trying is implementation of the UVM testing methodology. I think that this would have made the testing far more vigorous and would have sped up the debugging process.