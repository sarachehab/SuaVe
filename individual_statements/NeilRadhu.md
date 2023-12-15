# <center> Neil Radhu — CID 2294657 </center>

---

  - [What I Contributed to](#what-i-contributed-to)

    - [Single Cycle CPU](#single-cycle-cpu)

    - [Cache](#cache)

  - [What I Learned](#what-i-learned)

  - [Mistakes I Made](#mistakes-i-made)

  - [What I Would do Differently](#what-i-would-do-differently)

  

---

  

## What I Contributed to

### Single Cycle Cpu

- designed the ALU decoder (sub unit of control unit), wrote and tested it with the testbench [here](https://github.com/luju1108/Team14/compare/2e6f403bc3c4ed08c013a02708fb6a06ee789ee9...80fb17e8f0f3c99f78fbd6088f6cffad03258589)
- made the ALU decoder output signals in accordance with the ALU and logic related to incoming signals from main decoder. [here](https://github.com/luju1108/Team14/compare/2acb4157bb82442c1a44dd1a389a579b92e47bcd...9654801d4c0e0b06e07727db4f326acc4104bc67)
- wrote the testbench for the ALU decoder [here](https://github.com/luju1108/Team14/compare/2e6f403bc3c4ed08c013a02708fb6a06ee789ee9...80fb17e8f0f3c99f78fbd6088f6cffad03258589)
- designed sign extend unit [here](https://github.com/luju1108/Team14/compare/ef586ecb79c4192c725ef9be4a1c3202f5dc45e3...d7b065146db80a5caa5f526d82717e67ac1092ca)
- created the top file for the cpu, making sure all logic is correct and all modules are functioning correctly. [here](https://github.com/luju1108/Team14/compare/87dc83a545c97d3b2411e1cef42187f2d49d2e5b...b4fa0afa0afda7f6bac4491c0718a88bbabc64e4)

### Cache
(all of cache done together with ustav)
- brainstorming ideas with Sara and utsav for a direct mapped cache
- made direct mapped cache
- made 4 way set associative cache with only one set
- made 16 way fully associative cache
## What I Learned  

- I gained experience in working with Github and using new command lines to find the best ways to move files and folders from branch to branch.
- Using a HDL it is very important to keep a constant format so it is readable and there is consistency in the code, hence making it easier for anyone to debug your code.
- In projects when one works with teammates, it is important to keep frequent contact, get updates from and give updates on your work so everybody is on the same page.
- It is a good idea to explain your logic to your teammate and debug as it becomes clearer to you why you have made certain design decisions. (If you cannot explain it you do not fully understand it)
- Things can go wrong for you or your teammates but it is important not to hold grudges and to keep morale high in the team. People should help each other instead of just pointing the blame.
- keeping a good commit history and not copy and pasting just because it is convenient is crucial.
- for all cases, testing is very important.

## Mistakes I Made

Some minor errors were when everybody is working on different modules and there is some information mismatch. 
Most common were small syntax errors or changes made to sv files that have an impact on top files or other files.
Set deadlines for Cache that Utsav and I were not able to meet, hence making the team anxious and doubt if our tasks would be completed on time. 
Initial testing also could have been more thorough.

## What I Would do Differently

I am convinced our team worked extremely well together and am pleased everybody achieved their goals as the deadlines approached. Even though the cache took longer than expected, Utsav and I still delivered the cache sufficiently before the deadline. If I were to do this again, I would want to make sure the repo is tidy and make everybody work in one branch; while also having a backup branch.  