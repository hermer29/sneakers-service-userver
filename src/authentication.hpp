#pragma once

#include <string>
#include <string_view>

namespace passec {

    class Authentication;

std::string Authorize(std::string_view login, std::string_view password);

} // namespace passec

