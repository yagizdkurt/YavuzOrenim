add_compile_options(-Zc:__cplusplus)
file(GLOB BIN_FILES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
add_executable(prg ${BIN_FILES})
target_include_directories(prg PRIVATE ${PROJECT_SOURCE_DIR}/src)