SET(${PROJECT_NAME}_spike_FLAGS "-Wall -Wextra")
SET(CMAKE_CXX_FLAGS "${${PROJECT_NAME}_spike_FLAGS}")

add_executable(sleep.exe sleep.cpp)
