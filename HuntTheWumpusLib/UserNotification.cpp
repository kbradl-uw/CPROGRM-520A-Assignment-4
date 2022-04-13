#include "UserNotification.h"

#include <stdexcept>

namespace HuntTheWumpus
{
    void UserNotification::AddCallback(const Notification category, std::function<void()>&& callback)
    {
    }
}
