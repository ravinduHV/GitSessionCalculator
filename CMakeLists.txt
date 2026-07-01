cmake_minimum_required(VERSION 3.16)

project(
    Calculator
    VERSION 1.0.0
    DESCRIPTION "Object-Oriented Calculator Application"
    LANGUAGES CXX
)

# ----------------------------------------
# C++ Standard
# ----------------------------------------
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# ----------------------------------------
# Include Directories
# ----------------------------------------
include_directories(include)

# ----------------------------------------
# Source Files
# ----------------------------------------
set(SOURCES
    src/main.cpp
    src/Calculator.cpp
    src/CalculatorUI.cpp
)

# ----------------------------------------
# Create Executable
# ----------------------------------------
add_executable(${PROJECT_NAME} ${SOURCES})

# ----------------------------------------
# Compiler Warnings
# ----------------------------------------
if(MSVC)
    target_compile_options(${PROJECT_NAME} PRIVATE /W4)
else()
    target_compile_options(${PROJECT_NAME} PRIVATE
        -Wall
        -Wextra
        -Wpedantic
    )
endif()

# ----------------------------------------
# Output Directory
# ----------------------------------------
set_target_properties(${PROJECT_NAME}
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

# ----------------------------------------
# Installation (Optional)
# ----------------------------------------
install(TARGETS ${PROJECT_NAME}
    RUNTIME DESTINATION bin
)