# <center> **Sara Chehab - CID 02300594** </center>

## Useful Links

- [UVM](https://github.com/luju1108/Team14/tree/main/project)
- [exe.sh](https://github.com/luju1108/Team14/tree/main/project/shellscript)
- [Program Counter](https://github.com/luju1108/Team14/tree/main/project/pc)
- [Instruction Memory](https://github.com/luju1108/Team14/tree/main/project/instructMem)
- [Data Memory](https://github.com/luju1108/Team14/tree/main/project/dataPath/dataMem)
- [ALU](https://github.com/luju1108/Team14/tree/main/project/dataPath/alu)
- [Refactor Control Unit for Pipelining](https://github.com/luju1108/Team14/tree/proj-pipeline/RTL/control_unit)
- [Single Cycle](https://github.com/luju1108/Team14/tree/main/RTL)
- [Pipeline Registers](https://github.com/luju1108/Team14/tree/proj-pipeline/RTL/pipeline_registers)
- [Pipeline](https://github.com/luju1108/Team14/tree/proj-pipeline/RTL)
- [Refactor Pipeline for Cache](https://github.com/luju1108/Team14/tree/proj-direct_cache/RTL)


## What I Contributed to

### Repository Management

- Tidying up the repository, deleting redundant files and proof-reading readme [here](https://github.com/luju1108/Team14/commit/6f943a7ff841b05931256c90f58ef241f779b7cb) and [here](https://github.com/luju1108/Team14/commit/4f8da29d7fb0d08fd3797f9776718c697cca39d4)
- Wrote `exe.sh` program [here](https://github.com/luju1108/Team14/commit/6f943a7ff841b05931256c90f58ef241f779b7cb)
- Modified `.gitignore` to exclude `obj_dir` folders and `.vcd` files in feature branches
- Wrote team write-up [here](https://github.com/luju1108/Team14/commit/472f26eeea62419414789edcbe3a9f13d160f820)

### Research, Testing and Debugging

- Read through reference program, and figured out instructions needed to execute it
- Researched into `UVM` testbenches, and wrote outlines of model C++ program, first draft [here](https://github.com/luju1108/Team14/commit/bdf5d4425ac07a33398e6d0808ee9ceca609d4dc)
- Read through Harris & Harris' <i>Digital Design and Computer Architecture</i> and recommended insightful excerpts
- Wrote Python Program with Lu to verify output PDFs [here](https://github.com/luju1108/Team14/commit/416ffdc6dcb29350e29ce8d20ee7761623ec085a)
- Wrote Python Program to plot outputted PDFs [here](https://github.com/luju1108/Team14/commit/6f943a7ff841b05931256c90f58ef241f779b7cb)
- Wrote F1 Lights assembly code taking input from user, and debugged it with Utsav, [here](https://github.com/luju1108/Team14/commit/efa207d84912e653f5a7528990ddc1653e1b87c9) and [here](https://github.com/luju1108/Team14/commit/990a938a0bdaad3f1f6482d78624ac76599fcc18)
- Debugged [`SignExtendUnit`](https://github.com/luju1108/Team14/commit/cba477252b7326684436a90ccef6c76bc467e8c5#diff-e9c2acb8e3f2deeb735faa19a1371f7718fce1f86b577d03f29ea8aacd4f8529), [`ALU`](!), [`RegisterFile`](https://github.com/luju1108/Team14/commit/cead9822a944d3630a08e0d6efc5b8606f4e5e67#diff-13789fcf78b18f07061a534940b2146d109a50e5c86d44863829e5967a4ea89f), [`PC`](https://github.com/luju1108/Team14/commit/89f63b20e0d27781ad93f71df7c15dcbe215f1ce) and [`MainDecoder`](https://github.com/luju1108/Team14/commit/5556d24a493c099c1409b024b44bbd6dcee8d661) through `WaveTracer`

### Single Cycle CPU

- Designed and implemented `Program Counter`, [here](https://github.com/luju1108/Team14/commit/f3f137159de6537860ed9a852e0b76e60e89bcd3) and [here](https://github.com/luju1108/Team14/commit/89f63b20e0d27781ad93f71df7c15dcbe215f1ce)
- Worked with Utsav to design `Instruction Memory` [here](https://github.com/luju1108/Team14/commit/599e622101655169a20c30915e777efd770a5532) and [here](https://github.com/luju1108/Team14/commit/c55b7ff9c58d30017bfca594a0dd2c2d97f5b822)
- Collaborated with Lu to design `Data Memory`, [here](https://github.com/luju1108/Team14/commit/a56040d180a438e9c2bd13e6ae680be0bae52c7d) and [here](https://github.com/luju1108/Team14/commit/3d769218c8c835e295146415ec68ec44e9788878)
- Modified clocked components so that synchronous Write are made on the falling clock edge [here](https://github.com/luju1108/Team14/commit/c1a5b2059ee9b1fb2dfa7b64fdbc6af3f6bbd2bd)
- Suggested adding a fourth bit to `ALUControl` to Neil and Utsav [here](https://github.com/luju1108/Team14/commit/9654801d4c0e0b06e07727db4f326acc4104bc67)
- Endeavoured to identify necessary hardware and inputs needed to implement `JAL` and `JALR` instructions, [here](https://github.com/luju1108/Team14/commit/89f63b20e0d27781ad93f71df7c15dcbe215f1ce)
- Suggested adding a fourth pin to the `Result Multiplexer` to implement `UpperImmediate` instructions [here](https://github.com/luju1108/Team14/commit/2acb4157bb82442c1a44dd1a389a579b92e47bcd)
- Drew top view of CPU, [here](https://github.com/luju1108/Team14/tree/main/RTL)
- Wrote UVM testbenches to test [`SignExtendUnit`](https://github.com/luju1108/Team14/commit/cba477252b7326684436a90ccef6c76bc467e8c5#diff-e9c2acb8e3f2deeb735faa19a1371f7718fce1f86b577d03f29ea8aacd4f8529), [`ALU`](!), [`RegisterFile`](https://github.com/luju1108/Team14/commit/cead9822a944d3630a08e0d6efc5b8606f4e5e67#diff-13789fcf78b18f07061a534940b2146d109a50e5c86d44863829e5967a4ea89f), [`PC`](https://github.com/luju1108/Team14/commit/89f63b20e0d27781ad93f71df7c15dcbe215f1ce) and [`MainDecoder`](https://github.com/luju1108/Team14/commit/5556d24a493c099c1409b024b44bbd6dcee8d661), and debugged
- Debugged the overall CPU alongside the whole team, [here](https://github.com/luju1108/Team14/commit/9267f635944ccf38a9d578dc10b07e04ef3d91b5) and [here](https://github.com/luju1108/Team14/commit/ca8ba43fc3f1b9c6ec5b4942984968ecc04192b1)
- Identified bug with `Result Multiplexer` during single-cycle testing, [here](https://github.com/luju1108/Team14/commit/9267f635944ccf38a9d578dc10b07e04ef3d91b5)
- Identified bug with `DataMemory` during testing, later corrected by Lu [here](https://github.com/luju1108/Team14/commit/ca8ba43fc3f1b9c6ec5b4942984968ecc04192b1)

### Pipeline CPU

- Discussed with Lu the possibility of implementing pipelining in three stages, but decided on sticking to five
- Drew-up top view of pipelined CPU, [here](https://github.com/luju1108/Team14/tree/proj-pipeline/RTL)
- Added necessary hardware to implement `JALR` and `UpperImmediate` instructions, [here](https://github.com/luju1108/Team14/commit/0ce52fa37e34925e90282c5133a6fa9954e97663)
- Designed and implemented pipeline registers with `Clear` and `Enable` pins and chose to write synchronously on positive edge to spare write conflicts with other clocked components  [here](https://github.com/luju1108/Team14/commit/9d375254212ddacc5dbb05be56ebb677dedbd71d) and [here](https://github.com/luju1108/Team14/commits/proj-pipeline?before=ca56c141b54ea45d1b2e39e2f7b1d77933540d59+35)
- Modified `ControlUnit` to decide on `Branch`, `JAL` and `JALR` instructions during `EXECUTE` Stage [here](https://github.com/luju1108/Team14/commit/a27dddb424f2cc0a17caeb5c68202d084c102da4)
- Wrote `top file `for pipelined CPU here, and corrected minor typos [here](https://github.com/luju1108/Team14/commit/9d97e355de602c455393e3d9128f4e7bdac8f560) and [here](https://github.com/luju1108/Team14/commit/200fc75bfaf2ff560dfd3fb01c9c22eafc3238a9)
- Tested pipelined CPU with Lu, and fixed minor bugs in `Hazard Unit` related to `Forwarding` [here](https://github.com/luju1108/Team14/commit/ddaab2e1a171796b79873548943bbb10038d46f6)
- Modified PDF testbench to correctly sample distributions despite stalls [here](https://github.com/luju1108/Team14/commit/320babede60f957643a839b3835b5a6bdcff8092) and [here](https://github.com/luju1108/Team14/commit/d18bfaa6d5ec3d117a2dd9412f602b9012cc05d1)

### Cache

- Drew top-view schematic for `cache`, [here](https://github.com/luju1108/Team14/tree/proj-direct_cache/RTL)
- Refactored the Pipelined CPU and `Control Unit` to adjust to pipelining [here](https://github.com/luju1108/Team14/commit/b6f92ad89614730106e6181bc7b0bf91a081c47a)
- Measured performance of `cache` with Neil, [here](https://github.com/luju1108/Team14/commit/bff4ae51bda57c31b40d2e0868465f2d798a9f0e)
- Brainstormed with Utsav and Neil ideas to implement 4-way associative cache with spatial locality


## What I learned

#### Soft Skills

- Tackled problems from a project management perspective, dividing work into subproblems, setting milestones to keep up with individual progress
- Organised my time juggling coursework and lectures to meet milestones in time
- Learned effective communication, and learned to find convincing examples to support my ideas
- Learned effective team-work techniques, like task delegation and asking/providing assistance when blocked
- Learned the importance of thoroughly understanding the project-brief and design before working, and asking for clarifications when necessary

#### Technical Skills

- Got the chance to apply the theoretical knowledge I gained throughout the term
- Learned more about computer architecture, acquired in-depth understanding of pipelining and hazard and discovered the concept of associate cache
- Learned the importance of code documentation and expliciting logic behind choices, especially when another team member is working on the same file
- Explored open-source materials, and adapted models to match project-specific needs through CPU schematics
- Applied reverse engineering technique to understand and appropriate UVM
- Learned the basic of Git and version-control, even though it was quite perplexing at first
- Learned the basics of Shell Scripts while working on `exe.sh`
- Researched extensively, and discovered HDLs through SystemVerilog and testing techniques like UVM
- Learned to be more meticulous in my work, and ensure no (or a minimum) of typos stay in

#### Other

- Got to know Lu, Neil and Utsav, and learned a lot from them ;)

## Mistakes I made

- Started working on Single Cycle CPU without a top-view schematic in mind first; It was a very confusing experience which resulted in multiple modifications to Control Signals within the `ControlUnit`. I insisted to draw the schematic first and foremost for pipelining, which saved us a lot of work in the long run: we had a CPU up and running in the span of a day ;)
- Skimmed through the project brief without focusing on the details, which made it particularly annoying because of foolish oversights; I quickly mitigated that mistake by going over the brief in great details a few days after the project start-date
- Was not documented enough on version control before project start, which contributed to the loss of version history in main
- Underestimated the time it would take to write UVM testbenches; I was very keen on writing one for the overall CPU, but unfortunately lacked the time to do so

## What I would have done differently

- Drawn up schematic for Single Cycle CPU before writing `.sv` files for individual components
- Added a `TYPES` file to our code to make it more readable
- Spent more time learning Git before the project start date
- Solve Git merge conflicts as they arise; it would have spared us the issue with the lost commit history in main :'(

## Future Scopes

- Add a `TYPES` file to make code clearer
- Write `UVM` testbench to test the whole CPU
- Implemented 4-way associative cache with write capabilities and dirty-bits with Utsav and Neil