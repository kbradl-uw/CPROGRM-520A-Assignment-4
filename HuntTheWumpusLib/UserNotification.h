#pragma once

#include <functional>

namespace HuntTheWumpus
{
    // Inform the user about particular operations happening.
    class UserNotification final
    {
    public:

        enum class Notification
        {
        };

        UserNotification() = default;
        ~UserNotification() = default;

        void AddCallback(Notification category, std::function<void()>&& callback);

        void Notify(Notification category) const;

        UserNotification(const UserNotification&) = default;
        UserNotification(UserNotification&&) = default;
        UserNotification& operator=(const UserNotification&) = default;
        UserNotification& operator=(UserNotification&&) = default;

    private:

        // TODO: hold callbacks.
    };
}