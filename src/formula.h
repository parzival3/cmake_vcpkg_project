#pragma once

namespace math {

class Formula {
public:
  template <typename cls> constexpr static auto identity(cls x) { return x; }
};

} // namespace math
