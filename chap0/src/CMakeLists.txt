cmake_minimum_required(VERSION 3.5)

project(hello-world)

add_executable(hello "hello.cpp")

install(TARGETS hello DESTINATION "/opt")

# debian packaging
set(CPACK_GENERATOR "DEB")

set(CPACK_PACKAGE_NAME "${PROJECT_NAME}")
set(CPACK_DEBIAN_FILE_NAME DEB-DEFAULT)

set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Hello world package")

set(CPACK_PACKAGE_CONTACT "private")
set(CPACK_DEBIAN_PACKAGE_SECTION "non-free/network")

set(CPACK_PACKAGE_VERSION_MAJOR "1")
set(CPACK_PACKAGE_VERSION_MINOR "0")
set(CPACK_PACKAGE_VERSION_PATCH "0")

set(CPACK_DEBIAN_PACKAGE_RELEASE "poky")

set(CPACK_DEBIAN_PACKAGE_ARCHITECTURE "amd64")
set(CPACK_DEBIAN_COMPRESSION_TYPE "gzip")
set(CPACK_DEBIAN_PACKAGE_DEPENDS "")
set(CPACK_DEBIAN_PACKAGE_PRIORITY "optional")
set(CPACK_DEBIAN_PACKAGE_HOMEPAGE "http://www.johnsoncontrols.com/")
set(CPACK_DEBIAN_PACKAGE_CONTROL_EXTRA "") # posinst goes here

set(CPACK_PACKAGE_VENDOR "Johnson Controls, Plc")

include(CPack)
