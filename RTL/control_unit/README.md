
# CONTROL UNIT

## Refactoring Control Unit for Pipelining

The Control Unit had to be modified to implement pipelining.

The decision on whether a branch can be taken has now been delayed to the `EXECUTE` stage. 

The logic for `JBTaken` then had to be externalised. New outputs `JAL` and `Branch` were also introduced, only `HIGH` when their respective operations are being decoded:

![Pipeline](../../images/control_unit/pipelined_cpu_schematic_control.png)