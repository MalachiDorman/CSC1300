# TO USE:
# In the terminal in the directory with your make file
# Type "make" to build the executable
# Type "make run" to run the executable
# Type "make clean" to remove the executable

# Compiler and flags
CXX = g++
CXXFLAGS = -Wall

# TODO: Update the path
BASE_PATH = C:\Users\Malac\OneDrive\Documents\GitHub\CSC1300\Labs\Lab8

# Includes
INCLUDES = -I "$(BASE_PATH)\curl-8.6.0_3-win64-mingw\include" \
		   -I "$(BASE_PATH)\json\include"

# Library directories
LDFLAGS = -L "$(BASE_PATH)\curl-8.6.0_3-win64-mingw\lib"

# Libraries
LIBS = -lcurl

# Source files
SRCS = lab8.cpp

# Executable
TARGET = lab8_run

# Default target
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) $(INCLUDES) $(LIBS) $(LDFLAGS) -o $(TARGET)

# Run
run: 
	lab8_run

# Clean (may need to change to del $(TARGET).exe)
clean:
	del $(TARGET)