#pragma once

namespace jy
{
    class TicketSeller
    {
    private:
        TicketOffice* m_ticketOffice;

    public:
        TicketSeller(ticketOffice* ticketOffice)
        {
            m_ticketOffice = ticketOffice;
        }

        TicketOffice* GetTicketOffice()
        {
            return m_ticketOffice;
        }
    };
}
