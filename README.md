# Academic Tracker in C++ Finally!!!
Perhaps this will do nothing much for now. No logic is added yet. Just the beginning.

**But Hey!, where there is a will, there is a way.**

## Installation on Windows
### Prerequisites:
- **C/C++ Compiler**: Make sure you have a C/C++ compiler installed
  - Watch this [YouTube Video](https://www.youtube.com/watch?v=Mmy7y8a-WdA) 
  - Or follow [This guide](https://ishaan1007.github.io/Learn-Cpp/cpp-comiler.html)
- **CMake**: [Download and install CMake](https://cmake.org/download/)
- **Git**: [Download and install Git](https://github.com/git-for-windows/git/releases/tag/v2.52.0.windows.1)

### Installation: 

1. Open Command Prompt (Press Windows + R, type `cmd` and press Enter)

2. Clone the Repository using the following command in your desired location.
```bash
git clone https://github.com/Jalal-Syed/AcademicTracker.git
cd /AcademicTracker/
```


3. Build the Project using the following command
```bash
   mkdir build
   cd build
   cmake ..
   cmake --build .
```

4. Finally, run the Project using `./AcademicTracker` in the command prompt

## Installation on Linux (UBUNTU / UBUNTU Based Distro)
### Prerequisites:
- **C/C++ Compiler**: Make sure you have a C/C++ compiler installed (Most Linux Distributions come with Compiler bundled with the kernel )

- **Git & CMake**: To Clone the Repository can be downloaded using
```bash
sudo apt-get update
sudo apt-get install git cmake
```
### Installation:
1. Clone the Github Repo using 
```bash
git clone https://github.com/Jalal-Syed/AcademicTracker.git
cd AcademicTracker/
```
2. Build the Project using the following command
```bash
   mkdir build
   cd build
   cmake ..
   cmake --build .
```
3. Finally, run the Project using `./AcademicTracker`

## Installation on Linux (FEDORA)
### Prerequisites:
- **C/C++ Compiler**: Make sure you have a C/C++ compiler installed (Most Linux Distributions come with Compiler bundled with the kernel)
```bash
sudo dnf update
sudo dnf install gcc g++
```
- **Git & CMake**: To Clone the Repository can be downloaded using
```bash
sudo dnf update
sudo dnf install git cmake
```
### Installation:
1. Clone the Github Repo using
```bash
git clone https://github.com/Jalal-Syed/AcademicTracker.git
cd AcademicTracker/
```
2. Build the Project using the following command
```bash
   mkdir build
   cd build
   cmake ..
   cmake --build .
```
3. Finally, run the Project using `./AcademicTracker`