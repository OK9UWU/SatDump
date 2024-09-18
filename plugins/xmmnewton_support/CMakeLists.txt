cmake_minimum_required(VERSION 3.12)
project(xmm_newton_support)

file(GLOB_RECURSE xmm_newton_support_CPPS *.cpp)
add_library(xmm_newton_support SHARED ${xmm_newton_support_CPPS})
target_link_libraries(xmm_newton_support PUBLIC satdump_core)
target_include_directories(xmm_newton_support PUBLIC src)

install(TARGETS xmm_newton_support DESTINATION lib/satdump/plugins)