# Interface simulator

1. [Overview](#overview)
2. [Setup](#setup)
3. [Usage](#usage)
4. [Example](#example)

## Overview
This is a recruitment task for the Rocket's Electronics team at AGH Space Systems. It's a simple device-user interface simulator written in pure C, that's meant to be platform independent.


## Setup
First, clone and enter the repository:
```sh
git clone https://github.com/Griger5/space_systems_task.git
cd space_systems_task
```
Next steps are platform dependant. 
#### On Linux:
```sh
cmake -S . -B build
cd build
make
```
And now you can run the program:
```sh
./interface_sim
```
#### On Windows:
```sh
cmake -S . -B build
```
Then, build the _**interface_sim.sln**_ using Visual Studio. You will then find the executable _**interface_sim.exe**_ inside _build/Debug/_ directory.

## Usage
The program is a simple CLI. The command syntax is as follows:
```sh
ACTION [PARAM] [VALUE]
```

### ACTION:
#### HELP
Lists all available commands and parameters.
#### EXIT
Exits the program.
#### GET _param_ 
Outputs the value of the given parameter
#### SET _param_ _value_
Sets value of the given parameter to a new one.

### PARAM:
#### TEMP
Temperature.
#### PRESSURE
Pressure.
#### ALTITUDE
Altitude.

### VALUE:
Has to be a valid floating point number.

## Example:
```sh
>>> ./interface_sim
>>> GET TEMP
0.000000
>>> SET TEMP 10.5
>>> GET TEMP
10.500000
>>> SET
No parameter was given.
>>> GET TEST
Unknown parameter. Maybe try the 'HELP' command?
>>> HELP
SYNTAX:
         COMMAND [PARAM] [VALUE]

COMMAND: EXIT
         Exits the program.
COMMAND: HELP
         Lists all available commands.
COMMAND: SET _param_ _value_
         Sets inputed _param_ to the given _value_.
         _param_ has to be equal to one of: TEMP, PRESSURE, ATLITUDE.
         _value_ has to be a valid number of type double, seperated by a period.
COMMAND: GET _param_
         Outputs the value of a given _param_.
         _param_ has to be equal to one of: TEMP, PRESSURE, ATLITUDE.
>>> SET PRESSURE 2.A
Given value is not a valid number.
>>> GET PRESSURE
0.000000
>>> EXIT
```