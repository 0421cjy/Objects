#pragma once

namespace jy
{
    class Ticket
    {
    private:
        long m_fee;

    public:
        long GetFee() const
        {
            return m_fee;
        }
    };
}
