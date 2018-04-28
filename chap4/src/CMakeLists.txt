cmake_minimum_required(VERSION 3.5)

project(grading)

add_executable("${PROJECT_NAME}"  "")

target_sources("${PROJECT_NAME}"
    PRIVATE
    "grading.cpp"
    "grade.cpp"
    "student_info.cpp"
    "median.cpp"
    )

target_include_directories("${PROJECT_NAME}"
    PRIVATE
    "${PROJECT_SOURCE_DIR}"
    )
