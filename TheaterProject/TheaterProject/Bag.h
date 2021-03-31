#pragma once

#include "Invitation.h"
#include "Ticket.h"

namespace jy
{
    class Bag
    {
    private:
        long m_amount;
        Invitation* m_invitation;
        Ticket m_ticket;

    public:
        Bag(long amount)
            :Bag(nullptr, amount)
        {
           
        }

        Bag(Invitation* invitation, long amount)
        {
            m_invitation = invitation;
            m_amount = amount;
        }

    public:
        bool HasInvitation() const;
        bool HasTicket() const;
        void SetTicket(Ticket* ticket);
        void minusAmount(long amount);
        void plusAmount(long amount);
    };
}
