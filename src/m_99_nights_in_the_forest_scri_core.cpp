#include "../include/m_99_nights_in_the_forest_scri_runtime.hpp"
#include <windows.h>
#include <atomic>

namespace m_99_nights_in_the_forest_scri {
static std::atomic<bool> g_running{true};
void PollHotkeys(bool& menu_open) noexcept {
    if (GetAsyncKeyState(VK_INSERT) & 1) menu_open = !menu_open;
    if (GetAsyncKeyState(VK_END) & 1) g_running.store(false, std::memory_order_relaxed);
}
} // namespace m_99_nights_in_the_forest_scri

int main() {
    bool menu_open = true;
    while (m_99_nights_in_the_forest_scri::g_running.load(std::memory_order_relaxed)) {
        m_99_nights_in_the_forest_scri::PollHotkeys(menu_open);
        Sleep(6);
    }
    return 0;
}
