#pragma once

#include <string>
#include <string_view>

#include <userver/server/handlers/http_handler_base.hpp>

namespace passec {

    class Authentication final : public userver::server::handlers::HttpHandlerBase {

    };

std::string Authorize(std::string_view login, std::string_view password);

} // namespace passec

