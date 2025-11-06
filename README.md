![AKL banner](https://raw.githubusercontent.com/TeamSHIRO/.github/refs/heads/main/profile/akl.png)
# AKL: A linker for !SHIRO's formats
[![Contributor Covenant](https://img.shields.io/badge/Contributor%20Covenant-3.0-0baaaa.svg)](CODE_OF_CONDUCT.md)
[![GitHub license](https://img.shields.io/github/license/TeamSHIRO/AKL.svg)](LICENSE)
[![GitHub contributors](https://img.shields.io/github/contributors/TeamSHIRO/AKL)](https://github.com/TeamSHIRO/AKL/graphs/contributors)

A linker to link ELF object files into !SHIRO's executable.

## Supported Formats
- Input: ELF object files
- Output:
  - **ELF** object files
  - **MEX** - **M**inimal **EX**ecutable files

## Usage
Empty because it didn't even work yet.

## Building

### Prerequisites

- A C++17 Compatible Compiler and Linker
- CMake 3.19 or Newer
- A Git Client

### Building for dummies

To build the project, follow these steps:
1. Clone the repository:
   ```bash
   git clone https://github.com/TeamSHIRO/AKL.git
   ```
2. CD to repository directory:
   ```bash
   cd AKL
   ```
3. Run CMake to configure the project. You may additionally add build options here. You can find options inside [CMakeLists.txt](CMakeLists.txt).
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
**AKL** is licensed under Apache License 2.0. See [**LICENSE**](LICENSE) and [**NOTICE**](NOTICE) for more details.
