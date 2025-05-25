#pragma once

#include <string>
#include <string_view>

#include <userver/server/handlers/http_handler_base.hpp>

namespace passec {

class Authentication final : public userver::server::handlers::HttpHandlerBase {
public:
  static constexpr std::string_view kName = "handler-auth";

  using HttpHandlerBase::HttpHandlerBase;

  std::string HandleRequestThrow(
      const userver::server::http::HttpRequest &request,
      userver::server::request::RequestContext &) const override;
  
};

std::string Authorize(std::string_view login, std::string_view password);

} // namespace passec

