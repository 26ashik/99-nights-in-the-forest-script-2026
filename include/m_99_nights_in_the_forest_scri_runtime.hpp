#pragma once
#include <cstdint>

namespace m_99_nights_in_the_forest_scri {
inline constexpr const char* kModuleName = "99-nights-in-the-forest-script-2026";
inline constexpr const char* kBuildSalt = "26dfdf44eedfaa82";
struct RuntimeConfig {
    uint32_t target_fps = 144;
    float fov_radius = 65.0f;
    float smooth_factor = 1.45f;
    bool draw_bounds = true;
};
} // namespace m_99_nights_in_the_forest_scri
