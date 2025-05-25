include(FetchContent)

FetchContent_Declare(
    jwt-cpp
    GIT_REPOSITORY https://github.com/Thalhammer/jwt-cpp.git
    GIT_TAG v0.7.0
)

CPMAddPackage(
  NAME jsoncons
  GITHUB_REPOSITORY danielaparker/jsoncons
  VERSION 0.171.0
)

FetchContent_MakeAvailable(jwt-cpp)