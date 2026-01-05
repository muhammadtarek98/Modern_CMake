# Modern CMake Examples

This repository contains a collection of practical examples demonstrating modern CMake features and best practices. Each example is self-contained and focuses on a specific CMake concept or technique.

## Overview

Modern CMake (3.0+) introduces a target-based approach that makes build configurations more maintainable and modular. This repository provides hands-on examples to help you learn and master modern CMake practices.

## Prerequisites

- CMake 3.10 or higher (some examples require 3.20+)
- C++ compiler with C++20 support
- Git (for cloning submodules)

## Repository Structure

```
Modern_CMake/
├── HelloWorld/              # Basic "Hello World" example
├── hello_cmake/             # Simple CMake project
├── cpp_standards/           # Setting C++ standards
├── includes/                # Managing include directories
├── VS_CMAKE_organize/       # Organizing files for Visual Studio
├── add_libraries/           # Creating and linking static libraries
├── create_lib/              # Building a library project
├── use_MyMathLib/           # Using custom libraries
├── find_library/            # Finding system libraries
├── find_package/            # Using find_package
└── add_external_lib/        # Adding external libraries via git submodules
```

## Examples

### 1. HelloWorld / hello_cmake
**Concepts**: Basic CMake project setup

The simplest possible CMake project that compiles a single C++ file into an executable.

**Build Instructions**:
```bash
cd hello_cmake
cmake -B build
cmake --build build
./build/hello_cmake
```

### 2. cpp_standards
**Concepts**: Setting C++ language standards

Demonstrates how to specify the C++ standard (C++20) and make it required for your project.

**Build Instructions**:
```bash
cd cpp_standards
cmake -B build
cmake --build build
./build/cpp_standards
```

### 3. includes
**Concepts**: Managing include directories with `target_include_directories`

Shows how to organize header files in a separate directory and include them in your project using modern CMake's target-based approach.

**Build Instructions**:
```bash
cd includes
cmake -B build
cmake --build build
./build/includes
```

### 4. VS_CMAKE_organize
**Concepts**: Project organization, `file(GLOB)`, `source_group`

Demonstrates how to organize source files and headers for better IDE integration, particularly with Visual Studio. Uses `source_group` to create filters in the IDE.

**Build Instructions**:
```bash
cd VS_CMAKE_organize
cmake -B build
cmake --build build
./build/VS_CMAKE_organize
```

### 5. add_libraries
**Concepts**: Creating and linking static libraries with `add_subdirectory`

Shows how to create a library in a subdirectory and link it to your main executable using modern CMake's `target_link_libraries`.

**Build Instructions**:
```bash
cd add_libraries
cmake -B build
cmake --build build
./build/add_libraries
```

### 6. create_lib
**Concepts**: Building standalone library, installation targets

Demonstrates how to create a standalone static library project with proper include directories and installation rules.

**Build Instructions**:
```bash
cd create_lib
cmake -B build
cmake --build build
```

### 7. use_MyMathLib
**Concepts**: Linking to external libraries

Shows how to use a library created in another project by specifying include and library directories manually.

**Note**: This example references paths from `create_lib`. You need to build `create_lib` first and update the paths in `CMakeLists.txt` to match your system.

### 8. find_library
**Concepts**: Using `find_library` to locate system libraries

Demonstrates how to search for libraries on your system using `find_library` with various search parameters.

**Build Instructions**:
```bash
cd find_library
cmake -B build
cmake --build build
```

### 9. find_package
**Concepts**: Using `find_package` with CMake package configs

Shows how to find and use packages that provide CMake configuration files (like GLEW).

**Build Instructions**:
```bash
cd find_package
cmake -B build
cmake --build build
```

**Note**: Requires GLEW to be installed on your system.

### 10. add_external_lib
**Concepts**: Adding external libraries via git submodules, `add_subdirectory`

Demonstrates how to include external libraries (like GLFW) directly in your project using git submodules and build them alongside your code.

**Build Instructions**:
```bash
git submodule update --init --recursive
cd add_external_lib
cmake -B build
cmake --build build
./build/add_external_lib
```

## Key Modern CMake Concepts Covered

1. **Target-based approach**: Using targets instead of variables (`target_link_libraries`, `target_include_directories`)
2. **Visibility keywords**: PUBLIC, PRIVATE, and INTERFACE
3. **Generator expressions**: Modern CMake conditionals
4. **Subdirectories**: Modular project organization with `add_subdirectory`
5. **External dependencies**: Multiple approaches to managing dependencies
6. **Build configurations**: Setting compiler standards and build options

## Best Practices

- Use `target_*` commands instead of directory-wide commands
- Prefer `target_link_libraries` with visibility specifiers (PUBLIC/PRIVATE/INTERFACE)
- Set `CMAKE_CXX_STANDARD` and `CMAKE_CXX_STANDARD_REQUIRED` for consistent C++ version
- Use `add_subdirectory` for organizing complex projects
- Leverage `find_package` when available for external dependencies
- Use git submodules or FetchContent for including external source libraries

## Contributing

Feel free to add more examples or improve existing ones. Each example should be self-contained and focus on a specific CMake feature.

## Resources

- [CMake Official Documentation](https://cmake.org/documentation/)
- [Modern CMake Guide](https://cliutils.gitlab.io/modern-cmake/)
- [Effective Modern CMake](https://gist.github.com/mbinna/c61dbb39bca0e4fb7d1f73b0d66a4fd1)

## License

This project is intended for educational purposes.
