#pragma once

#include <list>
#include "Ticket.h"

namespace jy
{
    class TicketOffice
    {
    private:
        long m_amount;
        std::list<Ticket> m_tickets;

    public:
        TicketOffice(long amount, std::list<Ticket> tickets)
        {
            m_amount = amount;
            m_tickets = tickets;
        }

    public:
        Ticket GetTicket()
        {
            return m_tickets[0];
        }

        void minusAmount(long amount)
        {
            m_amount -= amount;
        }

        void plusAmount(long amount)
        {
            m_amount += amount;
        }
    };
}