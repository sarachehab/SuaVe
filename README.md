# Team14

Single-Cycle RV32I Design 
<br>

Draft version for who is doing which part of README
<br>
| README | Alu | InstructMem | RegFile | Extend | PC | DataMem | ControlU | CPU | DataHazard | Pipeline | Cache |
|--------|-----|-------------|---------|--------|----|---------|----------|-----|------------|----------|-------|
| Sara   |     |             |  ✔      |        | ✔  |         |          | ✔  |            | ✔        |       |
| Lu     | ✔   |             |         |        |    | ✔       |          | ✔  | ✔         | ✔        |       |
| Neil   |     |             |         | ✔      |    |         | ✔        |     |           |          | ✔     |
| Utsav  |     | ✔           |         |        |    |         | ✔        |     |           |          | ✔     |
<br>

Can everyone check the below table so it is correct?
<br>
|                | Sara Chehab | Lu Ju | Neil Radhu | Utsav Goel |
|----------------|-------------|-------|------------|------------|
| Alu            | ✖           | ✔ ✖  |            |            |
| InstructionMem | ✖           |       |            | ✔         |
| RegisterFile   | ✖           | ✔    |            |            |
| Extend         | ✔ ✖         |      | ✔          |            |
| PC             | ✔ ✖         |      |            |            |
| DataMem        | ✖           | ✔ ✖  |            |            |
| ControlUnit    |              |      | ✔ ✖       | ✔ ✖       |
| DataPath       |              |  ✔   |            | ✖         |
| CPU            | ✖           | ✖    | ✔ ✖        | ✖         |
| Pipeline       | ✔           | ✖    |            |            |
| Cache          |              |      | ✔ ✖       | ✔ ✖       |

so right now Lu&Sara are agreeing on: Lu is doing
- data hazard (eg stalls, forwarding, and flush)
- pipelining testing (over all testing and everything)
- dataMem
- pdf testing for main single cycle cpu
- alu 

What ig what Sara is doing
- pipelining schemetic (eg the choice of the stages and the cycle implementation)
- F1 testing and implementation 
- PC
