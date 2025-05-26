#include "authentication.hpp"

#include <fmt/format.h>
#include <jwt-cpp/jwt.h>

namespace passec {

std::string Authentication::HandleRequestThrow(const userver::server::http::HttpRequest &request,
      userver::server::request::RequestContext &) const {
  return passec::Authorize(request.GetArg("login"), request.GetArg("password"));
}

std::string Authorize(std::string_view login, std::string_view password) {
  return fmt::format("Hello, {}{}!\n", login, password);
}

} // namespace passec
