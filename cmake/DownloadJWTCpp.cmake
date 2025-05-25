include(get_cpm)

CPMAddPackage(
  NAME jwt-cpp
  GITHUB_REPOSITORY Thalhammer/jwt-cpp
  GIT_TAG v0.7.0
)

CPMAddPackage(
  NAME picojson
  GITHUB_REPOSITORY kazuho/picojson
  GIT_TAG v1.3.0
)