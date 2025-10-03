# Find SFML
find_package(SFML 2.5 COMPONENTS system window graphics audio network REQUIRED)

# Collect all source files
file(GLOB BIN_FILES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
file(GLOB_RECURSE SRC_FILES "${PROJECT_SOURCE_DIR}/src/*.cpp")
# Exclude SFML header files from outsrc since we're using system SFML
file(GLOB_RECURSE OUTSRC_FILES "${PROJECT_SOURCE_DIR}/outsrc/*.cpp")

# Create executable with all source files
add_executable(prg ${BIN_FILES} ${SRC_FILES} ${OUTSRC_FILES})
target_include_directories(prg PRIVATE ${PROJECT_SOURCE_DIR}/src)
# Remove outsrc include since we're using system SFML

# Link SFML libraries
target_link_libraries(prg sfml-system sfml-window sfml-graphics sfml-audio sfml-network)
