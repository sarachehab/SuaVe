# Team14

Single-Cycle RV32I Design 
<br>

|                | Sara             | Lu               | Neil        | Utsav        |
|----------------|------------------|------------------|-------------|--------------|
| Alu            | tb               | sv & modified tb | modified sv |              |
| InstructionMem | tb               | modified sv      |             | sv           |
| RegisterFile   | tb               | modified tb & sv |             |              |
| Extend         | tb & modified sv |                  | sv          |              |
| PC             | sv & tb          | sv               |             |              |
| DataMemory     | sv & tb          | sv & tb          |             |              |
| ControlUnit    |                  |                  | sv & tb     | sv & tb      |
| DataPath       |                  | sv & started tb  |             | completed tb |