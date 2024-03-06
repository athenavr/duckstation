#pragma once

#include <type_traits>
#include <utility>

#define RAWTYPE(x) std::remove_cv_t<std::remove_reference_t<decltype(x)>>

inline auto to_unsigned(const auto& n)
{
  return (std::make_unsigned_t<RAWTYPE(n)>)(n);
}
