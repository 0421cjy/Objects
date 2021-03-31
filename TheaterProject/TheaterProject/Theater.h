#pragma once

namespace jy
{
    class Theater
    {
    private:
        TicketSeller m_ticketSeller;

    public:
        Theater(TicketSeller* ticketSeller)
        {
            m_ticketSeller = ticketSeller;
        }

        void Enter(Audience* audience)
        {
            if (audience->GetBag().HasInvitation())
            {
                Ticket ticket = ticketSeller.GetTicketOffice().GetTicket();
                audience->GetBag().SetTicket(ticket);
            }
            else
            {
                Ticket ticket = ticketSeller.GetTicketOffice().GetTicket();
                audience.GetBag().minusAmount(ticket.GetFee());
                ticketSeller.GetTicketOffice().plusAmount(ticket.GetFee());
                audience.GetBag().SetTicket(ticket);
            }
        }
    };
}
