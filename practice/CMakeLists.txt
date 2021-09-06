add_executable(vulkanSamples check/check.cpp window/window.cpp)

target_link_libraries(vulkanSamples ${CONAN_LIBS})
