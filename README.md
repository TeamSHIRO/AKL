<div style="height: 175px; overflow: hidden;">
  <img src="https://raw.githubusercontent.com/TeamSHIRO/.github/refs/heads/main/profile/akl.png" 
       alt="AKL banner" 
       title="AKL banner"
       style="width: 100%; height: 100%; object-fit: cover;">
</div>

# AKL: A linker for !SHIRO's formats
[![Contributor Covenant](https://img.shields.io/badge/Contributor%20Covenant-3.0-0baaaa.svg)](CODE_OF_CONDUCT.md)
[![GitHub license](https://img.shields.io/github/license/TeamSHIRO/AKL.svg)](LICENSE)

A linker to link ELF object files into format defined by !SHIRO.

## Supported Formats
- Input: ELF object files
- Output:
  - **In Development** - **ELF** object files
  - **In Development** - **MEX** - **M**inimal **EX**ecutable files

## Features

Empty here too.

## Usage
Empty because it didn't even work yet.

## Building
### Prerequisites

- A C++17 Compatible Compiler and Linker
- CMake 3.19 or Newer
- A Git Client

### Building in a nutshell

To build the project, follow these steps:
1. Clone the repository:
   ```bash
   git clone https://github.com/TeamSHIRO/AKL.git
   ```
2. CD to repository directory:
   ```bash
   cd AKL
   ```
3. Run CMake to configure the project. You may additionally add build options here (`-D`). You can find available options inside [CMakeLists.txt](CMakeLists.txt).
    ```bash
    cmake -S . -B build
    ```
   Note: You can change `build` to your preferred build directory.
4. Build the project with CMake
    ```bash
    cmake --build build
    ```
   Note: Replace `build` with your build directory.


## Contributing
Please read the [**CONTRIBUTING**](CONTRIBUTING.md) guide for details on how to contribute to this project.

## License
<a href="https://www.apache.org/">
    <img src="https://www.apache.org/logos/originals/foundation.svg" alt="The Apache Software Foundation" align="right"; style="float: right; width: 400px;">
</a>

The **AKL** Project is licensed under Apache License 2.0.

The full text of the Apache License 2.0 can be obtained at: http://www.apache.org/licenses/LICENSE-2.0

Or in the [LICENSE](LICENSE) file included in this repository.

NOTICE file included in this repository can be found [here](NOTICE).
