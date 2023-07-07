# FlexiFlightVis

FlexiFlightVis is a program for a technical visualization of flexible airplanes.
It is intended to run the simulation of the flexible airplane in Matlab/Simulink.
However, since Matlab/Simulink has limited capabilities for 3D visualization, FlexiFlightVis can be used for visualization.
Therefore, the state of the airplane must be transferred from Matlab/Simulink to FlexiFlightVis via UDP for real-time visualization.
Because of the UDP interface, FlexiFlightVis can run on a different computer than the Matlab/Simulink simulation.
FlexiFlightVis assumes a certain organization of the aircraft state (struct).
Take a look at the example to see how it works.


## Installation

- Linux:  
  Download and run the AppImage in the Releases.

- Windows:  
  Currently not supported (but you can try to build from source).


## Example

FlexiFlightVis is used in the following research project:  
[https://github.com/iff-gsc/SE2A_Aviation_2023](https://github.com/iff-gsc/SE2A_Aviation_2023) 


## Build from source (Linux)

- Install Qt5:  
  ```
  sudo apt-get install qt5-default
  ```
- Install dependencies:  
  ```
  sudo apt-get install -y libglfw3-dev libgl1-mesa-dev libglu1-mesa-dev
  ```
- Clone FlexiFlightVis:  
  ```
  git clone https://github.com/iff-gsc/flexiflightvis.git
  ```
- Compile the program from Qt Creator or from terminal:  
  ```
  mkdir build
  cd build
  qmake ../FlexiFlightVis/FlexiFlightVis.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug
  make
  ```
