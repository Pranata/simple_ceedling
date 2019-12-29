# Simple Ceedling Experiment

This simple ceedling experiment demonstrates very minimalistic cmock to mock a dependent module.
In this example a led module has a dependency on gpio module and gpio module has a dependency on port module.

The gpio module itself is not implemented and port module is only included as a header file on gpio header file. The led module instance shall initialize the gpio instance when the led instance is created.

In this example it shows how cmock is used to mock the gpio initialization and gpio set function so the led module can be tested as a single module using ceedling.
