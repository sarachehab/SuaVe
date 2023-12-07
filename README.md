# Team14

Single-Cycle RV32I Design 
<br>

Draft version for who is doing which part of README
<br>
| README | Alu | InstructMem | RegFile | Extend | PC | DataMem | ControlU | CPU | DataHazard | Pipeline | Cache |
|--------|-----|-------------|---------|--------|----|---------|----------|-----|------------|----------|-------|
| Sara   |     |             |         |        | ✔  |         |          | ✔   | ✔          |          |       |
| Lu     | ✔   |             | ✔       |        |    | ✔       |          |     |            | ✔        |       |
| Neil   |     |             |         | ✔      |    |         | ✔        |     |            |          | ✔     |
| Utsav  |     | ✔           |         |        |    |         | ✔        |     |            |          | ✔     |
<br>

Can everyone check the below table so it is correct?
<br>
|                | Sara             | Lu               | Neil        | Utsav   |
|----------------|------------------|------------------|-------------|---------|
| Alu            | tb               | sv & modified tb | modified sv |         |
| InstructionMem | tb               | modified sv      |             | sv      |
| RegisterFile   | tb               | modified tb & sv |             |         |
| Extend         | tb & modified sv |                  | sv          |         |
| PC             | sv & tb          | sv               |             |         |
| DataMemory     | sv & tb          | sv & tb          |             |         |
| ControlUnit    |                  |                  | sv & tb     | sv & tb |
| DataPath       |                  | sv               |             | tb      |
| CPU            |                  | tb               | sv          |         |
| Pipeline       | sv               | tb               |             |         |
| Cache          |                  |                  |             |         |