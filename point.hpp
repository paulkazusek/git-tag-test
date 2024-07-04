#pragma once

class Point
{
public:
    constexpr Point() = delete;

    constexpr Point(const double x, const double y)
        : m_x{x}, m_y{y}
    {
    }

    constexpr Point(const Point &) = default;
    Point &operator=(const Point &other) = default;
    constexpr ~Point() = default;

    [[nodiscard]] constexpr auto x() const -> double
    {
        return m_x;
    }

    [[nodiscard]] constexpr auto y() const -> double
    {
        return m_y;
    }

private:
    double m_x;
    double m_y;
};
