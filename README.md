# Academic Tracker
   
   A C++ application for tracking your Engineering academic progress.
   
   > **Note:** This project is in early development. Core logic is still being implemented.

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
cd AcademicTracker/
```


3. Build the Project using the following command
```bash
   mkdir build
   cd build
   cmake ..
   cmake --build .
```

4. Locate the Executable `AcademicTracker.exe` and  finally, run the Project using `./AcademicTracker.exe` in the command prompt

## **Installation on Linux**

### **Prerequisites:**

- ### C/C++ Compiler:
 Make sure you have a C/C++ compiler installed (Most Linux Distributions come with Compiler bundled with the kernel)
>To Check if your Linux Distribution Has a C/C++ Compiler, run `gcc --version` or `g++ --version`

- ### Git & CMake: To Clone the Repository can be installed using

    - Ubuntu/Debian Based Distributions

    ```bash
    sudo apt-get update
    sudo apt-get install git cmake
    ```

    - Fedora

    ```bash
    sudo dnf update
    sudo dnf install git cmake
    ```

    - Arch Linux
    ```bash
    sudo pacman -Sy
    sudo pacman -S git cmake
    ```


### **Installation** (Same in most of the Linux Distributions):
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